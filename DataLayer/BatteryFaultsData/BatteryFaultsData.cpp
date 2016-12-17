#include "BatteryFaultsData.h"
#include <QDebug>

BatteryFaultsData::BatteryFaultsData()
{
}

BatteryFaultsData::~BatteryFaultsData()
{
}

BatteryFaults BatteryFaultsData::batteryFaults() const
{
    return batteryFaults_;
}

void BatteryFaultsData::setBatteryFaults(BatteryFaults batteryFaults)
{
    batteryFaults_ = batteryFaults;
}
