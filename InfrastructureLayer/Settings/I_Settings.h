#pragma once

class I_Settings
{
public:
    virtual ~I_Settings() {}

    //configured by values in config.ini
    virtual QString ipAddress() const = 0;
    virtual quint16 udpPort() const = 0;
    virtual int forwardPeriod() const = 0;
    virtual QString packetTitle() const = 0;
    virtual QString exchangeName() const = 0;
};
