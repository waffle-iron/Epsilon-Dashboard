#include "DisplayDashboardUI/DisplayDashboardUI.h"
#include "DisplayDashboardUI/RaceModeDashboardUI.h"
#include "DisplayDashboardView/DisplayDashboardView.h"
#include "../PresenterLayer/PresenterContainer.h"
#include "ViewContainer.h"
#include "BatteryUi/BatteryUi.h"
#include "ControlUi/ControlUi.h"
#include "HomePageUi/HomePageUi.h"
#include "MotorFaultUi/MotorFaultUi.h"
#include "MotorUi/MotorUi.h"
#include "OverlordWidget/OverlordWidget.h"
#include "TabUi/TabUi.h"
#include "MPPTUi/MpptUi.h"
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
    }
}

ViewContainer::~ViewContainer()
{
}
