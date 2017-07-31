#pragma once

#include <QLabel>


class I_MpptUi: public QWidget
{
    Q_OBJECT
public:
    virtual ~I_MpptUi() {}

    virtual QWidget& MPPT0() = 0;
    virtual QWidget& MPPT1() = 0;
    virtual QWidget& MPPT2() = 0;

    virtual QLabel& MPPT0Header() = 0;
    virtual QLabel& MPPT1Header() = 0;
    virtual QLabel& MPPT2Header() = 0;

    virtual QWidget& MPPT0AliveIndicator() = 0;
    virtual QWidget& MPPT1AliveIndicator() = 0;
    virtual QWidget& MPPT2AliveIndicator() = 0;

    virtual QLabel& MPPT0AliveLabel() = 0;
    virtual QLabel& MPPT1AliveLabel() = 0;
    virtual QLabel& MPPT2AliveLabel() = 0;

    virtual QLabel& MPPT0ArrayVoltageLabel() = 0;
    virtual QLabel& MPPT1ArrayVoltageLabel() = 0;
    virtual QLabel& MPPT2ArrayVoltageLabel() = 0;

    virtual QLabel& MPPT0ArrayVoltage() = 0;
    virtual QLabel& MPPT1ArrayVoltage() = 0;
    virtual QLabel& MPPT2ArrayVoltage() = 0;

    virtual QLabel& MPPT0ArrayCurrentLabel() = 0;
    virtual QLabel& MPPT1ArrayCurrentLabel() = 0;
    virtual QLabel& MPPT2ArrayCurrentLabel() = 0;

    virtual QLabel& MPPT0ArrayCurrent() = 0;
    virtual QLabel& MPPT1ArrayCurrent() = 0;
    virtual QLabel& MPPT2ArrayCurrent() = 0;

    virtual QLabel& MPPT0ArrayPowerLabel() = 0;
    virtual QLabel& MPPT1ArrayPowerLabel() = 0;
    virtual QLabel& MPPT2ArrayPowerLabel() = 0;

    virtual QLabel& MPPT0ArrayPower() = 0;
    virtual QLabel& MPPT1ArrayPower() = 0;
    virtual QLabel& MPPT2ArrayPower() = 0;

    virtual QLabel& MPPT0BatteryVoltageLabel() = 0;
    virtual QLabel& MPPT1BatteryVoltageLabel() = 0;
    virtual QLabel& MPPT2BatteryVoltageLabel() = 0;

    virtual QLabel& MPPT0BatteryVoltage() = 0;
    virtual QLabel& MPPT1BatteryVoltage() = 0;
    virtual QLabel& MPPT2BatteryVoltage() = 0;

    virtual QLabel& MPPT0TemperatureLabel() = 0;
    virtual QLabel& MPPT1TemperatureLabel() = 0;
    virtual QLabel& MPPT2TemperatureLabel() = 0;

    virtual QLabel& MPPT0Temperature() = 0;
    virtual QLabel& MPPT1Temperature() = 0;
    virtual QLabel& MPPT2Temperature() = 0;

    virtual QLabel& TotalArrayPowerLabel() = 0;
    virtual QLabel& TotalArrayPower() = 0;
};
