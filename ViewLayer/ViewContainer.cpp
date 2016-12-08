#include "DisplayDashboardUI/DisplayDashboardUI.h"
#include "DisplayDashboardView/DisplayDashboardView.h"
#include "PresenterLayer/PresenterContainer.h"
#include "ViewContainer.h"

ViewContainer::ViewContainer(PresenterContainer& presenterContainer)
    : DisplayDashboardUI_(new DisplayDashboardUI())
    , DisplayDashboardView_(new DisplayDashboardView(
                                presenterContainer.batteryPresenter(),
                                presenterContainer.batteryFaultsPresenter(),
                                presenterContainer.cmuPresenter(),
                                presenterContainer.driverControlsPresenter(),
                                presenterContainer.keyMotorPresenter(),
                                presenterContainer.lightsPresenter(),
                                presenterContainer.mpptPresenter(),
                                presenterContainer.motorDetailsPresenter(),
                                presenterContainer.motorFaultsPresenter(),
                                *DisplayDashboardUI_))
{
}

ViewContainer::~ViewContainer()
{
}
