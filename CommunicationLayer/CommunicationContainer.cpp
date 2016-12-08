#include <QUdpSocket>

#include "../DataLayer/DataContainer.h"
#include "CommunicationContainer.h"
#include "CommDeviceControl/ConnectionController.h"
#include "CommDeviceControl/CommDeviceManager.h"
#include "CommDeviceControl/UdpConnectionService.h"
#include "JsonReceiver/JsonReceiver.h"

class CommunicationContainerPrivate
{
public:
   CommunicationContainerPrivate()
   : udpConnectionService_(udpSocket_)
   , commDeviceManager_(udpSocket_)
   , connectionController_(udpConnectionService_)
   , jsonReceiver_(commDeviceManager_)
   {
   }
   QUdpSocket udpSocket_;
   UdpConnectionService udpConnectionService_;
   CommDeviceManager commDeviceManager_;
   ConnectionController connectionController_;
   JsonReceiver jsonReceiver_;
};

CommunicationContainer::CommunicationContainer()
: impl_(new CommunicationContainerPrivate())
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
