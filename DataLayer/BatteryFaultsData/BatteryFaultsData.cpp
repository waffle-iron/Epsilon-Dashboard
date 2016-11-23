#include "BatteryFaultsData.h"
#include <QDebug>

BatteryFaultsData::BatteryFaultsData()
{
}

BatteryFaultsData::~BatteryFaultsData()
{
}

bool BatteryFaultsData::batteryFaults_CellOverVoltage() const
{
    return batteryFaults_CellOverVoltage_;
}
bool BatteryFaultsData::batteryFaults_CellUnderVoltage() const
{
    return batteryFaults_CellUnderVoltage_;
}
bool BatteryFaultsData::batteryFaults_CellOverTemp() const
{
    return batteryFaults_CellOverTemp_;
}
bool BatteryFaultsData::batteryFaults_MeasurementUntrusted() const
{
    return batteryFaults_MeasurementUntrusted_;
}
bool BatteryFaultsData::batteryFaults_CMUCommTimeout() const
{
    return batteryFaults_CMUCommTimeout_;
}
bool BatteryFaultsData::batteryFaults_BMUSetupMode() const
{
    return batteryFaults_BMUSetupMode_;
}
bool BatteryFaultsData::batteryFaults_CMUCANBusPowerStatus() const
{
    return batteryFaults_CMUCANBusPowerStatus_;
}
bool BatteryFaultsData::batteryFaults_PackIsolationFailure() const
{
    return batteryFaults_PackIsolationFailure_;
}
bool BatteryFaultsData::batteryFaults_SoftwareOverCurrent() const
{
    return batteryFaults_SoftwareOverCurrent_;
}
bool BatteryFaultsData::batteryFaults_CAN12VSupplyLow() const
{
    return batteryFaults_CAN12VSupplyLow_;
}
bool BatteryFaultsData::batteryFaults_ContactorStuck() const
{
    return batteryFaults_ContactorStuck_;
}
bool BatteryFaultsData::batteryFaults_CMUDetectedExtraCell() const
{
    return batteryFaults_CMUDetectedExtraCell_;
}


void BatteryFaultsData::setBatteryFaults_CellOverVoltage(bool batteryFaults_CellOverVoltage)
{
    batteryFaults_CellOverVoltage_ = batteryFaults_CellOverVoltage;
    emit batteryFaults_CellOverVoltageReceived(batteryFaults_CellOverVoltage_);
}
void BatteryFaultsData::setBatteryFaults_CellUnderVoltage(bool batteryFaults_CellUnderVoltage)
{
    batteryFaults_CellUnderVoltage_ = batteryFaults_CellUnderVoltage;
    emit batteryFaults_CellUnderVoltageReceived(batteryFaults_CellUnderVoltage_);
}
void BatteryFaultsData::setBatteryFaults_CellOverTemp(bool batteryFaults_CellOverTemp)
{
    batteryFaults_CellOverTemp_ = batteryFaults_CellOverTemp;
    emit batteryFaults_CellOverTempReceived(batteryFaults_CellOverTemp_);
}
void BatteryFaultsData::setBatteryFaults_MeasurementUntrusted(bool batteryFaults_MeasurementUntrusted)
{
    batteryFaults_MeasurementUntrusted_ = batteryFaults_MeasurementUntrusted;
    emit batteryFaults_MeasurementUntrustedReceived(batteryFaults_MeasurementUntrusted_);
}
void BatteryFaultsData::setBatteryFaults_CMUCommTimeout(bool batteryFaults_CMUCommTimeout)
{
    batteryFaults_CMUCommTimeout_ = batteryFaults_CMUCommTimeout;
    emit batteryFaults_CMUCommTimeoutReceived(batteryFaults_CMUCommTimeout_);
}
void BatteryFaultsData::setBatteryFaults_BMUSetupMode(bool batteryFaults_BMUSetupMode)
{
    batteryFaults_BMUSetupMode_ = batteryFaults_BMUSetupMode;
    emit batteryFaults_BMUSetupModeReceived(batteryFaults_BMUSetupMode_);
}
void BatteryFaultsData::setBatteryFaults_CMUCANBusPowerStatus(bool batteryFaults_CMUCANBusPowerStatus)
{
    batteryFaults_CMUCANBusPowerStatus_ = batteryFaults_CMUCANBusPowerStatus;
    emit batteryFaults_CMUCANBusPowerStatusReceived(batteryFaults_CMUCANBusPowerStatus_);
}
void BatteryFaultsData::setBatteryFaults_PackIsolationFailure(bool batteryFaults_PackIsolationFailure)
{
    batteryFaults_PackIsolationFailure_ = batteryFaults_PackIsolationFailure;
    emit batteryFaults_PackIsolationFailureReceived(batteryFaults_PackIsolationFailure_);
}
void BatteryFaultsData::setBatteryFaults_SoftwareOverCurrent(bool batteryFaults_SoftwareOverCurrent)
{
    batteryFaults_SoftwareOverCurrent_ = batteryFaults_SoftwareOverCurrent;
    emit batteryFaults_SoftwareOverCurrentReceived(batteryFaults_SoftwareOverCurrent_);
}
void BatteryFaultsData::setBatteryFaults_CAN12VSupplyLow(bool batteryFaults_CAN12VSupplyLow)
{
    batteryFaults_CAN12VSupplyLow_ = batteryFaults_CAN12VSupplyLow;
    emit batteryFaults_CAN12VSupplyLowReceived(batteryFaults_CAN12VSupplyLow_);
}
void BatteryFaultsData::setBatteryFaults_ContactorStuck(bool batteryFaults_ContactorStuck)
{
    batteryFaults_ContactorStuck_ = batteryFaults_ContactorStuck;
    emit batteryFaults_ContactorStuckReceived(batteryFaults_ContactorStuck_);
}
void BatteryFaultsData::setBatteryFaults_CMUDetectedExtraCell(bool batteryFaults_CMUDetectedExtraCell)
{
    batteryFaults_CMUDetectedExtraCell_ = batteryFaults_CMUDetectedExtraCell;
    emit batteryFaults_CMUDetectedExtraCellReceived(batteryFaults_CMUDetectedExtraCell_);
}
