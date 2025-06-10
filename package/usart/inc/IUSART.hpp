#pragma once 

#include <stdint.h>
#include <string>

class IUSART
{
public:
    virtual void setCOMPort(uint8_t COM) = 0;
    virtual void setBaudrate(uint32_t baud) = 0;
    virtual void setDataBits(uint8_t dataBits) = 0;
    virtual void setParity(uint8_t parity) = 0;
    virtual void setStopbits(uint8_t stopBits) = 0;

    virtual void write(std::string txString) = 0;
    virtual void read(std::string rxString) = 0;
};