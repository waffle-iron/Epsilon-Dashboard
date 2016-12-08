#pragma once

#include <QObject>
#include <QLabel>
#include "ViewLayer/DisplayDashboardUI/I_DisplayDashboardUI.h"

class BatteryPresenter;
class BatteryFaultsPresenter;
class CMUPresenter;
class DriverControlsPresenter;
class I_DisplayDashboardUI;
class KeyMotorPresenter;
class LightsPresenter;
class MPPTPresenter;
class MotorDetailsPresenter;
class MotorFaultsPresenter;

class DisplayDashboardView : public QObject
{
    Q_OBJECT
public:
    DisplayDashboardView(BatteryPresenter& batteryPresenter,
                        BatteryFaultsPresenter& batteryFaultsPresenter,
                        CMUPresenter& cmuPresenter,
                        DriverControlsPresenter& driverControlsPresenter,
                        KeyMotorPresenter& keyMotorPresenter,
                        LightsPresenter& lightsPresenter,
                        MPPTPresenter& mpptPresenter,
                        MotorDetailsPresenter& motorDetailsPresenter,
                        MotorFaultsPresenter& motorFaultsPresenter,
                        I_DisplayDashboardUI& ui);
    ~DisplayDashboardView();

private:
    BatteryPresenter& batteryPresenter_;
    BatteryFaultsPresenter& batteryFaultsPresenter_;
    CMUPresenter& cmuPresenter_;
    DriverControlsPresenter& driverControlsPresenter_;
    KeyMotorPresenter& keyMotorPresenter_;
    LightsPresenter& lightsPresenter_;
    MPPTPresenter& mpptPresenter_;
    MotorDetailsPresenter& motorDetailsPresenter_;
    MotorFaultsPresenter& motorFaultsPresenter_;

    I_DisplayDashboardUI& ui_;
};
