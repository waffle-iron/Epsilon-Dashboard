#pragma once

#include "I_BatteryFaultsData.h"

class BatteryFaultsData : public I_BatteryFaultsData
{
public:
    BatteryFaultsData();
    virtual ~BatteryFaultsData();

    BatteryFaults batteryFaults() const;

    void setBatteryFaults(BatteryFaults batteryFaults);

private:
    BatteryFaults batteryFaults_;
};
