#include "BatteryFaultsPresenter.h"

BatteryFaultsPresenter::BatteryFaultsPresenter(const I_BatteryFaultsData& batteryFaultsData)
    : batteryFaultsData_(batteryFaultsData)
{
    relayBatteryFaultsData();
}

void BatteryFaultsPresenter::relayBatteryFaultsData()
{
    connect(&batteryFaultsData_, SIGNAL(batteryFaultsReceived(BatteryFaults)),
            this, SIGNAL(batteryFaultsReceived(BatteryFaults)));
}
