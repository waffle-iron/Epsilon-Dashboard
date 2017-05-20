#pragma once

#include <SimpleAmqpClient/SimpleAmqpClient.h>
#include <QHostAddress>
#include <QString>
#include <QUdpSocket>
#include <QThread>
#include "I_ConnectionService.h"
#include <QTimer>

class QUdpSocket;

class InternetConnectionService : public I_ConnectionService
{
    Q_OBJECT
public:
    InternetConnectionService(QString exchangeName,
                              QString ipAddress,
                              quint16 udpPort);
    virtual ~InternetConnectionService();

    bool connectToDataSource();
    void disconnectFromDataSource();

signals:
    void setupChannelSignal();

public slots:
    void setupChannel();



private:

    AmqpClient::Channel::ptr_t channel_;
    QString exchangeName_;
    QString ipAddress_;
    quint16 udpPort_;
    std::string queueName_;
    QTimer* qtimer_;
};
