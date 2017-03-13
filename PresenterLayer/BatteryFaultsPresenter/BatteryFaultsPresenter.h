#pragma once

#include <QObject>

class I_BatteryFaultsData;

class BatteryFaultsPresenter : public QObject
{
    Q_OBJECT
public:
    explicit BatteryFaultsPresenter(const I_BatteryFaultsData& batteryFaultsData);

private:
    void relayBatteryFaultsData();

    const I_BatteryFaultsData& batteryFaultsData_;

signals:
    void cellOverVoltageReceived(bool cellOverVoltage);
    void cellUnderVoltageReceived(bool cellUnderVoltage);
    void cellOverTemperatureReceived(bool cellOverTemperature);
    void measurementUntrustedReceived(bool measurementUntrusted);
    void cmuCommTimeoutReceived(bool cmuCommTimeout);
    void bmuIsInSetupModeReceived(bool bmuIsInSetupMode);
    void cmuCanBusPowerStatusReceived(bool cmuCanBusPowerStatus);
    void packIsolationTestFailureReceived(bool packIsolationTestFailure);
    void softwareOverCurrentMeasuredReceived(bool softwareOverCurrentMeasured);
    void canSupplyIsLowReceived(bool canSupplyIsLow);
    void contactorIsStuckReceived(bool contactorIsStuck);
    void cmuDetectedExtraCellPresentReceived(bool cmuDetectedExtraCellPresent);
};
