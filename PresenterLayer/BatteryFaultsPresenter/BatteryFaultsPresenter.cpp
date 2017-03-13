#include "BatteryFaultsPresenter.h"
#include "../../DataLayer/BatteryFaultsData/I_BatteryFaultsData.h"

BatteryFaultsPresenter::BatteryFaultsPresenter(const I_BatteryFaultsData& batteryFaultsData)
    : batteryFaultsData_(batteryFaultsData)
{
    relayBatteryFaultsData();
}

void BatteryFaultsPresenter::relayBatteryFaultsData()
{
    connect(&batteryFaultsData_, SIGNAL(cellOverVoltageReceived(bool cellOverVoltage)),
            this, SIGNAL(cellOverVoltageReceived(bool cellOverVoltage)));
    connect(&batteryFaultsData_, SIGNAL(cellUnderVoltageReceived(bool cellUnderVoltage)),
            this, SIGNAL(cellUnderVoltageReceived(bool cellUnderVoltage)));
    connect(&batteryFaultsData_, SIGNAL(cellOverTemperatureReceived(bool cellOverTemperature)),
            this, SIGNAL(cellOverTemperatureReceived(bool cellOverTemperature)));
    connect(&batteryFaultsData_, SIGNAL(measurementUntrustedReceived(bool measurementUntrusted)),
            this, SIGNAL(measurementUntrustedReceived(bool measurementUntrusted)));
    connect(&batteryFaultsData_, SIGNAL(cmuCommTimeoutReceived(bool cmuCommTimeout)),
            this, SIGNAL(cmuCommTimeoutReceived(bool cmuCommTimeout)));
    connect(&batteryFaultsData_, SIGNAL(bmuIsInSetupModeReceived(bool bmuIsInSetupMode)),
            this, SIGNAL(bmuIsInSetupModeReceived(bool bmuIsInSetupMode)));
    connect(&batteryFaultsData_, SIGNAL(cmuCanBusPowerStatusReceived(bool cmuCanBusPowerStatus)),
            this, SIGNAL(cmuCanBusPowerStatusReceived(bool cmuCanBusPowerStatus)));
    connect(&batteryFaultsData_, SIGNAL(packIsolationTestFailureReceived(bool packIsolationTestFailure)),
            this, SIGNAL(packIsolationTestFailureReceived(bool packIsolationTestFailure)));
    connect(&batteryFaultsData_, SIGNAL(softwareOverCurrentMeasuredReceived(bool softwareOverCurrentMeasured)),
            this, SIGNAL(softwareOverCurrentMeasuredReceived(bool softwareOverCurrentMeasured)));
    connect(&batteryFaultsData_, SIGNAL(canSupplyIsLowReceived(bool canSupplyIsLow)),
            this, SIGNAL(canSupplyIsLowReceived(bool canSupplyIsLow)));
    connect(&batteryFaultsData_, SIGNAL(contactorIsStuckReceived(bool contactorIsStuck)),
            this, SIGNAL(contactorIsStuckReceived(bool contactorIsStuck)));
    connect(&batteryFaultsData_, SIGNAL(cmuDetectedExtraCellPresentReceived(bool cmuDetectedExtraCellPresent)),
            this, SIGNAL(cmuDetectedExtraCellPresentReceived(bool cmuDetectedExtraCellPresent)));
}
