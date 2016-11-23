#pragma once

#include "I_BatteryFaultsData.h"

class BatteryFaultsData : public I_BatteryFaultsData
{
public:
    BatteryFaultsData();
    virtual ~BatteryFaultsData();

    bool batteryFaults_CellOverVoltage() const;
    bool batteryFaults_CellUnderVoltage() const;
    bool batteryFaults_CellOverTemp() const;
    bool batteryFaults_MeasurementUntrusted() const;
    bool batteryFaults_CMUCommTimeout() const;
    bool batteryFaults_BMUSetupMode() const;
    bool batteryFaults_CMUCANBusPowerStatus() const;
    bool batteryFaults_PackIsolationFailure() const;
    bool batteryFaults_SoftwareOverCurrent() const;
    bool batteryFaults_CAN12VSupplyLow() const;
    bool batteryFaults_ContactorStuck() const;
    bool batteryFaults_CMUDetectedExtraCell() const;

    void setBatteryFaults_CellOverVoltage(bool batteryFaults_CellOverVoltage);
    void setBatteryFaults_CellUnderVoltage(bool batteryFaults_CellUnderVoltage);
    void setBatteryFaults_CellOverTemp(bool batteryFaults_CellOverTemp);
    void setBatteryFaults_MeasurementUntrusted(bool batteryFaults_MeasurementUntrusted);
    void setBatteryFaults_CMUCommTimeout(bool batteryFaults_CMUCommTimeout);
    void setBatteryFaults_BMUSetupMode(bool batteryFaults_BMUSetupMode);
    void setBatteryFaults_CMUCANBusPowerStatus(bool batteryFaults_CMUCANBusPowerStatus);
    void setBatteryFaults_PackIsolationFailure(bool batteryFaults_PackIsolationFailure);
    void setBatteryFaults_SoftwareOverCurrent(bool batteryFaults_SoftwareOverCurrent);
    void setBatteryFaults_CAN12VSupplyLow(bool batteryFaults_CAN12VSupplyLow);
    void setBatteryFaults_ContactorStuck(bool batteryFaults_ContactorStuck);
    void setBatteryFaults_CMUDetectedExtraCell(bool batteryFaults_CMUDetectedExtraCell);

private:
    bool batteryFaults_CellOverVoltage_;
    bool batteryFaults_CellUnderVoltage_;
    bool batteryFaults_CellOverTemp_;
    bool batteryFaults_MeasurementUntrusted_;
    bool batteryFaults_CMUCommTimeout_;
    bool batteryFaults_BMUSetupMode_;
    bool batteryFaults_CMUCANBusPowerStatus_;
    bool batteryFaults_PackIsolationFailure_;
    bool batteryFaults_SoftwareOverCurrent_;
    bool batteryFaults_CAN12VSupplyLow_;
    bool batteryFaults_ContactorStuck_;
    bool batteryFaults_CMUDetectedExtraCell_;
};

