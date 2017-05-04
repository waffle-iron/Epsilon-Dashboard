#pragma once

#include <QScopedPointer>

class DataContainer;
class I_CommunicationsMonitoringService;
class BusinessContainerPrivate;
class CommunicationContainer;

class BusinessContainer
{
public:
    explicit BusinessContainer(CommunicationContainer& communicationContainer, DataContainer& dataContainer);
    ~BusinessContainer();

    I_CommunicationsMonitoringService& communicationsMonitoringService();
private:
    QScopedPointer<I_CommunicationsMonitoringService> communicationsMonitoringService_;
    QScopedPointer<BusinessContainerPrivate> impl_;
};
