#include "DisplayDashboard/DisplayDashboardUI/DisplayDashboardUI.h"
#include "DisplayDashboard/DisplayDashboardUI/RaceModeDashboardUI.h"
#include "DisplayDashboard/DisplayDashboardView/DisplayDashboardView.h"
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
#include "DebugDisplay/MPPTPage/MPPTView/MpptView.h"
ViewContainer::ViewContainer(PresenterContainer& presenterContainer, Mode mode)
{
    if (mode == Mode::DISPLAY)
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
    else if (mode == Mode::RACE)
    {
        //TODO: Set up race mode UI here
        RaceModeDashboardUI_ = new RaceModeDashboardUI();
        RaceModeDashboardUI_->show();
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
        MpptView_.reset(new MpptView(presenterContainer.mpptPresenter(), *mpptUi_));

    }
}

ViewContainer::~ViewContainer()
{
}
