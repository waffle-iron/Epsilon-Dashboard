#pragma once

#include <QScopedPointer>

class DataContainer;
class CommunicationContainerPrivate;
class ConnectionController;

class CommDeviceManager;
class I_JsonInterpreter;
class UdpConnectionService;

class CommunicationContainer
{
public:
    explicit CommunicationContainer(DataContainer& dataContainer);
    ~CommunicationContainer();

<<<<<<< Updated upstream
    I_PacketSynchronizer& packetSynchronizer();
    I_PacketDecoder& packetDecoder();
    I_PacketChecksumChecker& packetChecksumChecker();
    I_DataInjectionService& dataInjectionService();
    I_CommDevice& commDevice();
=======
   I_JsonInterpreter& jsonInterpreter();
   ConnectionController& connectionController();
   UdpConnectionService& udpConnectionService();
   CommDeviceManager& commDeviceManager();
>>>>>>> Stashed changes

private:
    // This is using the PIMPL design pattern, refer to http://c2.com/cgi/wiki?PimplIdiom
    QScopedPointer<CommunicationContainerPrivate> impl_;
};
