#include <SimpleAmqpClient/SimpleAmqpClient.h>
#include <QUdpSocket>
#include "InternetConnectionService.h"
#include <QDebug>
#include "../../InfrastructureLayer/Settings/I_Settings.h"
#include <QTextStream>
#include <QTimer>
namespace
{
    quint32 TIMEOUT_MILLISECONDS = 120000;
    quint32 SLEEP_TIME_MILLISECONDS = 2000;
}


InternetConnectionService::InternetConnectionService(QString exchangeName,
        QString ipAddress,
        quint16 udpPort)
    : exchangeName_(exchangeName),
      ipAddress_(ipAddress),
      udpPort_(udpPort)
{
    QObject::connect(this, SIGNAL(setupChannelSignal()), this, SLOT(setupChannel()));

    qtimer_ = new QTimer(this);
    qtimer_->setSingleShot(true);
    connect(qtimer_, SIGNAL(timeout()), this, SLOT(setupChannel()));
    connectToDataSource();
}

InternetConnectionService::~InternetConnectionService()
{
}


void InternetConnectionService::setupChannel()
{
    qWarning() << "UdpMessageForwarder: Attempting to connect" << ipAddress_ << udpPort_;

    try
    {
        channel_ = AmqpClient::Channel::Create(ipAddress_.toStdString(), udpPort_);
    }
    catch (std::exception&)
    {
        if (channel_ == NULL)
        {
            /*if (numberOfCalls == (TIMEOUT_SECONDS / SLEEP_TIME_SECONDS))
            {
                qWarning() << "UdpMessageForwarder timed out waiting for connection to broker";
                throw;
            }*/

        }
        else
        {
            throw;
        }

        qWarning() << "UdpMessageForwarder: error creating channel";
        qtimer_->start(SLEEP_TIME_MILLISECONDS);
        return;
    }

    if (channel_ == NULL)
    {
        qWarning() << "UdpMessageForwarder: error creating channel";
        qtimer_->start(SLEEP_TIME_MILLISECONDS);
        return;
    }

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
}
