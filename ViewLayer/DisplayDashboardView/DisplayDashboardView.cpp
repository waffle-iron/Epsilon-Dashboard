#include "DisplayDashboardView.h"
#include "PresenterLayer/BatteryPresenter/BatteryPresenter.h"
#include "PresenterLayer/CommunicationPresenter/CommunicationPresenter.h"
#include "PresenterLayer/FaultsPresenter/FaultsPresenter.h"
#include "PresenterLayer/MpptPresenter/MpptPresenter.h"
#include "PresenterLayer/PowerPresenter/PowerPresenter.h"
#include "PresenterLayer/VehiclePresenter/VehiclePresenter.h"
#include "ViewLayer/DisplayDashboardUI/I_DisplayDashboardUI.h"
#include <QDateTime>

DisplayDashboardView::DisplayDashboardView(BatteryPresenter& batteryPresenter,
                         VehiclePresenter& vehiclePresenter,
                         PowerPresenter& powerPresenter,
                         CommunicationPresenter& communicationPresenter,
                         FaultsPresenter& faultsPresenter,
                         MpptPresenter& mpptPresenter,
                         I_DisplayDashboardUI& ui)
   : batteryPresenter_(batteryPresenter)
   , vehiclePresenter_(vehiclePresenter)
   , powerPresenter_(powerPresenter)
   , communicationPresenter_(communicationPresenter)
   , faultsPresenter_(faultsPresenter)
   , mpptPresenter_(mpptPresenter)
   , ui_(ui)
{
}
DisplayDashboardView::~DisplayDashboardView()
{
}
