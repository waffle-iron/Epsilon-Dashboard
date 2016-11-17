<<<<<<< Updated upstream
#include <QtSerialPort/QSerialPort>
=======
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
    CommunicationContainerPrivate(DataContainer& dataContainer)
        : radioConnectionService(serialPort)
        , messageForwarder(radioConnectionService)
        , packetSynchronizer(radioConnectionService)
        , packetUnstuffer(packetSynchronizer)
        , packetChecksumChecker(packetUnstuffer)
        , packetDecoder(packetChecksumChecker)
        , keyDriverControlPopulator(
              packetDecoder,
              dataContainer.vehicleData(),
              dataContainer.powerData())
        , driverDetailsPopulator(
              packetDecoder,
              dataContainer.vehicleData(),
              dataContainer.powerData())
        , faultsPopulator(
              packetDecoder,
              dataContainer.faultsData())
        , batteryPopulator(
              packetDecoder,
              dataContainer.batteryData())
        , cmuPopulator(
              packetDecoder,
              dataContainer.batteryData())
        , mpptPopulator(
              packetDecoder,
              dataContainer.mpptData())
    {
    }

    QSerialPort serialPort;
    RadioCommDevice radioConnectionService;
    UdpMessageForwarder messageForwarder;
    PacketSynchronizer packetSynchronizer;
    PacketUnstuffer packetUnstuffer;
    PacketChecksumChecker packetChecksumChecker;
    PacketDecoder packetDecoder;
    KeyDriverControlPopulator keyDriverControlPopulator;
    DriverDetailsPopulator driverDetailsPopulator;
    FaultsPopulator faultsPopulator;
    BatteryPopulator batteryPopulator;
    CmuPopulator cmuPopulator;
    MpptPopulator mpptPopulator;
=======
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
>>>>>>> Stashed changes
};

CommunicationContainer::CommunicationContainer(DataContainer& dataContainer)
    : impl_(new CommunicationContainerPrivate(dataContainer))
{
}

CommunicationContainer::~CommunicationContainer()
{
}

<<<<<<< Updated upstream
I_CommDevice& CommunicationContainer::commDevice()
{
    return impl_->radioConnectionService;
}

I_PacketSynchronizer& CommunicationContainer::packetSynchronizer()
{
    return impl_->packetSynchronizer;
=======
ConnectionController& CommunicationContainer::connectionController()
{
   return impl_->connectionController_;
>>>>>>> Stashed changes
}

UdpConnectionService& CommunicationContainer::udpConnectionService()
{
<<<<<<< Updated upstream
    return impl_->packetUnstuffer;
=======
   return impl_->udpConnectionService_;
>>>>>>> Stashed changes
}

I_JsonInterpreter& CommunicationContainer::jsonInterpreter()
{
<<<<<<< Updated upstream
    return impl_->packetDecoder;
=======
   return impl_->jsonInterpreter_;
>>>>>>> Stashed changes
}

CommDeviceManager& CommunicationContainer::commDeviceManager()
{
<<<<<<< Updated upstream
    return impl_->packetChecksumChecker;
=======
   return impl_->commDeviceManager_;
>>>>>>> Stashed changes
}
