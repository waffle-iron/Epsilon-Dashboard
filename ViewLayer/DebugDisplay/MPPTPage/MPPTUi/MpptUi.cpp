#include"MpptUi.h"
#include "ui_MpptUi.h"

MpptUi::MpptUi() :
    ui_(new Ui::MpptUi)
{
    ui_->setupUi(this);
    QPixmap bkgnd(":/Resources/Background.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette background;
    background.setBrush(QPalette::Background, bkgnd);
    this->setPalette(background);
}

MpptUi::~MpptUi()
{
    delete ui_;
}

QWidget& MpptUi::mppt0()
{
    return *ui_->mppt0;
}

QWidget& MpptUi::mppt1()
{
    return *ui_->mppt1;
}

QWidget& MpptUi::mppt2()
{
    return *ui_->mppt2;
}

QLabel& MpptUi::mppt0Header()
{
    return *ui_->mppt0Header;
}

QLabel& MpptUi::mppt1Header()
{
    return *ui_->mppt1Header;
}

QLabel& MpptUi::mppt2Header()
{
    return *ui_->mppt2Header;
}

QWidget& MpptUi::mppt0AliveIndicator()
{
    return *ui_->mppt0AliveIndicator;
}

QWidget& MpptUi::mppt1AliveIndicator()
{
    return *ui_->mppt1AliveIndicator;
}

QWidget& MpptUi::mppt2AliveIndicator()
{
    return *ui_->mppt2AliveIndicator;
}

QLabel& MpptUi::mppt0AliveLabel()
{
    return *ui_->mppt0AliveLabel;
}

QLabel& MpptUi::mppt1AliveLabel()
{
    return *ui_->mppt1AliveLabel;
}

QLabel& MpptUi::mppt2AliveLabel()
{
    return *ui_->mppt2AliveLabel;
}

QLabel& MpptUi::mppt0ArrayVoltageLabel()
{
    return *ui_->mppt0ArrayVoltageLabel;
}

QLabel& MpptUi::mppt1ArrayVoltageLabel()
{
    return *ui_->mppt1ArrayVoltageLabel;
}

QLabel& MpptUi::mppt2ArrayVoltageLabel()
{
    return *ui_->mppt2ArrayVoltageLabel;
}

QLabel& MpptUi::mppt0ArrayVoltage()
{
    return *ui_->mppt0ArrayVoltage;
}

QLabel& MpptUi::mppt1ArrayVoltage()
{
    return *ui_->mppt1ArrayVoltage;
}

QLabel& MpptUi::mppt2ArrayVoltage()
{
    return *ui_->mppt2ArrayVoltage;
}

QLabel& MpptUi::mppt0ArrayCurrentLabel()
{
    return *ui_->mppt0ArrayCurrentLabel;
}

QLabel& MpptUi::mppt1ArrayCurrentLabel()
{
    return *ui_->mppt1ArrayCurrentLabel;
}

QLabel& MpptUi::mppt2ArrayCurrentLabel()
{
    return *ui_->mppt2ArrayCurrentLabel;
}

QLabel& MpptUi::mppt0ArrayCurrent()
{
    return *ui_->mppt0ArrayCurrent;
}

QLabel& MpptUi::mppt1ArrayCurrent()
{
    return *ui_->mppt1ArrayCurrent;
}

QLabel& MpptUi::mppt2ArrayCurrent()
{
    return *ui_->mppt2ArrayCurrent;
}

QLabel& MpptUi::mppt0ArrayPowerLabel()
{
    return *ui_->mppt0ArrayPowerLabel;
}

QLabel& MpptUi::mppt1ArrayPowerLabel()
{
    return *ui_->mppt1ArrayPowerLabel;
}

QLabel& MpptUi::mppt2ArrayPowerLabel()
{
    return *ui_->mppt2ArrayPowerLabel;
}

QLabel& MpptUi::mppt0ArrayPower()
{
    return *ui_->mppt0ArrayPower;
}

QLabel& MpptUi::mppt1ArrayPower()
{
    return *ui_->mppt1ArrayPower;
}

QLabel& MpptUi::mppt2ArrayPower()
{
    return *ui_->mppt2ArrayPower;
}

QLabel& MpptUi::mppt0BatteryVoltageLabel()
{
    return *ui_->mppt0BatteryVoltageLabel;
}

QLabel& MpptUi::mppt1BatteryVoltageLabel()
{
    return *ui_->mppt1BatteryVoltageLabel;
}

QLabel& MpptUi::mppt2BatteryVoltageLabel()
{
    return *ui_->mppt2BatteryVoltageLabel;
}

QLabel& MpptUi::mppt0BatteryVoltage()
{
    return *ui_->mppt0BatteryVoltage;
}

QLabel& MpptUi::mppt1BatteryVoltage()
{
    return *ui_->mppt1BatteryVoltage;
}

QLabel& MpptUi::mppt2BatteryVoltage()
{
    return *ui_->mppt2BatteryVoltage;
}

QLabel& MpptUi::mppt0TemperatureLabel()
{
    return *ui_->mppt0TemperatureLabel;
}

QLabel& MpptUi::mppt1TemperatureLabel()
{
    return *ui_->mppt1TemperatureLabel;
}

QLabel& MpptUi::mppt2TemperatureLabel()
{
    return *ui_->mppt2TemperatureLabel;
}

QLabel& MpptUi::mppt0Temperature()
{
    return *ui_->mppt0Temperature;
}

QLabel& MpptUi::mppt1Temperature()
{
    return *ui_->mppt1Temperature;
}

QLabel& MpptUi::mppt2Temperature()
{
    return *ui_->mppt2Temperature;
}

QLabel& MpptUi::totalArrayPowerLabel()
{
    return *ui_->totalArrayPowerLabel;
}

QLabel& MpptUi::totalArrayPower()
{
    return *ui_->totalArrayPower;
}
