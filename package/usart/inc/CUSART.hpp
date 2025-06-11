#pragma once

#include <IUSART.hpp>

class CUSART : public IUSART
{
public:
    CUSART();
    ~CUSART() = default;

    virtual void setPort(int8_t COM) override;
    virtual void setBaudrate(int32_t baud) override;
    virtual void setDataBits(int8_t dataBits) override;
    virtual void setParity(int8_t parity) override;
    virtual void setStopbits(int8_t stopBits) override;

    virtual void write(std::string txString) override;
    virtual void read(std::string rxString) override;
private:
protected:
};