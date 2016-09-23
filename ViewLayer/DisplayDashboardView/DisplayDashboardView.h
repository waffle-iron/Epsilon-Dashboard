#pragma once

#include <QObject>
#include <QLabel>
#include "CommunicationLayer/MessagingFramework/BatteryFaults.h"
#include "CommunicationLayer/MessagingFramework/LimitFlags.h"
#include "CommunicationLayer/MessagingFramework/MotorFaults.h"
#include "ViewLayer/DisplayDashboardUI/I_DisplayDashboardUI.h"

class BatteryPresenter;
class CommunicationPresenter;
class I_DisplayDashboardUI;
class FaultsPresenter;
class MpptPresenter;
class PowerPresenter;
class VehiclePresenter;

class DisplayDashboardView : public QObject
{
    Q_OBJECT
public:
    DisplayDashboardView(BatteryPresenter& batteryPresenter,
              VehiclePresenter& vehiclePresenter,
              PowerPresenter& powerPresenter,
              CommunicationPresenter& communicationPresenter,
              FaultsPresenter& faultsPresenter,
              MpptPresenter& mpptPresenter,
              I_DisplayDashboardUI& ui);
    ~DisplayDashboardView();

private:
    BatteryPresenter& batteryPresenter_;
    VehiclePresenter& vehiclePresenter_;
    PowerPresenter& powerPresenter_;
    CommunicationPresenter& communicationPresenter_;
    FaultsPresenter& faultsPresenter_;
    MpptPresenter& mpptPresenter_;

    I_DisplayDashboardUI& ui_;
};
