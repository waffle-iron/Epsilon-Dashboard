#include "DisplayDashboardView.h"
#include "PresenterLayer/BatteryPresenter/BatteryPresenter.h"
#include "PresenterLayer/BatteryFaultsPresenter/BatteryFaultsPresenter.h"
#include "PresenterLayer/CMUPresenter/CMUPresenter.h"
#include "PresenterLayer/DriverControlsPresenter/DriverControlsPresenter.h"
#include "PresenterLayer/KeyMotorPresenter/KeyMotorPresenter.h"
#include "PresenterLayer/LightsPresenter/LightsPresenter.h"
#include "PresenterLayer/MPPTPresenter/MPPTPresenter.h"
#include "PresenterLayer/MotorDetailsPresenter/MotorDetailsPresenter.h"
#include "PresenterLayer/MotorFaultsPresenter/MotorFaultsPresenter.h"
#include "ViewLayer/DisplayDashboardUI/I_DisplayDashboardUI.h"

DisplayDashboardView::DisplayDashboardView(BatteryPresenter& batteryPresenter,
        BatteryFaultsPresenter& batteryFaultsPresenter,
        CMUPresenter& cmuPresenter,
        DriverControlsPresenter& driverControlsPresenter,
        KeyMotorPresenter& keyMotorPresenter,
        LightsPresenter& lightsPresenter,
        MPPTPresenter& mpptPresenter,
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
    ui_.showMaximized();
}
DisplayDashboardView::~DisplayDashboardView()
{
}
