#pragma once

#include <QScopedPointer>

class BusinessContainer;
class CommunicationContainerPrivate;
class ConnectionController;

class CommDeviceManager;
class I_JsonReceiver;
class UdpConnectionService;

class CommunicationContainer
{
public:
   explicit CommunicationContainer();
   ~CommunicationContainer();

   I_JsonReceiver& jsonReceiver();
   ConnectionController& connectionController();
   UdpConnectionService& udpConnectionService();
   CommDeviceManager& commDeviceManager();

private:
   // This is using the PIMPL design pattern, refer to http://c2.com/cgi/wiki?PimplIdiom
   QScopedPointer<CommunicationContainerPrivate> impl_;
};
