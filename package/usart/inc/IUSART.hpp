#pragma once 

#include <stdint.h>
#include <string>

class IUSART
{
public:
    virtual void setPort(int8_t COM) = 0;
    virtual void setBaudrate(int32_t baud) = 0;
    virtual void setDataBits(int8_t dataBits) = 0;
    virtual void setParity(int8_t parity) = 0;
    virtual void setStopbits(int8_t stopBits) = 0;

    virtual void write(std::string txString) = 0;
    virtual void read(std::string rxString) = 0;
};