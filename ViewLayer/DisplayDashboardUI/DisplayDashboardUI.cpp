#include "DisplayDashboardUI.h"
#include "ui_DisplayDashboardUI.h"

DisplayDashboardUI::DisplayDashboardUI()
    :ui(new Ui::DisplayDashboardUI)
{
    ui->setupUi(this);
}

DisplayDashboardUI::~DisplayDashboardUI()
{
    delete ui;
}

QLabel& DisplayDashboardUI::actualSpeedLabel()
{
    return *ui->actualSpeedLabel;
}


QLabel& DisplayDashboardUI::arrayOneVoltageLabel()
{
    return *ui->arrayOneVoltageLabel;
}

QLabel& DisplayDashboardUI::arrayTwoVoltageLabel()
{
    return *ui->arrayTwoVoltageLabel;
}

QLabel& DisplayDashboardUI::arrayThreeVoltageLabel()
{
    return *ui->arrayThreeVoltageLabel;
}

QLabel& DisplayDashboardUI::arrayFourVoltageLabel()
{
    return *ui->arrayFourVoltageLabel;
}


QLabel& DisplayDashboardUI::arrayOneCurrentLabel()
{
    return *ui->arrayOneCurrentLabel;
}

QLabel& DisplayDashboardUI::arrayTwoCurrentLabel()
{
    return *ui->arrayTwoCurrentLabel;
}

QLabel& DisplayDashboardUI::arrayThreeCurrentLabel()
{
    return *ui->arrayThreeCurrentLabel;
}

QLabel& DisplayDashboardUI::arrayFourCurrentLabel()
{
    return *ui->arrayFourCurrentLabel;
}


QLabel& DisplayDashboardUI::setCurrentLabel()
{
    return *ui->setCurrentLabel;
}

QLabel& DisplayDashboardUI::motorPowerLabel()
{
    return *ui->motorPowerLabel;
}


QLabel& DisplayDashboardUI::batteryFaultsLabel()
{
    return *ui->batteryFaultsLabel;
}

QLabel& DisplayDashboardUI::motorFaultsLabel()
{
    return *ui->motorFaultsLabel;
}


QWidget& DisplayDashboardUI::leftTurnSignalWidget()
{
    return *ui->leftTurnSignalWidget;
}

QWidget& DisplayDashboardUI::rightTurnSignalWidget()
{
    return *ui->rightTurnSignalWidget;
}


QWidget& DisplayDashboardUI::motorResetButtonWidget()
{
    return *ui->motorResetButtonWidget;
}


QProgressBar& DisplayDashboardUI::stateOfChargeCapacityWidget()
{
    return *ui->stateOfChargeCapacityWidget;
}


QWidget& DisplayDashboardUI::prechargeStateIconWidget()
{
    return *ui->prechargeStateIconWidget;
}

QLabel& DisplayDashboardUI::prechargeStateLabel()
{
    return *ui->prechargeStateLabel;
}


QWidget& DisplayDashboardUI::lowHeadlightIndicatorWidget()
{
    return *ui->lowHeadlightIndicatorWidget;
}

QWidget& DisplayDashboardUI::highHeadlightIndicatorWidget()
{
    return *ui->highHeadlightIndicatorWidget;
}


QWidget& DisplayDashboardUI::thermometerWidget()
{
    return *ui->thermometerWidget;
}

QLabel& DisplayDashboardUI::maxCellTemperatureLabel()
{
    return *ui->maxCellTemperatureLabel;
}

QLabel& DisplayDashboardUI::avgCellTemperatureLabel()
{
    return *ui->avgCellTemperatureLabel;
}

QLabel& DisplayDashboardUI::lowestCellVoltageLabel()
{
    return *ui->lowestCellVoltageLabel;
}

QLabel& DisplayDashboardUI::avgCellVoltageLabel()
{
    return *ui->avgCellVoltageLabel;
}


QLabel& DisplayDashboardUI::busVoltageLabel()
{
    return *ui->busVoltageLabel;
}

QLabel& DisplayDashboardUI::busCurrentLabel()
{
    return *ui->busCurrentLabel;
}


QLabel& DisplayDashboardUI::powerInLabel()
{
    return *ui->powerInLabel;
}

QLabel& DisplayDashboardUI::powerOutLabel()
{
    return *ui->powerOutLabel;
}

QLabel& DisplayDashboardUI::netPowerLabel()
{
    return *ui->netPowerLabel;
}

