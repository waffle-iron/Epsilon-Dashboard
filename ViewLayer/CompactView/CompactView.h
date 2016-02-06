#pragma once

#include <QObject>
#include <QLabel>
#include "CommunicationLayer/MessagingFramework/BatteryFaults.h"
#include "CommunicationLayer/MessagingFramework/LimitFlags.h"
#include "CommunicationLayer/MessagingFramework/MotorFaults.h"
#include "ViewLayer/CompactUI/I_CompactUI.h"

class BatteryPresenter;
class CommunicationPresenter;
class I_CompactUI;
class FaultsPresenter;
class MpptPresenter;
class PowerPresenter;
class VehiclePresenter;

class CompactView : public QObject
{
    Q_OBJECT
public:
    CompactView(BatteryPresenter& batteryPresenter,
                             VehiclePresenter& vehiclePresenter,
                             PowerPresenter& powerPresenter,
                             CommunicationPresenter& communicationPresenter,
                             FaultsPresenter& faultsPresenter,
                             MpptPresenter& mpptPresenter,
                             I_CompactUI& ui);
    ~CompactView();

private:

private slots:

};
