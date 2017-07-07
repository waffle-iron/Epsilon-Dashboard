#include <SimpleAmqpClient/SimpleAmqpClient.h>
#include <QDebug>
#include <QTimer>

#include "../../InfrastructureLayer/Settings/I_Settings.h"
#include "InternetConnectionService.h"

namespace
{
    quint32 SLEEP_TIME_MILLISECONDS = 2000;
}

InternetConnectionService::InternetConnectionService(
    QString exchangeName
    ,  QString queueName
    ,  QString ipAddress
    ,  quint16 port)
    : exchangeName_(exchangeName)
    , queueName_(queueName.toStdString())
    , ipAddress_(ipAddress)
    , port_(port)
    , connectionRetryTimer_(new QTimer(this))
{
    QObject::connect(this, SIGNAL(setupChannelSignal()), this, SLOT(setupChannel()));

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
        channel_->DeclareExchange(exchangeName_.toStdString(), AmqpClient::Channel::EXCHANGE_TYPE_FANOUT);
        channel_->DeclareQueue(queueName_);
        channel_->BindQueue(queueName_, exchangeName_.toStdString());
    }
    catch (AmqpClient::ChannelException&)
    {
        if (channel_ == NULL)
        {
            qWarning() << "Connection failed, retrying in" << SLEEP_TIME_MILLISECONDS << "ms";
            connectionRetryTimer_.start(SLEEP_TIME_MILLISECONDS);
            return;
        }
        else
        {
            qWarning() << " InternetConnectionService: Error creating channel, Channel Exception";
            throw;
        }
    }
    catch (AmqpClient::ChannelErrorException&)
    {
        if (channel_ == NULL)
        {
            qWarning() << "Connection failed, retrying in" << SLEEP_TIME_MILLISECONDS << "ms";
            connectionRetryTimer_.start(SLEEP_TIME_MILLISECONDS);
            return;
        }
        else
        {
            qWarning() << " InternetConnectionService: Error creating channel, Channel Errror Exception";
            throw;
        }
    }
    catch (AmqpClient::AmqpResponseLibraryException&)
    {
        if (channel_ == NULL)
        {
            qWarning() << " InternetConnectionService: Error creating channel, Channel is unuseable; Amqp Resonse Library Exception";
            throw;
        }
    }
    catch (AmqpClient::ConnectionException&)
    {
        if (channel_ == NULL)
        {
            qWarning() << " InternetConnectionService: Error creating channel, Channel is unuseable; Connection Exception";
            throw;
        }
    }
    catch (AmqpClient::AmqpException::exception&)
    {
        if (channel_ == NULL)
        {
            qWarning() << "Connection failed, retrying in" << SLEEP_TIME_MILLISECONDS << "ms";
            connectionRetryTimer_.start(SLEEP_TIME_MILLISECONDS);
            return;
        }
        else
        {
            qWarning() << " InternetConnectionService: Error creating channel, Unknown Exception";
            throw;
        }
    }

    qDebug("Successful connection to RabbitMQ Server");
}

bool InternetConnectionService::connectToDataSource()
{
    try
    {
        setupChannel();
    }
    catch (AmqpClient::ChannelException&)
    {
        qWarning() << "Channel could not be created exiting program";
        exit(EXIT_FAILURE);
    }
    catch (AmqpClient::ChannelErrorException&)
    {
        qWarning() << "Channel could not be created exiting program";
        exit(EXIT_FAILURE);
    }
    catch (AmqpClient::ConnectionException&)
    {
        qWarning() << "Channel could not be created exiting program";
        exit(EXIT_FAILURE);
    }
    catch (AmqpClient::AmqpResponseLibraryException&)
    {
        qWarning() << "Channel could not be created exiting program";
        exit(EXIT_FAILURE);
    }
    catch (AmqpClient::AmqpException::exception&)
    {
        qWarning() << "Channel could not be created exiting program";
        exit(EXIT_FAILURE);
    }

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
