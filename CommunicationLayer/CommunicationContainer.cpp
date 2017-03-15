#include <QUdpSocket>

#include "../DataLayer/DataContainer.h"
#include "CommunicationContainer.h"
#include "CommDeviceControl/ConnectionController.h"
#include "CommDeviceControl/CommDeviceManager.h"
#include "CommDeviceControl/UdpConnectionService.h"
#include "JsonReceiver/JsonReceiver.h"
#include "../BusinessLayer/BusinessContainer.h"

class CommunicationContainerPrivate
{
public:
    CommunicationContainerPrivate(BusinessContainer& businessContainer)
        : udpConnectionService_(udpSocket_)
        , commDeviceManager_(udpSocket_)
        , connectionController_(udpConnectionService_)
        , jsonReceiver_(commDeviceManager_
                        , businessContainer.batteryPopulator()
                        , businessContainer.batteryFaultsPopulator()
                        , businessContainer.cmuPopulator()
                        , businessContainer.driverControlsPopulator()
                        , businessContainer.keyMotorPopulator()
                        , businessContainer.lightsPopulator()
                        , businessContainer.mpptPopulator()
                        , businessContainer.motorDetailsPopulator()
                        , businessContainer.motorFaultsPopulator()
                        , businessContainer.communicationsMonitoringService())
    {
    }
    QUdpSocket udpSocket_;
    UdpConnectionService udpConnectionService_;
    CommDeviceManager commDeviceManager_;
    ConnectionController connectionController_;
    JsonReceiver jsonReceiver_;
};

CommunicationContainer::CommunicationContainer(BusinessContainer& businessContainer)
    : impl_(new CommunicationContainerPrivate(businessContainer))
{
}

CommunicationContainer::~CommunicationContainer()
{
}

ConnectionController& CommunicationContainer::connectionController()
{
    return impl_->connectionController_;
}

UdpConnectionService& CommunicationContainer::udpConnectionService()
{
    return impl_->udpConnectionService_;
}

I_JsonReceiver& CommunicationContainer::jsonReceiver()
{
    return impl_->jsonReceiver_;
}

CommDeviceManager& CommunicationContainer::commDeviceManager()
{
    return impl_->commDeviceManager_;
}
