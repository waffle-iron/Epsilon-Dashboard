#include "DisplayDashboard/DisplayDashboardUI/DisplayDashboardUI.h"
#include "DisplayDashboard/DisplayDashboardUI/RaceModeDashboardUI.h"
#include "DisplayDashboard/DisplayDashboardView/DisplayDashboardView.h"
#include "RaceModeDisplay/RaceModeDashboardView.h"
#include "../PresenterLayer/PresenterContainer.h"
#include "ViewContainer.h"
#include "DebugDisplay/BatteryPage/BatteryUi/BatteryUi.h"
#include "DebugDisplay/ControlPage/ControlUi/ControlUi.h"
#include "DebugDisplay/HomePage/HomePageUi/HomePageUi.h"
#include "DebugDisplay/MotorFaultPage/MotorFaultUi/MotorFaultUi.h"
#include "DebugDisplay/MotorPage/MotorUi/MotorUi.h"
#include "DebugDisplay/OverlordWidget/OverlordWidget.h"
#include "DebugDisplay/Tab/TabUi/TabUi.h"
#include "DebugDisplay/MPPTPage/MPPTUi/MpptUi.h"
ViewContainer::ViewContainer(PresenterContainer& presenterContainer, Mode mode)
{
    if (false)
    {
        DisplayDashboardUI_ = new DisplayDashboardUI();
        DisplayDashboardView_.reset(new DisplayDashboardView(
                                        presenterContainer.batteryPresenter(),
                                        presenterContainer.batteryFaultsPresenter(),
                                        presenterContainer.driverControlsPresenter(),
                                        presenterContainer.keyMotorPresenter(),
                                        presenterContainer.lightsPresenter(),
                                        presenterContainer.mpptPresenter(),
                                        presenterContainer.motorDetailsPresenter(),
                                        presenterContainer.motorFaultsPresenter(),
                                        *DisplayDashboardUI_));
    }
    else if (true)
    {
        RaceModeDashboardUI_ = new RaceModeDashboardUI();
        RaceModeDashboardView_.reset(new RaceModeDashboardView(
                                         presenterContainer.batteryPresenter(),
                                         presenterContainer.batteryFaultsPresenter(),
                                         presenterContainer.driverControlsPresenter(),
                                         presenterContainer.keyMotorPresenter(),
                                         presenterContainer.lightsPresenter(),
                                         presenterContainer.mpptPresenter(),
                                         presenterContainer.motorDetailsPresenter(),
                                         presenterContainer.motorFaultsPresenter(),
                                         *RaceModeDashboardUI_));
    }
    else if (mode == Mode::DEBUG)
    {
        batteryUi_ = new BatteryUi();
        controlUi_ = new ControlUi();
        homepageUi_ = new HomePageUi();
        motorFaultUi_ = new MotorFaultUi();
        motorUi_ = new MotorUi();
        mpptUi_ = new MpptUi();
        tabUi_ = new TabUi();
        overlordWidget_.reset(new OverlordWidget(*batteryUi_, *controlUi_,
                              *homepageUi_, *motorFaultUi_,
                              *motorUi_, *mpptUi_, *tabUi_));
    }
}

ViewContainer::~ViewContainer()
{
}
