#include "DisplayDashboardUI.h"
#include "ui_DisplayDashboardUI.h"

DisplayDashboardUI::DisplayDashboardUI()
    :ui_(new Ui::DisplayDashboardUI)
{
    ui_->setupUi(this);
}

DisplayDashboardUI::~DisplayDashboardUI()
{
    delete ui_;
}

QLabel& DisplayDashboardUI::actualSpeedLabel()
{
    return *ui_->actualSpeedLabel;
}

QLabel& DisplayDashboardUI::arrayOneVoltageLabel()
{
    return *ui_->arrayOneVoltageLabel;
}

QLabel& DisplayDashboardUI::arrayTwoVoltageLabel()
{
    return *ui_->arrayTwoVoltageLabel;
}

QLabel& DisplayDashboardUI::arrayThreeVoltageLabel()
{
    return *ui_->arrayThreeVoltageLabel;
}

QLabel& DisplayDashboardUI::arrayFourVoltageLabel()
{
    return *ui_->arrayFourVoltageLabel;
}

QLabel& DisplayDashboardUI::arrayOneCurrentLabel()
{
    return *ui_->arrayOneCurrentLabel;
}

QLabel& DisplayDashboardUI::arrayTwoCurrentLabel()
{
    return *ui_->arrayTwoCurrentLabel;
}

QLabel& DisplayDashboardUI::arrayThreeCurrentLabel()
{
    return *ui_->arrayThreeCurrentLabel;
}

QLabel& DisplayDashboardUI::arrayFourCurrentLabel()
{
    return *ui_->arrayFourCurrentLabel;
}

QLabel& DisplayDashboardUI::setCurrentLabel()
{
    return *ui_->setCurrentLabel;
}

QLabel& DisplayDashboardUI::motorPowerLabel()
{
    return *ui_->motorPowerLabel;
}

QLabel& DisplayDashboardUI::batteryFaultsLabel()
{
    return *ui_->batteryFaultsLabel;
}

QLabel& DisplayDashboardUI::motorFaultsLabel()
{
    return *ui_->motorFaultsLabel;
}

QWidget& DisplayDashboardUI::leftTurnSignalWidget()
{
    return *ui_->leftTurnSignalWidget;
}

QWidget& DisplayDashboardUI::rightTurnSignalWidget()
{
    return *ui_->rightTurnSignalWidget;
}

QWidget& DisplayDashboardUI::motorResetButtonWidget()
{
    return *ui_->motorResetButtonWidget;
}

QProgressBar& DisplayDashboardUI::stateOfChargeCapacityWidget()
{
    return *ui_->stateOfChargeCapacityWidget;
}

QWidget& DisplayDashboardUI::prechargeStateIconWidget()
{
    return *ui_->prechargeStateIconWidget;
}

QLabel& DisplayDashboardUI::prechargeStateLabel()
{
    return *ui_->prechargeStateLabel;
}

QWidget& DisplayDashboardUI::lowHeadlightIndicatorWidget()
{
    return *ui_->lowHeadlightIndicatorWidget;
}

QWidget& DisplayDashboardUI::highHeadlightIndicatorWidget()
{
    return *ui_->highHeadlightIndicatorWidget;
}

QWidget& DisplayDashboardUI::thermometerWidget()
{
    return *ui_->thermometerWidget;
}

QLabel& DisplayDashboardUI::maxCellTemperatureLabel()
{
    return *ui_->maxCellTemperatureLabel;
}

QLabel& DisplayDashboardUI::avgCellTemperatureLabel()
{
    return *ui_->avgCellTemperatureLabel;
}

QLabel& DisplayDashboardUI::lowestCellVoltageLabel()
{
    return *ui_->lowestCellVoltageLabel;
}

QLabel& DisplayDashboardUI::avgCellVoltageLabel()
{
    return *ui_->avgCellVoltageLabel;
}

QLabel& DisplayDashboardUI::busVoltageLabel()
{
    return *ui_->busVoltageLabel;
}

QLabel& DisplayDashboardUI::busCurrentLabel()
{
    return *ui_->busCurrentLabel;
}

QLabel& DisplayDashboardUI::powerInLabel()
{
    return *ui_->powerInLabel;
}

QLabel& DisplayDashboardUI::powerOutLabel()
{
    return *ui_->powerOutLabel;
}

QLabel& DisplayDashboardUI::netPowerLabel()
{
    return *ui_->netPowerLabel;
}
