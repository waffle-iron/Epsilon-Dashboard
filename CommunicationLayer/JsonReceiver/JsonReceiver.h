#pragma once

#include <QObject>
#include "I_JsonReceiver.h"

#include "CommunicationLayer/CommDeviceControl/I_CommDevice.h"

class JsonReceiver : public I_JsonReceiver
{
    Q_OBJECT
public:
    JsonReceiver(I_CommDevice& inputDevice);
    virtual ~JsonReceiver() {}

public slots:
    void handleIncomingData(const QByteArray&);
};
