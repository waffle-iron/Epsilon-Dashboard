#include "DisplayDashboardView.h"


DisplayDashboardView::DisplayDashboardView(BatteryPresenter& batteryPresenter,
        BatteryFaultsPresenter& batteryFaultsPresenter,
        DriverControlsPresenter& driverControlsPresenter,
        KeyMotorPresenter& keyMotorPresenter,
        LightsPresenter& lightsPresenter,
        MpptPresenter& mpptPresenter,
        MotorDetailsPresenter& motorDetailsPresenter,
        MotorFaultsPresenter& motorFaultsPresenter,
        I_DisplayDashboardUI& ui)
    : batteryPresenter_(batteryPresenter)
    , batteryFaultsPresenter_(batteryFaultsPresenter)
    , driverControlsPresenter_(driverControlsPresenter)
    , keyMotorPresenter_(keyMotorPresenter)
    , lightsPresenter_(lightsPresenter)
    , mpptPresenter_(mpptPresenter)
    , motorDetailsPresenter_(motorDetailsPresenter)
    , motorFaultsPresenter_(motorFaultsPresenter)
    , ui_(ui)
{
    connectBattery(batteryPresenter_);
    connectBatteryFaults(batteryFaultsPresenter_);
    connectDriverControls(driverControlsPresenter_);
    connectKeyMotor(keyMotorPresenter_);
    connectLights(lightsPresenter_);
    connectMppt(mpptPresenter_);
    connectMotorDetails(motorDetailsPresenter_);
    connectMotorFaults(motorFaultsPresenter_);
    //ui_.showMaximized();
    ui_.show();
}
DisplayDashboardView::~DisplayDashboardView()
{
}

void DisplayDashboardView::connectBattery(BatteryPresenter& batteryPresenter)
{
    connect(&batteryPresenter, SIGNAL(aliveReceived(bool)),
            this, SLOT(aliveReceived(bool)));
    connect(&batteryPresenter, SIGNAL(packSocPercentageReceived(double)),
            this, SLOT(packSocPercentageReceived(double)));
    connect(&batteryPresenter, SIGNAL(prechargeStateReceived(QString)),
            this, SLOT(prechargeStateReceived(QString)));
    connect(&batteryPresenter, SIGNAL(prechargeTimerElapsedReceived(bool)),
            this, SLOT(prechargeTimerElapsedReceived(bool)));
    connect(&batteryPresenter, SIGNAL(prechargeTimerCountReceived(double)),
            this, SLOT(prechargeTimerCountReceived(double)));
    connect(&batteryPresenter, SIGNAL(netPowerReceived(double)),
            this, SLOT(netPowerReceived(double)));
}

void DisplayDashboardView::connectBatteryFaults(BatteryFaultsPresenter& batteryFaultsPresenter)
{
    connect(&batteryFaultsPresenter, SIGNAL(cellOverVoltageReceived(bool)),
            this, SLOT(cellOverVoltageReceived(bool)));
    connect(&batteryFaultsPresenter, SIGNAL(cellUnderVoltageReceived(bool)),
            this, SLOT(cellUnderVoltageReceived(bool)));
    connect(&batteryFaultsPresenter, SIGNAL(cellOverTemperatureReceived(bool)),
            this, SLOT(cellOverTemperatureReceived(bool)));
    connect(&batteryFaultsPresenter, SIGNAL(measurementUntrustedReceived(bool)),
            this, SLOT(measurementUntrustedReceived(bool)));
    connect(&batteryFaultsPresenter, SIGNAL(cmuCommTimeoutReceived(bool)),
            this, SLOT(cmuCommTimeoutReceived(bool)));
    connect(&batteryFaultsPresenter, SIGNAL(bmuIsInSetupModeReceived(bool)),
            this, SLOT(bmuIsInSetupModeReceived(bool)));
    connect(&batteryFaultsPresenter, SIGNAL(cmuCanBusPowerStatusReceived(bool)),
            this, SLOT(cmuCanBusPowerStatusReceived(bool)));
    connect(&batteryFaultsPresenter, SIGNAL(packIsolationTestFailureReceived(bool)),
            this, SLOT(packIsolationTestFailureReceived(bool)));
    connect(&batteryFaultsPresenter, SIGNAL(softwareOverCurrentMeasuredReceived(bool)),
            this, SLOT(softwareOverCurrentMeasuredReceived(bool)));
    connect(&batteryFaultsPresenter, SIGNAL(canSupplyIsLowReceived(bool)),
            this, SLOT(canSupplyIsLowReceived(bool)));
    connect(&batteryFaultsPresenter, SIGNAL(contactorIsStuckReceived(bool)),
            this, SLOT(contactorIsStuckReceived(bool)));
    connect(&batteryFaultsPresenter, SIGNAL(cmuDetectedExtraCellPresentReceived(bool)),
            this, SLOT(cmuDetectedExtraCellPresentReceived(bool)));
}

void DisplayDashboardView::connectDriverControls(DriverControlsPresenter& driverControlsPresenter)
{
    connect(&driverControlsPresenter, SIGNAL(resetReceived(bool)),
            this, SLOT(resetReceived(bool)));
}

void DisplayDashboardView::connectKeyMotor(KeyMotorPresenter& keyMotorPresenter)
{
    connect(&keyMotorPresenter, SIGNAL(motorSetCurrentReceived(double setCurrent)),
            this, SLOT(motorSetCurrentReceived(double setCurrent)));
    connect(&keyMotorPresenter, SIGNAL(motorActualSpeedReceived(double actualSpeed)),
            this, SLOT(motorActualSpeedReceived(double actualSpeed)));
    connect(&keyMotorPresenter, SIGNAL(motorBusVoltageReceived(double busVoltage)),
            this, SLOT(motorBusVoltageReceived(double busVoltage)));
    connect(&keyMotorPresenter, SIGNAL(motorBusCurrentReceived(double busCurrent)),
            this, SLOT(motorBusCurrentReceived(double busCurrent)));
}

void DisplayDashboardView::connectLights(LightsPresenter& lightsPresenter)
{
    connect(&lightsPresenter, SIGNAL(lowBeamsReceived(bool)),
            this, SLOT(lowBeamsReceived(bool)));
    connect(&lightsPresenter, SIGNAL(highBeamsReceived(bool)),
            this, SLOT(highBeamsReceived(bool)));
    connect(&lightsPresenter, SIGNAL(leftSignalReceived(bool)),
            this, SLOT(leftSignalReceived(bool)));
    connect(&lightsPresenter, SIGNAL(rightSignalReceived(bool)),
            this, SLOT(rightSignalReceived(bool)));
}

void DisplayDashboardView::connectMppt(MpptPresenter& mpptPresenter)
{
    connect(&mpptPresenter, SIGNAL(mpptZeroReceived(Mppt)),
            this, SLOT(mpptZeroReceived(Mppt)));
    connect(&mpptPresenter, SIGNAL(mpptOneReceived(Mppt)),
            this, SLOT(mpptOneReceived(Mppt)));
    connect(&mpptPresenter, SIGNAL(mpptTwoReceived(Mppt)),
            this, SLOT(mpptTwoReceived(Mppt)));
    connect(&mpptPresenter, SIGNAL(mpptPowerReceived(double)),
            this, SLOT(mpptPowerReceived(double)));
}

void DisplayDashboardView::connectMotorDetails(MotorDetailsPresenter& motorDetailsPresenter)
{
}

void DisplayDashboardView::connectMotorFaults(MotorFaultsPresenter& motorFaultsPresenter)
{
    connect(&motorFaultsPresenter, SIGNAL(motorZeroErrorFlagsReceived(ErrorFlags)),
            this, SLOT(motorZeroErrorFlagsReceived(ErrorFlags)));
    connect(&motorFaultsPresenter, SIGNAL(motorZeroLimitFlagsReceived(LimitFlags)),
            this, SLOT(motorZeroLimitFlagsReceived(LimitFlags)));
    connect(&motorFaultsPresenter, SIGNAL(motorOneErrorFlagsReceived(ErrorFlags)),
            this, SLOT(motorOneErrorFlagsReceived(ErrorFlags)));
    connect(&motorFaultsPresenter, SIGNAL(motorOneLimitFlagsReceived(LimitFlags)),
            this, SLOT(motorOneLimitFlagsReceived(LimitFlags)));
}

void DisplayDashboardView::aliveReceived(bool)
{
}
void DisplayDashboardView::packSocPercentageReceived(double packSocPercentage)
{
    ui_.stateOfChargeCapacityWidget().setValue(packSocPercentage);

    if (packSocPercentage > 85)
    {
        ui_.stateOfChargeCapacityWidget().setStyleSheet("QProgressBar::chunk:horizontal{background: rgb(20,180,20)");
    }
    else if ((packSocPercentage > 70) && (packSocPercentage <= 85))
    {
        ui_.stateOfChargeCapacityWidget().setStyleSheet("QProgressBar::chunk:horizontal{background: rgb(90,190,20)");
    }
    else if ((packSocPercentage > 55) && (packSocPercentage <= 70))
    {
        ui_.stateOfChargeCapacityWidget().setStyleSheet("QProgressBar::chunk:horizontal{background: rgb(160,200,20)");
    }
    else if ((packSocPercentage > 40) && (packSocPercentage <= 55))
    {
        ui_.stateOfChargeCapacityWidget().setStyleSheet("QProgressBar::chunk:horizontal{background: rgb(240,210,20)");
    }
    else if ((packSocPercentage > 25) && (packSocPercentage <= 40))
    {
        ui_.stateOfChargeCapacityWidget().setStyleSheet("QProgressBar::chunk:horizontal{background: rgb(240,150,20)");
    }
    else if ((packSocPercentage > 10) && (packSocPercentage <= 25))
    {
        ui_.stateOfChargeCapacityWidget().setStyleSheet("QProgressBar::chunk:horizontal{background: rgb(240,90,20)");
    }
    else
    {
        ui_.stateOfChargeCapacityWidget().setStyleSheet("QProgressBar::chunk:horizontal{background: rgb(240,20,20)");
    }
}
void DisplayDashboardView::prechargeStateReceived(QString prechargeState)
{
}
void DisplayDashboardView::prechargeTimerElapsedReceived(bool prechargeTimerElapsed)
{
}
void DisplayDashboardView::prechargeTimerCountReceived(double prechargeTimerCount)
{
}

void DisplayDashboardView::netPowerReceived(double netPower)
{
    ui_.netPowerLabel().setNum(netPower);
    ui_.powerOutLabel().setNum(netPower - ui_.powerInLabel().text().toDouble());
}

void DisplayDashboardView::cellOverVoltageReceived(bool cellOverVoltage)
{

}
void DisplayDashboardView::cellUnderVoltageReceived(bool cellUnderVoltage)
{

}
void DisplayDashboardView::cellOverTemperatureReceived(bool cellOverTemperature)
{

}
void DisplayDashboardView::measurementUntrustedReceived(bool measurementUntrusted)
{

}
void DisplayDashboardView::cmuCommTimeoutReceived(bool cmuCommTimeout)
{

}
void DisplayDashboardView::bmuIsInSetupModeReceived(bool bmuIsInSetupMode)
{

}
void DisplayDashboardView::cmuCanBusPowerStatusReceived(bool cmuCanBusPowerStatus)
{

}
void DisplayDashboardView::packIsolationTestFailureReceived(bool packIsolationTestFailure)
{

}
void DisplayDashboardView::softwareOverCurrentMeasuredReceived(bool softwareOverCurrentMeasured)
{

}
void DisplayDashboardView::canSupplyIsLowReceived(bool canSupplyIsLow)
{

}
void DisplayDashboardView::contactorIsStuckReceived(bool contactorIsStuck)
{

}
void DisplayDashboardView::cmuDetectedExtraCellPresentReceived(bool cmuDetectedExtraCellPresent)
{

}

void DisplayDashboardView::cmuMaxCellTempReceived(double maxCellTemp)
{
    ui_.maxCellTemperatureLabel().setNum(maxCellTemp);
}
void DisplayDashboardView::cmuLowestCellVoltageReceived(double lowestCellVoltage)
{
    ui_.lowestCellVoltageLabel().setNum(lowestCellVoltage);
}
void DisplayDashboardView::cmuAverageCellTempReceived(double averageCellTemp)
{
    ui_.avgCellTemperatureLabel().setNum(averageCellTemp);
}
void DisplayDashboardView::cmuAverageVoltageReceived(double averageVoltage)
{
    ui_.avgCellVoltageLabel().setNum(averageVoltage);
}

void DisplayDashboardView::resetReceived(bool reset)
{
    if (reset)
    {
        ui_.motorResetButtonWidget().setStyleSheet("background: url(:/Resources/MotorResetButton.png)");
    }
    else
    {
        ui_.motorResetButtonWidget().setStyleSheet("");
    }
}
void DisplayDashboardView::motorSetCurrentReceived(double setCurrent)
{
    ui_.setCurrentLabel().setNum(setCurrent);
}
void DisplayDashboardView::motorActualSpeedReceived(double actualSpeed)
{
    ui_.actualSpeedLabel().setNum(actualSpeed);
}
void DisplayDashboardView::motorBusVoltageReceived(double busVoltage)
{
    ui_.busVoltageLabel().setNum(busVoltage);
}
void DisplayDashboardView::motorBusCurrentReceived(double busCurrent)
{
    ui_.busCurrentLabel().setNum(busCurrent);
}

void DisplayDashboardView::lowBeamsReceived(bool lowBeams)
{
    if (lowBeams)
    {
        ui_.lowHeadlightIndicatorWidget().setStyleSheet("background: url(:/Resources/LowHeadlightIndicator.png)");
    }
    else
    {
        ui_.lowHeadlightIndicatorWidget().setStyleSheet("");
    }
}
void DisplayDashboardView::highBeamsReceived(bool highBeams)
{
    if (highBeams)
    {
        ui_.highHeadlightIndicatorWidget().setStyleSheet("background: url(:/Resources/HighHeadlightIndicator.png)");
    }
    else
    {
        ui_.highHeadlightIndicatorWidget().setStyleSheet("");
    }
}
void DisplayDashboardView::leftSignalReceived(bool leftSignal)
{
    if (leftSignal)
    {
        ui_.leftTurnSignalWidget().setStyleSheet("background: url(:/Resources/TurnSignaLeft.png);");
    }
    else
    {
        ui_.leftTurnSignalWidget().setStyleSheet("");
    }
}
void DisplayDashboardView::rightSignalReceived(bool rightSignal)
{
    if (rightSignal)
    {
        ui_.rightTurnSignalWidget().setStyleSheet("background: url(:/Resources/TurnSignaRight.png);");
    }
    else
    {
        ui_.rightTurnSignalWidget().setStyleSheet("");
    }
}
void DisplayDashboardView::mpptZeroReceived(Mppt mpptZero)
{
    ui_.array0CurrentLabel().setNum(mpptZero.arrayCurrent());
    ui_.array0VoltageLabel().setNum(mpptZero.arrayVoltage());
}
void DisplayDashboardView::mpptOneReceived(Mppt mpptOne)
{
    ui_.array1CurrentLabel().setNum(mpptOne.arrayCurrent());
    ui_.array1VoltageLabel().setNum(mpptOne.arrayVoltage());
}
void DisplayDashboardView::mpptTwoReceived(Mppt mpptTwo)
{
    ui_.array2CurrentLabel().setNum(mpptTwo.arrayCurrent());
    ui_.array2VoltageLabel().setNum(mpptTwo.arrayVoltage());
}
void DisplayDashboardView::mpptPowerReceived(double mpptPower)
{
    ui_.powerInLabel().setNum(mpptPower);
    ui_.powerOutLabel().setNum(ui_.netPowerLabel().text().toDouble() - mpptPower);
}

void DisplayDashboardView::motorZeroErrorFlagsReceived(ErrorFlags motorZeroErrorFlags)
{
}
void DisplayDashboardView::motorZeroLimitFlagsReceived(LimitFlags motorZeroLimitFlags)
{
}
void DisplayDashboardView::motorOneErrorFlagsReceived(ErrorFlags motorOneErrorFlags)
{
}
void DisplayDashboardView::motorOneLimitFlagsReceived(LimitFlags motorOneLimitFlags)
{
}
