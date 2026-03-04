#ifndef MODBUS_RTU_HPP__
#define MODBUS_RTU_HPP__

#include <cstdint>
#include <cstring>

#include <iostream>
#include <string>
#include <vector>
#include <fcntl.h>
#include <unistd.h>

#include <termios.h>

#define IREDCR_SLAVE_ID             0x01
#define FUNC_READ_HOLDING_REGISTER  0x03
#define FUNC_READ_INPUT_REGISTER    0x04
#define FUNC_WRITE_HOLDING_REGISTER 0x10
#define ADDR_SPEED_MOTOR            0x0000
#define ADDR_IMU_RAW                0x0008
#define ADDR_PID_FLEFT              0x0008
#define ADDR_PID_FRIGHT             0x000E
#define ADDR_PID_RLEFT              0x0014
#define ADDR_PID_RRIGHT             0x001A
#define ADDR_PID_RESET              0x0020
#define ADDR_IMU_CALIBRATION        0x0022
#define ADDR_ENCODER_RATIO          0x0024

using namespace std;

class ModbusRTU{
    public:
        ModbusRTU();
        ~ModbusRTU();

        bool init(const string& port, int baud);
        bool isConnected();
        void closePort();

        /* Modbus API */
        bool sendData(uint8_t slave_id, uint16_t start_addr, const vector<float>& data);
        bool readData(uint8_t slave_id, uint8_t function_code, uint16_t start_addr, uint16_t count, vector<float>& data);
    
    private:
        int serial_fd_ = -1;
        
        /* Serial */
        bool openPort(const string& port, int baud);

        /* Modbus */
        uint16_t crc16(const vector<uint8_t>& data);
        void floatToBE(float v, vector<uint8_t>& buf);
        float beToFloat(const uint8_t* data);

        vector<uint8_t> buildWriteFrame(uint8_t slave_id, uint16_t start_addr, const vector<float>& data);
        vector<uint8_t> buildReadFrame(uint8_t slave_id, uint8_t function_code, uint16_t start_addr, uint16_t count);
};

#endif