#include <QDebug>
#include <QSettings>

#include "Settings.h"

namespace
{
    const QSettings::Format SETTINGS_FILE_FORMAT = QSettings::IniFormat;
    const QString SERIAL_PORT_NAME = "SerialPort/portName";
    const QString BAUDRATE = "SerialPort/baudrate";
    const QString IP_ADDRESS = "UdpAddress/ipAddress";
    const QString DEFAULT_IP = "127.0.0.1";
    const QString PORT = "UdpAddress/port";
    const QString DEFAULT_PORT = "5672";
    const QString FORWARD_PERIOD = "forwardPeriod";
    const QString PACKET_TITLE = "JsonFormat/packetTitle";
    const QString EXCHANGE_NAME = "rabbitMQ/exchangeName";

}

Settings::Settings(QString filepath)
    : settings_(filepath, SETTINGS_FILE_FORMAT)
{
}

QString Settings::serialPortName() const
{
    return settings_.value(SERIAL_PORT_NAME).toString();
}

int Settings::baudrate() const
{
    return settings_.value(BAUDRATE).toInt();
}

QString Settings::ipAddress() const
{
    return QString(settings_.value(IP_ADDRESS, DEFAULT_IP).toString());
}

quint16 Settings::udpPort() const
{
    return (quint16)settings_.value(PORT, DEFAULT_PORT).toInt();
}

int Settings::forwardPeriod() const
{
    return settings_.value(FORWARD_PERIOD).toInt();
}

QString Settings::packetTitle() const
{
    return settings_.value(PACKET_TITLE).toString();
}

QString Settings::exchangeName() const
{
    return QString(settings_.value(EXCHANGE_NAME).toString());
}
