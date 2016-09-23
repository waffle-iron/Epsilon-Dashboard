#pragma once

#include "I_DisplayDashboardUI.h"
#include "../I_SolarCarWindow/I_SolarCarWindow.h"

namespace Ui {
    class DisplayDashboardUI;
}
class DisplayDashboardUI : public I_DisplayDashboardUI
{
    Q_OBJECT

public:
    explicit DisplayDashboardUI();
    ~DisplayDashboardUI();

    QLabel& actualSpeedLabel();

    QLabel& arrayOneVoltageLabel();
    QLabel& arrayTwoVoltageLabel();
    QLabel& arrayThreeVoltageLabel();
    QLabel& arrayFourVoltageLabel();

    QLabel& arrayOneCurrentLabel();
    QLabel& arrayTwoCurrentLabel();
    QLabel& arrayThreeCurrentLabel();
    QLabel& arrayFourCurrentLabel();

    QLabel& setCurrentLabel();
    QLabel& motorPowerLabel();

    QLabel& batteryFaultsLabel();
    QLabel& motorFaultsLabel();

    QWidget& leftTurnSignalWidget();
    QWidget& rightTurnSignalWidget();

    QWidget& motorResetButtonWidget();

    QProgressBar& stateOfChargeCapacityWidget();

    QWidget& prechargeStateIconWidget();
    QLabel& prechargeStateLabel();

    QWidget& lowHeadlightIndicatorWidget();
    QWidget& highHeadlightIndicatorWidget();

    QWidget& thermometerWidget();
    QLabel& maxCellTemperatureLabel();
    QLabel& avgCellTemperatureLabel();
    QLabel& lowestCellVoltageLabel();
    QLabel& avgCellVoltageLabel();

    QLabel& busVoltageLabel();
    QLabel& busCurrentLabel();

    QLabel& powerInLabel();
    QLabel& powerOutLabel();
    QLabel& netPowerLabel();

private:
    Ui::DisplayDashboardUI *ui_;
};
