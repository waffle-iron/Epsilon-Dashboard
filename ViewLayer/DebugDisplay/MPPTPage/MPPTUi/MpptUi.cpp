#include"MpptUi.h"
#include "ui_MpptUi.h"
#include <QGraphicsOpacityEffect>

MpptUi::MpptUi() :
    ui_(new Ui::MpptUi)
{
    ui_->setupUi(this);

    QPalette pal = this->palette();
    pal.setColor(QPalette::Window, Qt::black);
    this->setPalette(pal);
    //Setting the opacity

    QGraphicsOpacityEffect *opacity0 = new QGraphicsOpacityEffect;
    QGraphicsOpacityEffect *opacity1 = new QGraphicsOpacityEffect;
    QGraphicsOpacityEffect *opacity2 = new QGraphicsOpacityEffect;
    opacity0->setOpacity(0.85);
    opacity1->setOpacity(0.85);
    opacity2->setOpacity(0.85);
    ui_->MPPT0->setGraphicsEffect(opacity0);
    ui_->MPPT1->setGraphicsEffect(opacity1);
    ui_->MPPT2->setGraphicsEffect(opacity2);
}

MpptUi::~MpptUi()
{
    delete ui_;
}

QWidget& MpptUi::MpptUi::MPPT0()
{
    return *ui_->MPPT0;
}

QWidget& MpptUi::MPPT1()
{
    return *ui_->MPPT1;
}

QWidget& MpptUi::MPPT2()
{
    return *ui_->MPPT2;
}

QLabel& MpptUi::MPPT0Header()
{
    return *ui_->MPPT0Header;
}

QLabel& MpptUi::MPPT1Header()
{
    return *ui_->MPPT1Header;
}

QLabel& MpptUi::MPPT2Header()
{
    return *ui_->MPPT2Header;
}

QWidget& MpptUi::MPPT0AliveIndicator()
{
    return *ui_->MPPT0AliveIndicator;
}

QWidget& MpptUi::MPPT1AliveIndicator()
{
    return *ui_->MPPT1AliveIndicator;
}

QWidget& MpptUi::MPPT2AliveIndicator()
{
    return *ui_->MPPT2AliveIndicator;
}

QLabel& MpptUi::MPPT0AliveLabel()
{
    return *ui_->MPPT0AliveLabel;
}

QLabel& MpptUi::MPPT1AliveLabel()
{
    return *ui_->MPPT1AliveLabel;
}

QLabel& MpptUi::MPPT2AliveLabel()
{
    return *ui_->MPPT2AliveLabel;
}

QLabel& MpptUi::MPPT0ArrayVoltageLabel()
{
    return *ui_->MPPT0ArrayVoltageLabel;
}

QLabel& MpptUi::MPPT1ArrayVoltageLabel()
{
    return *ui_->MPPT1ArrayVoltageLabel;
}

QLabel& MpptUi::MPPT2ArrayVoltageLabel()
{
    return *ui_->MPPT2ArrayVoltageLabel;
}

QLabel& MpptUi::MPPT0ArrayVoltage()
{
    return *ui_->MPPT0ArrayVoltage;
}

QLabel& MpptUi::MPPT1ArrayVoltage()
{
    return *ui_->MPPT1ArrayVoltage;
}

QLabel& MpptUi::MPPT2ArrayVoltage()
{
    return *ui_->MPPT2ArrayVoltage;
}

QLabel& MpptUi::MPPT0ArrayCurrentLabel()
{
    return *ui_->MPPT0ArrayCurrentLabel;
}

QLabel& MpptUi::MPPT1ArrayCurrentLabel()
{
    return *ui_->MPPT1ArrayCurrentLabel;
}

QLabel& MpptUi::MPPT2ArrayCurrentLabel()
{
    return *ui_->MPPT2ArrayCurrentLabel;
}

QLabel& MpptUi::MPPT0ArrayCurrent()
{
    return *ui_->MPPT0ArrayCurrent;
}

QLabel& MpptUi::MPPT1ArrayCurrent()
{
    return *ui_->MPPT1ArrayCurrent;
}

QLabel& MpptUi::MPPT2ArrayCurrent()
{
    return *ui_->MPPT2ArrayCurrent;
}

QLabel& MpptUi::MPPT0ArrayPowerLabel()
{
    return *ui_->MPPT0ArrayPowerLabel;
}

QLabel& MpptUi::MPPT1ArrayPowerLabel()
{
    return *ui_->MPPT1ArrayPowerLabel;
}

QLabel& MpptUi::MPPT2ArrayPowerLabel()
{
    return *ui_->MPPT2ArrayPowerLabel;
}

QLabel& MpptUi::MPPT0ArrayPower()
{
    return *ui_->MPPT0ArrayPower;
}

QLabel& MpptUi::MPPT1ArrayPower()
{
    return *ui_->MPPT1ArrayPower;
}

QLabel& MpptUi::MPPT2ArrayPower()
{
    return *ui_->MPPT2ArrayPower;
}

QLabel& MpptUi::MPPT0BatteryVoltageLabel()
{
    return *ui_->MPPT0BatteryVoltageLabel;
}

QLabel& MpptUi::MPPT1BatteryVoltageLabel()
{
    return *ui_->MPPT1BatteryVoltageLabel;
}

QLabel& MpptUi::MPPT2BatteryVoltageLabel()
{
    return *ui_->MPPT2BatteryVoltageLabel;
}

QLabel& MpptUi::MPPT0BatteryVoltage()
{
    return *ui_->MPPT0BatteryVoltage;
}

QLabel& MpptUi::MPPT1BatteryVoltage()
{
    return *ui_->MPPT1BatteryVoltage;
}

QLabel& MpptUi::MPPT2BatteryVoltage()
{
    return *ui_->MPPT2BatteryVoltage;
}

QLabel& MpptUi::MPPT0TemperatureLabel()
{
    return *ui_->MPPT0TemperatureLabel;
}

QLabel& MpptUi::MPPT1TemperatureLabel()
{
    return *ui_->MPPT1TemperatureLabel;
}

QLabel& MpptUi::MPPT2TemperatureLabel()
{
    return *ui_->MPPT2TemperatureLabel;
}

QLabel& MpptUi::MPPT0Temperature()
{
    return *ui_->MPPT0Temperature;
}

QLabel& MpptUi::MPPT1Temperature()
{
    return *ui_->MPPT1Temperature;
}

QLabel& MpptUi::MPPT2Temperature()
{
    return *ui_->MPPT2Temperature;
}

QLabel& MpptUi::TotalArrayPowerLabel()
{
    return *ui_->TotalArrayPowerLabel;
}

QLabel& MpptUi::TotalArrayPower()
{
    return *ui_->TotalArrayPower;
}

