#pragma once

#include <QObject>

class I_JsonInterpreter : public QObject
{
    Q_OBJECT
public:
    virtual ~I_JsonInterpreter() {}

public slots:
    virtual void handleIncomingData(const QByteArray&) = 0;

signals:
    void batteryDataReceived(const QJsonObject& data);
    void faultDataReceived(const QJsonObject& data);
    void powerDataReceived(const QJsonObject& data);
    void vehicleDataReceived(const QJsonObject& data);
    void invalidDataReceived();
};
