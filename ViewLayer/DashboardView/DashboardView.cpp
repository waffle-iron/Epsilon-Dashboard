#include "DashboardView.h"
#include "PresenterLayer/BatteryPresenter/BatteryPresenter.h"
#include "PresenterLayer/CommunicationPresenter/CommunicationPresenter.h"
#include "PresenterLayer/FaultsPresenter/FaultsPresenter.h"
#include "PresenterLayer/MpptPresenter/MpptPresenter.h"
#include "PresenterLayer/PowerPresenter/PowerPresenter.h"
#include "PresenterLayer/VehiclePresenter/VehiclePresenter.h"
#include "ViewLayer/DashboardUI/I_DashboardUI.h"
#include <QDateTime>

DashboardView::DashboardView(BatteryPresenter& batteryPresenter,
                         VehiclePresenter& vehiclePresenter,
                         PowerPresenter& powerPresenter,
                         CommunicationPresenter& communicationPresenter,
                         FaultsPresenter& faultsPresenter,
                         MpptPresenter& mpptPresenter,
                         I_DashboardUI& ui)
{
}
DashboardView::~DashboardView()
{
}

