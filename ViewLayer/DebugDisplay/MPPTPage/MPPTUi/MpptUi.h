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

    QWidget& mppt0AliveIndicator();
    QWidget& mppt1AliveIndicator();
    QWidget& mppt2AliveIndicator();

    QLabel& mppt0ArrayVoltage();
    QLabel& mppt1ArrayVoltage();
    QLabel& mppt2ArrayVoltage();

    QLabel& mppt0ArrayCurrent();
    QLabel& mppt1ArrayCurrent();
    QLabel& mppt2ArrayCurrent();

    QLabel& mppt0ArrayPower();
    QLabel& mppt1ArrayPower();
    QLabel& mppt2ArrayPower();

    QLabel& mppt0BatteryVoltage();
    QLabel& mppt1BatteryVoltage();
    QLabel& mppt2BatteryVoltage();

    QLabel& mppt0Temperature();
    QLabel& mppt1Temperature();
    QLabel& mppt2Temperature();

    QLabel& totalArrayPower();
private:
    Ui::MpptUi* ui_;
};

