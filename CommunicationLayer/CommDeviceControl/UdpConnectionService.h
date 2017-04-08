#pragma once

#include <SimpleAmqpClient/SimpleAmqpClient.h>
#include <QHostAddress>
#include <QString>
#include <QUdpSocket>
#include <QThread>
#include "I_ConnectionService.h"

class QUdpSocket;
class I_Settings;



class UdpConnectionService : public I_ConnectionService
{
    Q_OBJECT
public:
    UdpConnectionService(I_Settings& settings);
    virtual ~UdpConnectionService();

    void setMulticastNetwork(QHostAddress groupAddress, quint16 port);
    void setupChannel();
    bool connectToDataSource();
    void disconnectFromDataSource();

private:
    //QHostAddress groupAddress_;
    //quint16 port_;
    ///QUdpSocket& socket_;

    AmqpClient::Channel::ptr_t channel_;
    QString exchangeName_;
    QString ipAddress_;
    quint16 udpPort_;
    std::string queueName_;

};
