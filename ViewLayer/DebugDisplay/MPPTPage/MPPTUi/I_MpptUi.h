#pragma once

#include <QLabel>


class I_MpptUi: public QWidget
{
    Q_OBJECT
public:
    virtual ~I_MpptUi() {}

    virtual QWidget& mppt0() = 0;
    virtual QWidget& mppt1() = 0;
    virtual QWidget& mppt2() = 0;

    virtual QLabel& mppt0Header() = 0;
    virtual QLabel& mppt1Header() = 0;
    virtual QLabel& mppt2Header() = 0;

    virtual QWidget& mppt0AliveIndicator() = 0;
    virtual QWidget& mppt1AliveIndicator() = 0;
    virtual QWidget& mppt2AliveIndicator() = 0;

    virtual QLabel& mppt0AliveLabel() = 0;
    virtual QLabel& mppt1AliveLabel() = 0;
    virtual QLabel& mppt2AliveLabel() = 0;

    virtual QLabel& mppt0ArrayVoltageLabel() = 0;
    virtual QLabel& mppt1ArrayVoltageLabel() = 0;
    virtual QLabel& mppt2ArrayVoltageLabel() = 0;

    virtual QLabel& mppt0ArrayVoltage() = 0;
    virtual QLabel& mppt1ArrayVoltage() = 0;
    virtual QLabel& mppt2ArrayVoltage() = 0;

    virtual QLabel& mppt0ArrayCurrentLabel() = 0;
    virtual QLabel& mppt1ArrayCurrentLabel() = 0;
    virtual QLabel& mppt2ArrayCurrentLabel() = 0;

    virtual QLabel& mppt0ArrayCurrent() = 0;
    virtual QLabel& mppt1ArrayCurrent() = 0;
    virtual QLabel& mppt2ArrayCurrent() = 0;

    virtual QLabel& mppt0ArrayPowerLabel() = 0;
    virtual QLabel& mppt1ArrayPowerLabel() = 0;
    virtual QLabel& mppt2ArrayPowerLabel() = 0;

    virtual QLabel& mppt0ArrayPower() = 0;
    virtual QLabel& mppt1ArrayPower() = 0;
    virtual QLabel& mppt2ArrayPower() = 0;

    virtual QLabel& mppt0BatteryVoltageLabel() = 0;
    virtual QLabel& mppt1BatteryVoltageLabel() = 0;
    virtual QLabel& mppt2BatteryVoltageLabel() = 0;

    virtual QLabel& mppt0BatteryVoltage() = 0;
    virtual QLabel& mppt1BatteryVoltage() = 0;
    virtual QLabel& mppt2BatteryVoltage() = 0;

    virtual QLabel& mppt0TemperatureLabel() = 0;
    virtual QLabel& mppt1TemperatureLabel() = 0;
    virtual QLabel& mppt2TemperatureLabel() = 0;

    virtual QLabel& mppt0Temperature() = 0;
    virtual QLabel& mppt1Temperature() = 0;
    virtual QLabel& mppt2Temperature() = 0;

    virtual QLabel& totalArrayPowerLabel() = 0;
    virtual QLabel& totalArrayPower() = 0;
};
