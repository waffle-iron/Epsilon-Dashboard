#pragma once

#include <QObject>
#include <QLabel>
#include "CommunicationLayer/MessagingFramework/BatteryFaults.h"
#include "CommunicationLayer/MessagingFramework/LimitFlags.h"
#include "CommunicationLayer/MessagingFramework/MotorFaults.h"
#include "ViewLayer/DashboardUI/I_DashboardUI.h"

class BatteryPresenter;
class CommunicationPresenter;
class I_DashboardUI;
class FaultsPresenter;
class MpptPresenter;
class PowerPresenter;
class VehiclePresenter;

class DashboardView : public QObject
{
    Q_OBJECT
public:
    DashboardView(BatteryPresenter& batteryPresenter,
                             VehiclePresenter& vehiclePresenter,
                             PowerPresenter& powerPresenter,
                             CommunicationPresenter& communicationPresenter,
                             FaultsPresenter& faultsPresenter,
                             MpptPresenter& mpptPresenter,
                             I_DashboardUI& ui);
    ~DashboardView();

private:

private slots:

};
