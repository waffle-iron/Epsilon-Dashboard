#include "CompactView.h"
#include "PresenterLayer/BatteryPresenter/BatteryPresenter.h"
#include "PresenterLayer/CommunicationPresenter/CommunicationPresenter.h"
#include "PresenterLayer/FaultsPresenter/FaultsPresenter.h"
#include "PresenterLayer/MpptPresenter/MpptPresenter.h"
#include "PresenterLayer/PowerPresenter/PowerPresenter.h"
#include "PresenterLayer/VehiclePresenter/VehiclePresenter.h"
#include "ViewLayer/CompactUI/I_CompactUI.h"
#include <QDateTime>

CompactView::CompactView(BatteryPresenter& batteryPresenter,
                         VehiclePresenter& vehiclePresenter,
                         PowerPresenter& powerPresenter,
                         CommunicationPresenter& communicationPresenter,
                         FaultsPresenter& faultsPresenter,
                         MpptPresenter& mpptPresenter,
                         I_CompactUI& ui)
{
}
CompactView::~CompactView()
{
}

