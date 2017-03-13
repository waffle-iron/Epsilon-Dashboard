#include "BatteryFaultsData.h"
#include <QDebug>

BatteryFaultsData::BatteryFaultsData()
{
}

BatteryFaultsData::~BatteryFaultsData()
{
}


bool BatteryFaultsData::cellOverVoltage() const
{
    return cellOverVoltage_;
}

bool BatteryFaultsData::cellUnderVoltage() const
{
    return cellUnderVoltage_;
}

bool BatteryFaultsData::cellOverTemperature() const
{
    return cellOverTemperature_;
}

bool BatteryFaultsData::measurementUntrusted() const
{
    return measurementUntrusted_;
}

bool BatteryFaultsData::cmuCommTimeout() const
{
    return cmuCommTimeout_;
}

bool BatteryFaultsData::bmuIsInSetupMode() const
{
    return bmuIsInSetupMode_;
}

bool BatteryFaultsData::cmuCanBusPowerStatus() const
{
    // Note: This fault flag actually means everything is okay.
    return !cmuCanBusPowerStatus_;
}

bool BatteryFaultsData::packIsolationTestFailure() const
{
    return packIsolationTestFailure_;
}

bool BatteryFaultsData::softwareOverCurrentMeasured() const
{
    return softwareOverCurrentMeasured_;
}

bool BatteryFaultsData::canSupplyIsLow() const
{
    return canSupplyIsLow_;
}

bool BatteryFaultsData::contactorIsStuck() const
{
    return contactorIsStuck_;
}

bool BatteryFaultsData::cmuDetectedExtraCellPresent() const
{
    return cmuDetectedExtraCellPresent_;
}

void BatteryFaultsData::setCellOverVoltage(bool cellOverVoltage)
{
    cellOverVoltage_ = cellOverVoltage;
}

void BatteryFaultsData::setCellUnderVoltage(bool cellUnderVoltage)
{
    cellUnderVoltage_ = cellUnderVoltage;
}

void BatteryFaultsData::setCellOverTemperature(bool cellOverTemperature)
{
    cellOverTemperature_ = cellOverTemperature;
}

void BatteryFaultsData::setMeasurementUntrusted(bool measurementUntrusted)
{
    measurementUntrusted_ = measurementUntrusted;
}

void BatteryFaultsData::setCmuCommTimeout(bool cmuCommTimeout)
{
    cmuCommTimeout_ = cmuCommTimeout;
}

void BatteryFaultsData::setBmuIsInSetupMode(bool bmuIsInSetupMode)
{
    bmuIsInSetupMode_ = bmuIsInSetupMode;
}

void BatteryFaultsData::setCmuCanBusPowerStatus(bool cmuCanBusPowerStatus)
{
    cmuCanBusPowerStatus_ = cmuCanBusPowerStatus;
}

void BatteryFaultsData::setPackIsolationTestFailure(bool packIsolationTestFailure)
{
    packIsolationTestFailure_ = packIsolationTestFailure;
}

void BatteryFaultsData::setSoftwareOverCurrentMeasured(bool softwareOverCurrentMeasured)
{
    softwareOverCurrentMeasured_ = softwareOverCurrentMeasured;
}

void BatteryFaultsData::setCanSupplyIsLow(bool canSupplyIsLow)
{
    canSupplyIsLow_ = canSupplyIsLow;
}

void BatteryFaultsData::setContactorIsStuck(bool contactorIsStuck)
{
    contactorIsStuck_ = contactorIsStuck;
}

void BatteryFaultsData::setCmuDetectedExtraCellPresent(bool cmuDetectedExtraCellPresent)
{
    cmuDetectedExtraCellPresent_ = cmuDetectedExtraCellPresent;
}
