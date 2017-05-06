#pragma once

#include <SimpleAmqpClient/SimpleAmqpClient.h>
#include <QHostAddress>
#include <QString>
#include <QUdpSocket>
#include <QThread>
#include "I_ConnectionService.h"


class QUdpSocket;




class InternetConnectionService : public I_ConnectionService
{
    Q_OBJECT
public:
    InternetConnectionService(QString exchangeName,
                              QString ipAddress,
                              quint16 udpPort);
    virtual ~InternetConnectionService();

    void setupChannel();
    bool connectToDataSource();
    void disconnectFromDataSource();

private:

    AmqpClient::Channel::ptr_t channel_;
    QString exchangeName_;
    QString ipAddress_;
    quint16 udpPort_;
    std::string queueName_;

};
