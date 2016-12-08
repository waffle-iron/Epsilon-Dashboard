#include "BatteryFaultsPresenter.h"
#include "../../DataLayer/BatteryFaultsData/I_BatteryFaultsData.h"

BatteryFaultsPresenter::BatteryFaultsPresenter(const I_BatteryFaultsData& batteryFaultsData)
    : batteryFaultsData_(batteryFaultsData)
{
    relayBatteryFaultsData();
}

void BatteryFaultsPresenter::relayBatteryFaultsData()
{
    connect(&batteryFaultsData_, SIGNAL(cellOverVoltageReceived(bool)),
        this, SIGNAL(cellOverVoltageReceived(bool)));
    connect(&batteryFaultsData_, SIGNAL(cellUnderVoltageReceived(bool)),
        this, SIGNAL(cellUnderVoltageReceived(bool)));
    connect(&batteryFaultsData_, SIGNAL(cellOverTemperatureReceived(bool)),
        this, SIGNAL(cellOverTemperatureReceived(bool)));
    connect(&batteryFaultsData_, SIGNAL(measurementUntrustedReceived(bool)),
        this, SIGNAL(measurementUntrustedReceived(bool)));
    connect(&batteryFaultsData_, SIGNAL(cmuCommTimeoutReceived(bool)),
        this, SIGNAL(cmuCommTimeoutReceived(bool)));
    connect(&batteryFaultsData_, SIGNAL(vehicleCommTimeoutReceived(bool)),
        this, SIGNAL(vehicleCommTimeoutReceived(bool)));
    connect(&batteryFaultsData_, SIGNAL(bmuIsInSetupModeReceived(bool)),
        this, SIGNAL(bmuIsInSetupModeReceived(bool)));
    connect(&batteryFaultsData_, SIGNAL(cmuCanBusPowerStatusReceived(bool)),
        this, SIGNAL(cmuCanBusPowerStatusReceived(bool)));
    connect(&batteryFaultsData_, SIGNAL(packIsolationTestFailureReceived(bool)),
        this, SIGNAL(packIsolationTestFailureReceived(bool)));
    connect(&batteryFaultsData_, SIGNAL(softwareOverCurrentMeasuredReceived(bool)),
        this, SIGNAL(softwareOverCurrentMeasuredReceived(bool)));
    connect(&batteryFaultsData_, SIGNAL(canSupplyIsLowReceived(bool)),
        this, SIGNAL(canSupplyIsLowReceived(bool)));
    connect(&batteryFaultsData_, SIGNAL(contactorIsStuckReceived(bool)),
        this, SIGNAL(contactorIsStuckReceived(bool)));
    connect(&batteryFaultsData_, SIGNAL(cmuDetectedExtraCellPresentReceived(bool)),
        this, SIGNAL(cmuDetectedExtraCellPresentReceived(bool)));
}
