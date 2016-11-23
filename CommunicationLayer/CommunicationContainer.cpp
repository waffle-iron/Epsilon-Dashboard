#include <QUdpSocket>

#include "../DataLayer/DataContainer.h"
#include "CommunicationContainer.h"
#include "CommDeviceControl/ConnectionController.h"
#include "CommDeviceControl/CommDeviceManager.h"
#include "CommDeviceControl/UdpConnectionService.h"
#include "DataPopulators/BatteryPopulator.h"
#include "DataPopulators/FaultsPopulator.h"
#include "DataPopulators/VehiclePopulator.h"
#include "DataPopulators/PowerPopulator.h"
#include "JsonInterpreter/JsonInterpreter.h"

class CommunicationContainerPrivate
{
public:
   CommunicationContainerPrivate(DataContainer& dataContainer)
   : udpConnectionService_(udpSocket_)
   , commDeviceManager_(udpSocket_)
   , connectionController_(udpConnectionService_)
   , jsonInterpreter_(commDeviceManager_)
   , batteryPopulator_(
      jsonInterpreter_,
      dataContainer.batteryData())
   , faultsPopulator_(
      jsonInterpreter_,
      dataContainer.faultsData())
   , powerPopulator_(
      jsonInterpreter_,
      dataContainer.powerData())
   , vehiclePopulator_(
      jsonInterpreter_,
      dataContainer.vehicleData())
   {
   }

   QUdpSocket udpSocket_;
   UdpConnectionService udpConnectionService_;
   CommDeviceManager commDeviceManager_;
   ConnectionController connectionController_;
   JsonInterpreter jsonInterpreter_;
   BatteryPopulator batteryPopulator_;
   FaultsPopulator faultsPopulator_;
   PowerPopulator powerPopulator_;
   VehiclePopulator vehiclePopulator_;
};

CommunicationContainer::CommunicationContainer(DataContainer& dataContainer)
: impl_(new CommunicationContainerPrivate(dataContainer))
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

I_JsonInterpreter& CommunicationContainer::jsonInterpreter()
{
   return impl_->jsonInterpreter_;
}

CommDeviceManager& CommunicationContainer::commDeviceManager()
{
   return impl_->commDeviceManager_;
}
