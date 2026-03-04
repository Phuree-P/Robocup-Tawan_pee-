#include "modbus_rtu.hpp"

ModbusRTU::ModbusRTU(){
    cout << "Initial Modbus protocal" << endl;
}

ModbusRTU::~ModbusRTU(){
    closePort();
    cout << "Modbus close port" << endl;
}

bool ModbusRTU::init(const string& port, int baud){
    return openPort(port, baud);
}

bool ModbusRTU::isConnected(){
    return serial_fd_ >= 0;
}

bool ModbusRTU::sendData(uint8_t slave_id, uint16_t start_addr, const vector<float>& data){
    auto frame = buildWriteFrame(slave_id, start_addr, data);
    write(serial_fd_, frame.data(), frame.size());

    uint8_t resp[8];
    return read(serial_fd_, resp, 8) == 8;
}

bool ModbusRTU::readData(uint8_t slave_id, uint8_t function_code, uint16_t start_addr, uint16_t count, vector<float>& data){
    auto frame = buildReadFrame(slave_id, function_code, start_addr, count);
    write(serial_fd_, frame.data(), frame.size());

    size_t expected = 3 + (count * 2) * 2 + 2;
    std::vector<uint8_t> resp(expected);

    if (read(serial_fd_, resp.data(), expected) != (int)expected)
        return false;

    uint16_t crc_rx = resp[expected - 2] | (resp[expected - 1] << 8);
    resp.resize(expected - 2);

    if (crc16(resp) != crc_rx)
        return false;

    data.clear();
    for (size_t i = 3; i < resp.size(); i += 4)
        data.push_back(beToFloat(&resp[i]));

    return true;
}

/* Serial */
bool ModbusRTU::openPort(const string& port, int baud){
    serial_fd_ = open(port.c_str(), O_RDWR | O_NOCTTY | O_SYNC);
    if (serial_fd_ < 0)
        return false;

    termios tty{};
    tcgetattr(serial_fd_, &tty);

    cfsetospeed(&tty, baud);
    cfsetispeed(&tty, baud);

    tty.c_cflag = (tty.c_cflag & ~CSIZE) | CS8;
    tty.c_cflag |= CLOCAL | CREAD;
    tty.c_cflag &= ~(PARENB | CSTOPB | CRTSCTS);

    tty.c_lflag = 0;
    tty.c_iflag = 0;
    tty.c_oflag = 0;

    tty.c_cc[VMIN]  = 0;
    tty.c_cc[VTIME] = 10;

    tcsetattr(serial_fd_, TCSANOW, &tty);
    return true;
}

void ModbusRTU::closePort(){
    if (serial_fd_ >= 0)
        close(serial_fd_);
    serial_fd_ = -1;
}

/* Modbus */
uint16_t ModbusRTU::crc16(const vector<uint8_t>& data){
    uint16_t crc = 0xFFFF;
    for (size_t i = 0; i<data.size(); i++){
        uint8_t b = data[i];
        crc ^= b;
        for (int i = 0; i < 8; i++)
            crc = (crc & 1) ? (crc >> 1) ^ 0xA001 : crc >> 1;
    }
    return crc;
}

void ModbusRTU::floatToBE(float v, vector<uint8_t>& buf){
    uint8_t tmp[4];
    memcpy(tmp, &v, 4);
    buf.insert(buf.end(), {tmp[3], tmp[2], tmp[1], tmp[0]});
}

float ModbusRTU::beToFloat(const uint8_t* data){
    uint8_t tmp[4] = {data[3], data[2], data[1], data[0]};
    float v;
    memcpy(&v, tmp, 4);
    return v;
}

vector<uint8_t> ModbusRTU::buildWriteFrame(uint8_t slave_id, uint16_t start_addr, const vector<float>& data){
    std::vector<uint8_t> frame;
    uint16_t regs = data.size() * 2;

    frame = {
        slave_id, FUNC_WRITE_HOLDING_REGISTER,
        uint8_t(start_addr >> 8), uint8_t(start_addr),
        uint8_t(regs >> 8), uint8_t(regs),
        uint8_t(regs * 2)
    };

    for (size_t i = 0; i< data.size(); i++){
        float v = data[i];
        floatToBE(v, frame);
    }

    uint16_t crc = crc16(frame);
    frame.push_back(crc & 0xFF);
    frame.push_back(crc >> 8);

    return frame;
}
vector<uint8_t> ModbusRTU::buildReadFrame(uint8_t slave_id, uint8_t function_code, uint16_t start_addr, uint16_t count){
    std::vector<uint8_t> frame = {
        slave_id, function_code,
        uint8_t(start_addr >> 8), uint8_t(start_addr),
        uint8_t((count * 2) >> 8), uint8_t(count * 2)
    };

    uint16_t crc = crc16(frame);
    frame.push_back(crc & 0xFF);
    frame.push_back(crc >> 8);

    return frame;
}