#include "MotorUi.h"
#include "ui_MotorUi.h"
MotorUi::MotorUi():
    ui_(new Ui::MotorUi)
{
    ui_->setupUi(this);
    QPixmap bkgnd(":/Resources/Background.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette background;
    background.setBrush(QPalette::Background, bkgnd);
    this->setPalette(background);
}

MotorUi::~MotorUi()
{
    delete ui_;
}

QLabel& ControlUi::setCurrentLeftLabel()
{
    return *ui_->setCurrentLeftLabel;
}

QLabel& ControlUi::setCurrentAvgLabel()
{
    return *ui_->setCurrentAvgLabel;
}

QLabel& ControlUi::setCurrentRightLabel()
{
    return *ui_->setCurrentLeftLabel;
}

QLabel& ControlUi::setVelocityLeftLabel()
{
    return *ui_->setVelocityLeftLabel;
}

QLabel& ControlUi::setVelocityAvgLabel()
{
    return *ui_->setVelocityAvgLabel;
}

QLabel& ControlUi::setVelocityRightLabel()
{
    return *ui_->setVelocityRightLabel;
}

QLabel& ControlUi::busCurrentLeftLabel()
{
    return *ui_->busCurrentLeftLabel;
}

QLabel& ControlUi::busCurrentAvgLabel()
{
    return *ui_->busCurrentAvgLabel;
}

QLabel& ControlUi::busCurrentRightLabel()
{
    return *ui_->busCurrentRightLabel;
}

QLabel& ControlUi::busVoltageLeftLabel()
{
    return *ui_->busVoltageLeftLabel;
}

QLabel& ControlUi::busVoltageAvgLabel()
{
    return *ui_->busVoltageAvgLabel;
}

QLabel& ControlUi::busVoltageRightLabel()
{
    return *ui_->busVoltageRightLabel;
}

QLabel& ControlUi::vehicleVelocityLeftLabel()
{
    return *ui_->vehicleVelocityLeftLabel;
}

QLabel& ControlUi::vehicleVelocityAvgLabel()
{
    return *ui_->vehicleVelocityAvgLabel;
}

QLabel& ControlUi::vehicleVelocityRightLabel()
{
    return *ui_->vehicleVelocityRightLabel;
}

QLabel& ControlUi::phaseCCurrentLeftLabel()
{
    return *ui_->phaseCCurrentLeftLabel;
}

QLabel& ControlUi::phaseCCurrentAvgLabel()
{
    return *ui_->phaseCCurrentAvgLabel;
}

QLabel& ControlUi::phaseCCurrentRightLabel()
{
    return *ui_->phaseCCurrentRightLabel;
}

QLabel& ControlUi::phaseBCurrentLeftLabel()
{
    return *ui_->phaseBCurrentLeftLabel;
}

QLabel& ControlUi::phaseBCurrentAvgLabel()
{
    return *ui_->phaseBCurrentAvgLabel;
}

QLabel& ControlUi::phaseBCurrentRightLabel()
{
    return *ui_->phaseBCurrentRightLabel;
}

QLabel& ControlUi::motorVoltageRealLeftLabel()
{
    return *ui_->motorVoltageRealLeftLabel;
}

QLabel& ControlUi::motorVoltageRealAvgLabel()
{
    return *ui_->motorVoltageRealAvgLabel;
}

QLabel& ControlUi::motorVoltageRealRightLabel()
{
    return *ui_->motorVoltageRealRightLabel;
}

QLabel& ControlUi::motorVoltageImaginaryLeftLabel()
{
    return *ui_->motorVoltageImaginaryLeftLabel;
}

QLabel& ControlUi::motorVoltageImaginaryAvgLabel()
{
    return *ui_->motorVoltageImaginaryAvgLabel;
}

QLabel& ControlUi::motorVoltageImaginaryRightLabel()
{
    return *ui_->motorVoltageImaginaryRightLabel;
}

QLabel& ControlUi::motorCurrentRealLeftLabel()
{
    return *ui_->motorCurrentRealLeftLabel;
}

QLabel& ControlUi::motorCurrentRealAvgLabel()
{
    return *ui_->motorCurrentRealAvgLabel;
}

QLabel& ControlUi::motorCurrentRealRightLabel()
{
    return *ui_->motorCurrentRealRightLabel;
}

QLabel& ControlUi::motorCurrentImaginaryLeftLabel()
{
    return *ui_->motorCurrentImaginaryLeftLabel;
}

QLabel& ControlUi::motorCurrentImaginaryAvgLabel()
{
    return *ui_->motorCurrentImaginaryAvgLabel;
}

QLabel& ControlUi::motorCurrentImaginaryRightLabel()
{
    return *ui_->motorCurrentImaginaryRightLabel;
}

QLabel& ControlUi::backEmfRealLeftLabel()
{
    return *ui_->backEmfRealLeftLabel;
}

QLabel& ControlUi::backEmfRealAvgLabel()
{
    return *ui_->backEmfRealAvgLabel;
}

QLabel& ControlUi::backEmfRealRightLabel()
{
    return *ui_->backEmfRealRightLabel;
}

QLabel& ControlUi::voltageRail15VSupplyLeftLabel()
{
    return *ui_->voltageRail15VSupplyLeftLabel;
}

QLabel& ControlUi::voltageRail15VSupplyAvgLabel()
{
    return *ui_->voltageRail15VSupplyAvgLabel;
}

QLabel& ControlUi::voltageRail15VSupplyRightLabel()
{
    return *ui_->voltageRail15VSupplyRightLabel;
}

QLabel& ControlUi::voltageRail3VSupplyLeftLabel()
{
    return *ui_->voltageRail3VSupplyLeftLabel;
}

QLabel& ControlUi::voltageRail3VSupplyAvgLabel()
{
    return *ui_->voltageRail3VSupplyAvgLabel;
}

QLabel& ControlUi::voltageRail3VSupplyRightLabel()
{
    return *ui_->voltageRail3VSupplyRightLabel;
}

QLabel& ControlUi::voltageRail1VSupplyLeftLabel()
{
    return *ui_->voltageRail1VSupplyLeftLabel;
}

QLabel& ControlUi::voltageRail1VSupplyAvgLabel()
{
    return *ui_->voltageRail1VSupplyAvgLabel;
}

QLabel& ControlUi::voltageRail1VSupplyRightLabel()
{
    return *ui_->voltageRail1VSupplyRightLabel;
}

QLabel& ControlUi::heatSinkTempLeftLabel()
{
    return *ui_->heatSinkTempLeftLabel;
}

QLabel& ControlUi::heatSinkTempAvgLabel()
{
    return *ui_->heatSinkTempAvgLabel;
}

QLabel& ControlUi::heatSinkTempRightLabel()
{
    return *ui_->heatSinkTempRightLabel;
}

QLabel& ControlUi::motorTempLeftLabel()
{
    return *ui_->motorTempLeftLabel;
}

QLabel& ControlUi::motorTempAvgLabel()
{
    return *ui_->motorTempAvgLabel;
}

QLabel& ControlUi::motorTempRightLabel()
{
    return *ui_->motorTempRightLabel;
}

QLabel& ControlUi::dspBoardTempLeftLabel()
{
    return *ui_->dspBoardTempLeftLabel;
}

QLabel& ControlUi::dspBoardTempAvgLabel()
{
    return *ui_->dspBoardTempAvgLabel;
}

QLabel& ControlUi::dspBoardTempRightLabel()
{
    return *ui_-dspBoardTempRightLabel;
}

QLabel& ControlUi::dcBusAmpHoursLeftLabel()
{
    return *ui_->dcBusAmpHoursLeftLabel;
}

QLabel& ControlUi::dcBusAmpHoursAvgLabel()
{
    return *ui_->dcBusAmpHoursAvgLabel;
}

QLabel& ControlUi::dcBusAmpHoursRightLabel()
{
    return *ui_-dcBusAmpHoursRightLabel;
}

QLabel& ControlUi::odometerLeftLabel()
{
    return *ui_->odometerLeftLabel;
}

QLabel& ControlUi::odometerAvgLabel()
{
    return *ui_->odometerAvgLabel;
}

QLabel& ControlUi::odometerRightLabel()
{
    return *ui_->odometerRightLabel;
}

QLabel& ControlUi::slipSpeedLeftLabel()
{
    return *ui_->slipSpeedLeftLabel;
}

QLabel& ControlUi::slipSpeedAvgLabel()
{
    return *ui_->slipSpeedAvgLabel;
}

QLabel& ControlUi::slipSpeedRightLabel()
{
    return *ui_->slipSpeedRightLabel;
}
