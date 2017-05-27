#include <SimpleAmqpClient/SimpleAmqpClient.h>
#include <QUdpSocket>
#include <QDebug>
#include <QTextStream>
#include <QTimer>

#include "../../InfrastructureLayer/Settings/I_Settings.h"
#include "InternetConnectionService.h"
namespace
{
    quint32 SLEEP_TIME_MILLISECONDS = 2000;
}

InternetConnectionService::InternetConnectionService(
    QString exchangeName
    ,  QString ipAddress
    ,  quint16 port)
    : exchangeName_(exchangeName)
    , ipAddress_(ipAddress)
    , port_(port)
    , connectionRetryTimer_(new QTimer(this))
{
    QObject::connect(this, SIGNAL(setupChannelSignal()), this, SLOT(setupChannel()));

    //connectionRetryTimer_& = new QTimer(this);
    connectionRetryTimer_.setSingleShot(true);
    connect(&connectionRetryTimer_, SIGNAL(timeout()), this, SLOT(setupChannel()));
    connectToDataSource();
}

InternetConnectionService::~InternetConnectionService()
{
}


void InternetConnectionService::setupChannel()
{
    qWarning() << "InternetConnectionService: Attempting to connect to " << ipAddress_ << port_;

    try
    {
        channel_ = AmqpClient::Channel::Create(ipAddress_.toStdString(), port_);
    }
    catch (AmqpClient::AmqpException::exception&)
    {
        if (channel_ == NULL)
        {
            qWarning() << "Connection failed, retrying in" << SLEEP_TIME_MILLISECONDS / 1000 << "seconds";
            connectionRetryTimer_.start(SLEEP_TIME_MILLISECONDS);
        }
        else
        {
            qWarning() << " InternetConnectionService: Error creating channel, quitting program";
            throw;
        }

        return;
    }

    channel_->DeclareExchange(exchangeName_.toStdString(), AmqpClient::Channel::EXCHANGE_TYPE_FANOUT);
    queueName_ = channel_->DeclareQueue("Dashboard Queue");
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

void InternetConnectionService::disconnectFromDataSource()
{
    channel_->UnbindQueue(queueName_, exchangeName_.toStdString());
    channel_.reset();
}
