#include <SimpleAmqpClient/SimpleAmqpClient.h>
#include <QUdpSocket>
#include "InternetConnectionService.h"
#include <QDebug>
#include "../../InfrastructureLayer/Settings/I_Settings.h"
#include <QTextStream>
namespace
{
    quint32 TIMEOUT_SECONDS = 120;
    quint32 SLEEP_TIME_SECONDS = 2;
}


InternetConnectionService::InternetConnectionService(QString exchangeName,
        QString ipAddress,
        quint16 udpPort)
    : channel_(NULL),
      exchangeName_(exchangeName),
      ipAddress_(ipAddress),
      udpPort_(udpPort)
{
}

InternetConnectionService::~InternetConnectionService()
{
}


void InternetConnectionService::setupChannel()
{
    quint32 i = 0;

    do
    {
        if (i)
        {
            qWarning() << "UdpMessageForwarder: Attempting to reconnect" << ipAddress_ << udpPort_;
        }

        i++;

        try
        {
            channel_ = AmqpClient::Channel::Create(ipAddress_.toStdString(), udpPort_);
        }
        catch (std::exception&)
        {
            if (channel_ == NULL)
            {
                if (i == (TIMEOUT_SECONDS / SLEEP_TIME_SECONDS))
                {
                    qWarning() << "UdpMessageForwarder timed out waiting for connection to broker";
                    throw;
                }

                qWarning() << "UdpMessageForwarder: error creating channel";
                QThread::sleep(SLEEP_TIME_SECONDS);
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

bool InternetConnectionService::connectToDataSource()
{
    setupChannel();

    if (channel_ == NULL)
    {
        return false;
    }

    return true;
}

//not sure if there is a correct way to do this, so this may be wrong/unneccessary
void InternetConnectionService::disconnectFromDataSource()
{
    channel_->UnbindQueue(queueName_, exchangeName_.toStdString());
    channel_ = NULL;
}
