#include <SimpleAmqpClient/SimpleAmqpClient.h>
#include <QUdpSocket>
#include "UdpConnectionService.h"
#include <QDebug>

namespace
{
    quint32 TIMEOUT = 120;
    quint32 SLEEP_TIME = 2;
}

UdpConnectionService::UdpConnectionService(QUdpSocket& socket)
    : exchangeName_("hermesExchange")
    , ipAddress_("127.0.0.1")
    , udpPort_(5672)
{
    setupChannel();
}

UdpConnectionService::~UdpConnectionService()
{
}

void  UdpConnectionService::setMulticastNetwork(QHostAddress groupAddress, quint16 port)
{
    //groupAddress_ = groupAddress;
    //port_ = port;



}

void UdpConnectionService::setupChannel()
{
    quint32 i = 0;

    do
    {
        if (i++)
        {
            qWarning() << "UdpMessageForwarder: Attempting to reconnect";
        }

        try
        {
            channel_ = AmqpClient::Channel::Create(ipAddress_.toStdString(), udpPort_);
        }
        catch (std::exception&)
        {
            if (channel_ == NULL)
            {
                if (i == (TIMEOUT / SLEEP_TIME))
                {
                    qWarning() << "UdpMessageForwarder timed out waiting for connection to broker";
                    throw;
                }

                qWarning() << "UdpMessageForwarder: error creating channel";
                QThread::sleep(SLEEP_TIME);
            }
            else
            {
                throw;
            }
        }
    }
    while (channel_ == NULL);

    channel_->DeclareExchange(exchangeName_.toStdString(), AmqpClient::Channel::EXCHANGE_TYPE_FANOUT);
    queueName_ = channel_->DeclareQueue("");
    channel_->BindQueue(queueName_, exchangeName_.toStdString());

}

bool UdpConnectionService::connectToDataSource()
{
  /*  if (groupAddress_.isNull() || port_ == 0)
    {
        emit connectionFailed("Group address and port number is not set!");
        return false;
    }

    if (socket_.bind(QHostAddress::AnyIPv4, port_, QUdpSocket::ShareAddress) &&
            socket_.joinMulticastGroup(groupAddress_))
    {
        emit connectionSucceeded();
        return true;
    }
    else
    {
        emit connectionFailed(socket_.errorString());
        return false;
    }*/
}

void UdpConnectionService::disconnectFromDataSource()
{
   /* if (socket_.state() != QUdpSocket::UnconnectedState)
    {
        socket_.leaveMulticastGroup(groupAddress_);
    }

    socket_.close();
    emit connectionFailed("DISCONNECTED");*/
}
