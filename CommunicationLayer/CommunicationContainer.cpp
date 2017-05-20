#include <QUdpSocket>

#include "../DataLayer/DataContainer.h"
#include "CommunicationContainer.h"
#include "CommDeviceControl/ConnectionController.h"
#include "CommDeviceControl/CommDeviceManager.h"
#include "CommDeviceControl/InternetConnectionService.h"
#include "JsonReceiver/JsonReceiver.h"
#include "../BusinessLayer/BusinessContainer.h"
#include "../InfrastructureLayer/InfrastructureContainer.h"
#include "../InfrastructureLayer/Settings/I_Settings.h"

class CommunicationContainerPrivate
{

public:
    CommunicationContainerPrivate(InfrastructureContainer& infrastructureContainer)
        : internetConnectionService_(infrastructureContainer.settings().exchange(),
                                     infrastructureContainer.settings().ipAddress(),
                                     infrastructureContainer.settings().port())
        , commDeviceManager_(udpSocket_)
        , connectionController_(internetConnectionService_)
        , jsonReceiver_(commDeviceManager_)
    {
    }
    QUdpSocket udpSocket_;
    InternetConnectionService internetConnectionService_;
    CommDeviceManager commDeviceManager_;
    ConnectionController connectionController_;
    JsonReceiver jsonReceiver_;
};

CommunicationContainer::CommunicationContainer(InfrastructureContainer& infrastructureContainer)
    : impl_(new CommunicationContainerPrivate(infrastructureContainer))
{
}

CommunicationContainer::~CommunicationContainer()
{
}

ConnectionController& CommunicationContainer::connectionController()
{
    return impl_->connectionController_;
}

InternetConnectionService& CommunicationContainer::internetConnectionService()
{
    return impl_->internetConnectionService_;
}

I_JsonReceiver& CommunicationContainer::jsonReceiver()
{
    return impl_->jsonReceiver_;
}

CommDeviceManager& CommunicationContainer::commDeviceManager()
{
    return impl_->commDeviceManager_;
}
