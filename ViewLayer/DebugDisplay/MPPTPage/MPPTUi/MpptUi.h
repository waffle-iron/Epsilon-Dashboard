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

    QWidget& MPPT0();
    QWidget& MPPT1();
    QWidget& MPPT2();

    QLabel& MPPT0Header();
    QLabel& MPPT1Header();
    QLabel& MPPT2Header();

    QWidget& MPPT0AliveIndicator();
    QWidget& MPPT1AliveIndicator();
    QWidget& MPPT2AliveIndicator();

    QLabel& MPPT0AliveLabel();
    QLabel& MPPT1AliveLabel();
    QLabel& MPPT2AliveLabel();

    QLabel& MPPT0ArrayVoltageLabel();
    QLabel& MPPT1ArrayVoltageLabel();
    QLabel& MPPT2ArrayVoltageLabel();

    QLabel& MPPT0ArrayVoltage();
    QLabel& MPPT1ArrayVoltage();
    QLabel& MPPT2ArrayVoltage();

    QLabel& MPPT0ArrayCurrentLabel();
    QLabel& MPPT1ArrayCurrentLabel();
    QLabel& MPPT2ArrayCurrentLabel();

    QLabel& MPPT0ArrayCurrent();
    QLabel& MPPT1ArrayCurrent();
    QLabel& MPPT2ArrayCurrent();

    QLabel& MPPT0ArrayPowerLabel();
    QLabel& MPPT1ArrayPowerLabel();
    QLabel& MPPT2ArrayPowerLabel();

    QLabel& MPPT0ArrayPower();
    QLabel& MPPT1ArrayPower();
    QLabel& MPPT2ArrayPower();

    QLabel& MPPT0BatteryVoltageLabel();
    QLabel& MPPT1BatteryVoltageLabel();
    QLabel& MPPT2BatteryVoltageLabel();

    QLabel& MPPT0BatteryVoltage();
    QLabel& MPPT1BatteryVoltage();
    QLabel& MPPT2BatteryVoltage();

    QLabel& MPPT0TemperatureLabel();
    QLabel& MPPT1TemperatureLabel();
    QLabel& MPPT2TemperatureLabel();

    QLabel& MPPT0Temperature();
    QLabel& MPPT1Temperature();
    QLabel& MPPT2Temperature();

    QLabel& TotalArrayPowerLabel();
    QLabel& TotalArrayPower();
private:
    Ui::MpptUi* ui_;
};

