#pragma once

#include <QObject>
#include "I_JsonInterpreter.h"

#include "CommunicationLayer/CommDeviceControl/I_CommDevice.h"

class JsonInterpreter : public I_JsonInterpreter
{
    Q_OBJECT
public:
    JsonInterpreter(I_CommDevice& inputDevice);
    virtual ~JsonInterpreter() {}
    
public slots:
    void handleIncomingData(const QByteArray&);
};
