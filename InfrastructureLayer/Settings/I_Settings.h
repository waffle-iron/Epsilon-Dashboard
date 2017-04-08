#pragma once

class I_Settings
{
public:
    virtual ~I_Settings() {}
    virtual QString ipAddress() const = 0;
    virtual quint16 udpPort() const = 0;
    virtual int forwardPeriod() const = 0;
    virtual QString packetTitle() const = 0;
    virtual QString exchangeName() const = 0;
    virtual int numberOfCmus() const = 0;
    virtual int numberOfMotors() const = 0;
    virtual int numberOfMppts() const = 0;
};
