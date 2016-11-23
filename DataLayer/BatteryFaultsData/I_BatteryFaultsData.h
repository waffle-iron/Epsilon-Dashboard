#pragma once

#include <QObject>

class I_BatteryFaultsData : public QObject
{
    Q_OBJECT

public:
    virtual ~I_BatteryFaultsData() {}

    virtual bool batteryFaults_CellOverVoltage() const = 0;
    virtual bool batteryFaults_CellUnderVoltage() const = 0;
    virtual bool batteryFaults_CellOverTemp() const = 0;
    virtual bool batteryFaults_MeasurementUntrusted() const = 0;
    virtual bool batteryFaults_CMUCommTimeout() const = 0;
    virtual bool batteryFaults_BMUSetupMode() const = 0;
    virtual bool batteryFaults_CMUCANBusPowerStatus() const = 0;
    virtual bool batteryFaults_PackIsolationFailure() const = 0;
    virtual bool batteryFaults_SoftwareOverCurrent() const = 0;
    virtual bool batteryFaults_CAN12VSupplyLow() const = 0;
    virtual bool batteryFaults_ContactorStuck() const = 0;
    virtual bool batteryFaults_CMUDetectedExtraCell() const = 0;

    virtual void setBatteryFaults_CellOverVoltage(bool batteryFaults_CellOverVoltage) = 0;
    virtual void setBatteryFaults_CellUnderVoltage(bool batteryFaults_CellUnderVoltage) = 0;
    virtual void setBatteryFaults_CellOverTemp(bool batteryFaults_CellOverTemp) = 0;
    virtual void setBatteryFaults_MeasurementUntrusted(bool batteryFaults_MeasurementUntrusted) = 0;
    virtual void setBatteryFaults_CMUCommTimeout(bool batteryFaults_CMUCommTimeout) = 0;
    virtual void setBatteryFaults_BMUSetupMode(bool batteryFaults_BMUSetupMode) = 0;
    virtual void setBatteryFaults_CMUCANBusPowerStatus(bool batteryFaults_CMUCANBusPowerStatus) = 0;
    virtual void setBatteryFaults_PackIsolationFailure(bool batteryFaults_PackIsolationFailure) = 0;
    virtual void setBatteryFaults_SoftwareOverCurrent(bool batteryFaults_SoftwareOverCurrent) = 0;
    virtual void setBatteryFaults_CAN12VSupplyLow(bool batteryFaults_CAN12VSupplyLow) = 0;
    virtual void setBatteryFaults_ContactorStuck(bool batteryFaults_ContactorStuck) = 0;
    virtual void setBatteryFaults_CMUDetectedExtraCell(bool batteryFaults_CMUDetectedExtraCell) = 0;

signals:
    void batteryFaults_CellOverVoltageReceived(bool batteryFaults_CellOverVoltage);
    void batteryFaults_CellUnderVoltageReceived(bool batteryFaults_CellUnderVoltage);
    void batteryFaults_CellOverTempReceived(bool batteryFaults_CellOverTemp);
    void batteryFaults_MeasurementUntrustedReceived(bool batteryFaults_MeasurementUntrusted);
    void batteryFaults_CMUCommTimeoutReceived(bool batteryFaults_CMUCommTimeout);
    void batteryFaults_BMUSetupModeReceived(bool batteryFaults_BMUSetupMode);
    void batteryFaults_CMUCANBusPowerStatusReceived(bool batteryFaults_CMUCANBusPowerStatus);
    void batteryFaults_PackIsolationFailureReceived(bool batteryFaults_PackIsolationFailure);
    void batteryFaults_SoftwareOverCurrentReceived(bool batteryFaults_SoftwareOverCurrent);
    void batteryFaults_CAN12VSupplyLowReceived(bool batteryFaults_CAN12VSupplyLow);
    void batteryFaults_ContactorStuckReceived(bool batteryFaults_ContactorStuck);
    void batteryFaults_CMUDetectedExtraCellReceived(bool batteryFaults_CMUDetectedExtraCell);
};
