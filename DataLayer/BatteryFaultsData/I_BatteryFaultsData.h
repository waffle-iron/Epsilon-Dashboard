#pragma once

#include <QObject>
#include <QString>
#include "DataLayer/BatteryFaultsData/BatteryFaults.h"

class I_BatteryFaultsData : public QObject
{
    Q_OBJECT

public:
    virtual ~I_BatteryFaultsData() {}

    virtual BatteryFaults batteryFaults() const = 0;

    virtual void setBatteryFaults(BatteryFaults batteryFaults) = 0;

signals:
    void batteryFaultsReceived(BatteryFaults batteryFaults);
};
