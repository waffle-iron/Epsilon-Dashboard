#include "DisplayDashboardView.h"

namespace
{
    const double SLOPE_R = -1;
    const double Y_INT_R = 220;
    const double SLOPE_G = 1.7;
    const double Y_INT_G = 10;
    const QString BLUE = "20";
    const QString DEFAULT_SS = "QProgressBar:horizontal {\
            border: 1px solid white;\
            border-radius: 7px;\
            background: black;\
            }\
            QProgressBar::chunk:horizontal{\
            border-radius: 7px;\
            background: ";
}

DisplayDashboardView::DisplayDashboardView(BatteryPresenter& batteryPresenter,
        BatteryFaultsPresenter& batteryFaultsPresenter,
        CmuPresenter& cmuPresenter,
        DriverControlsPresenter& driverControlsPresenter,
        KeyMotorPresenter& keyMotorPresenter,
        LightsPresenter& lightsPresenter,
        MpptPresenter& mpptPresenter,
        MotorDetailsPresenter& motorDetailsPresenter,
        MotorFaultsPresenter& motorFaultsPresenter,
        I_DisplayDashboardUI& ui)
    : batteryPresenter_(batteryPresenter)
    , batteryFaultsPresenter_(batteryFaultsPresenter)
    , cmuPresenter_(cmuPresenter)
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
    connectCmu(cmuPresenter_);
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
    connect(&batteryFaultsPresenter, SIGNAL(batteryFaultsReceived(BatteryFaults)),
            this, SLOT(batteryFaultsReceived(BatteryFaults)));
}

void DisplayDashboardView::connectCmu(CmuPresenter& cmuPresenter)
{
    connect(&cmuPresenter, SIGNAL(cmuMaxCellTempReceived(double)),
            this, SLOT(cmuMaxCellTempReceived(double)));
    connect(&cmuPresenter, SIGNAL(cmuLowestCellVoltageReceived(double)),
            this, SLOT(cmuLowestCellVoltageReceived(double)));
    connect(&cmuPresenter, SIGNAL(cmuAverageCellTempReceived(double)),
            this, SLOT(cmuAverageCellTempReceived(double)));
    connect(&cmuPresenter, SIGNAL(cmuCellVoltageReceived(double)),
            this, SLOT(cmuCellVoltageReceived(double)));
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

    // The rgb values for the progressbar are calculated using a two simple linear equations
    // that were derived from defining maximum and minimum values for Red and Green values
    // and determining a slope and an intercept. Blue will stay constant as there will be no need
    // to change it as the progress bar will transition from Green to Red. Using this method for
    // determining the rgb values eliminates the need for switch cases or big if-else statements.

    QString r = QString::number(SLOPE_R * packSocPercentage + Y_INT_R);
    QString g = QString::number(SLOPE_G * packSocPercentage + Y_INT_G);

    QString rgb = "rgb(" + r + "," + g + "," + BLUE + ");}";

    ui_.stateOfChargeCapacityWidget().setStyleSheet(DEFAULT_SS + rgb);

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

void DisplayDashboardView::batteryFaultsReceived(BatteryFaults)
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
