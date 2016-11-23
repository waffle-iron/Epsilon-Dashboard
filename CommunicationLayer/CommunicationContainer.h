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

   I_JsonInterpreter& jsonInterpreter();
   ConnectionController& connectionController();
   UdpConnectionService& udpConnectionService();
   CommDeviceManager& commDeviceManager();

private:
   // This is using the PIMPL design pattern, refer to http://c2.com/cgi/wiki?PimplIdiom
   QScopedPointer<CommunicationContainerPrivate> impl_;
};
