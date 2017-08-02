#pragma once
#include "I_MpptUi.h"

namespace Ui
{
    class MpptUi;
}

class MpptUi : public I_MpptUi
{
    Q_OBJECT
public:
    explicit MpptUi();
    ~MpptUi();

    QWidget& mppt0();
    QWidget& mppt1();
    QWidget& mppt2();

    QLabel& mppt0Header();
    QLabel& mppt1Header();
    QLabel& mppt2Header();

    QWidget& mppt0AliveIndicator();
    QWidget& mppt1AliveIndicator();
    QWidget& mppt2AliveIndicator();

    QLabel& mppt0AliveLabel();
    QLabel& mppt1AliveLabel();
    QLabel& mppt2AliveLabel();

    QLabel& mppt0ArrayVoltageLabel();
    QLabel& mppt1ArrayVoltageLabel();
    QLabel& mppt2ArrayVoltageLabel();

    QLabel& mppt0ArrayVoltage();
    QLabel& mppt1ArrayVoltage();
    QLabel& mppt2ArrayVoltage();

    QLabel& mppt0ArrayCurrentLabel();
    QLabel& mppt1ArrayCurrentLabel();
    QLabel& mppt2ArrayCurrentLabel();

    QLabel& mppt0ArrayCurrent();
    QLabel& mppt1ArrayCurrent();
    QLabel& mppt2ArrayCurrent();

    QLabel& mppt0ArrayPowerLabel();
    QLabel& mppt1ArrayPowerLabel();
    QLabel& mppt2ArrayPowerLabel();

    QLabel& mppt0ArrayPower();
    QLabel& mppt1ArrayPower();
    QLabel& mppt2ArrayPower();

    QLabel& mppt0BatteryVoltageLabel();
    QLabel& mppt1BatteryVoltageLabel();
    QLabel& mppt2BatteryVoltageLabel();

    QLabel& mppt0BatteryVoltage();
    QLabel& mppt1BatteryVoltage();
    QLabel& mppt2BatteryVoltage();

    QLabel& mppt0TemperatureLabel();
    QLabel& mppt1TemperatureLabel();
    QLabel& mppt2TemperatureLabel();

    QLabel& mppt0Temperature();
    QLabel& mppt1Temperature();
    QLabel& mppt2Temperature();

    QLabel& totalArrayPowerLabel();
    QLabel& totalArrayPower();
private:
    Ui::MpptUi* ui_;
};

