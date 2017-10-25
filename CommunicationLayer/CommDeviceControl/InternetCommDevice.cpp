#include <QUdpSocket>

#include "InternetCommDevice.h"
#include <QDebug>

InternetCommDevice::InternetCommDevice(AmqpClient::Channel::ptr_t channel)
    : channel_(channel)
{
    connect(&retrieveDataTimer_, SIGNAL(timeout()), this, SLOT(handleJsonDataIncoming()));
    retrieveDataTimer_.start(1000);
    //handleJsonDataIncoming();
}

InternetCommDevice::~InternetCommDevice()
{
}

void InternetCommDevice::handleJsonDataIncoming()
{
    /*while (udpSocket_.hasPendingDatagrams())
    {
        QByteArray datagram;
        datagram.resize(udpSocket_.pendingDatagramSize());
        udpSocket_.readDatagram(datagram.data(), datagram.size());

        if (!datagram.isEmpty())
        {
            emit dataReceived(datagram);
        }
    }
    qDebug("Waiting to retrieve data...");
    if(channel_ == NULL){
        qDebug("Channel got disconnected");
        return;
    }*/
    channel_->DeclareQueue("");
    channel_->BindQueue("", "e1");
    std::string consumer_tag = channel_->BasicConsume("", "");
    AmqpClient::Envelope::ptr_t envelope = channel_->BasicConsumeMessage(consumer_tag);
    QString str = QString::fromStdString(envelope->Message()->Body());
    qDebug() << str;
    QByteArray dat = str.toUtf8();
    emit dataReceived(dat);
}
