#include "DisplayDashboardUI/DisplayDashboardUI.h"
#include "DisplayDashboardView/DisplayDashboardView.h"
#include "PresenterLayer/PresenterContainer.h"
#include "ViewContainer.h"

ViewContainer::ViewContainer(PresenterContainer& presenterContainer)
    : DisplayDashboardUI_(new DisplayDashboardUI())
    , DisplayDashboardView_(new DisplayDashboardView(
                                presenterContainer.batteryPresenter(),
                                presenterContainer.vehiclePresenter(),
                                presenterContainer.powerPresenter(),
                                presenterContainer.communicationPresenter(),
                                presenterContainer.faultsPresenter(),
                                presenterContainer.mpptPresenter(),
                                *DisplayDashboardUI_))
{
}

ViewContainer::~ViewContainer()
{
}
