#include "BatteryPresenter.h"
#include "../../DataLayer/BatteryData/I_BatteryData.h"

BatteryPresenter::BatteryPresenter(const I_BatteryData& batteryData)
    : batteryData_(batteryData)
{
    relayBatteryData();
}

void BatteryPresenter::relayBatteryData()
{
    connect(&batteryData_, SIGNAL(aliveReceived(bool)),
        this, SIGNAL(aliveReceived(bool)));
    connect(&batteryData_, SIGNAL(packSocAmpHoursReceived(double)),
        this, SIGNAL(packSocAmpHoursReceived(double)));
    connect(&batteryData_, SIGNAL(packSocPercentageReceived(double)),
        this, SIGNAL(packSocPercentageReceived(double)));
    connect(&batteryData_, SIGNAL(packBalanceSocAmpHoursReceived(double)),
        this, SIGNAL(packBalanceSocAmpHoursReceived(double)));
    connect(&batteryData_, SIGNAL(packBalanceSocPercentageReceived(double)),
        this, SIGNAL(packBalanceSocPercentageReceived(double)));
    connect(&batteryData_, SIGNAL(chargingCellVoltageErrorReceived(double)),
        this, SIGNAL(chargingCellVoltageErrorReceived(double)));
    connect(&batteryData_, SIGNAL(cellTempMarginReceived(double)),
        this, SIGNAL(cellTempMarginReceived(double)));
    connect(&batteryData_, SIGNAL(dischargingCellVoltageErrorReceived(double)),
        this, SIGNAL(dischargingCellVoltageErrorReceived(double)));
    connect(&batteryData_, SIGNAL(totalPackCapacityReceived(double)),
        this, SIGNAL(totalPackCapacityReceived(double)));
    connect(&batteryData_, SIGNAL(prechargeContactor0DriverStatusReceived(bool)),
        this, SIGNAL(prechargeContactor0DriverStatusReceived(bool)));
    connect(&batteryData_, SIGNAL(prechargeContactor1DriverStatusReceived(bool)),
        this, SIGNAL(prechargeContactor1DriverStatusReceived(bool)));
    connect(&batteryData_, SIGNAL(prechargeContactor2DriverStatusReceived(bool)),
        this, SIGNAL(prechargeContactor2DriverStatusReceived(bool)));
    connect(&batteryData_, SIGNAL(prechargeContactor0DriverErrorReceived(bool)),
        this, SIGNAL(prechargeContactor0DriverErrorReceived(bool)));
    connect(&batteryData_, SIGNAL(prechargeContactor1DriverErrorReceived(bool)),
        this, SIGNAL(prechargeContactor1DriverErrorReceived(bool)));
    connect(&batteryData_, SIGNAL(prechargeContactor2DriverErrorReceived(bool)),
        this, SIGNAL(prechargeContactor2DriverErrorReceived(bool)));
    connect(&batteryData_, SIGNAL(contactorSupplyOkReceived(bool)),
        this, SIGNAL(contactorSupplyOkReceived(bool)));
    connect(&batteryData_, SIGNAL(prechargeStateReceived(QString)),
        this, SIGNAL(prechargeStateReceived(QString)));
    connect(&batteryData_, SIGNAL(prechargeTimerElapsedReceived(bool)),
        this, SIGNAL(prechargeTimerElapsedReceived(bool)));
    connect(&batteryData_, SIGNAL(prechargeTimerCountReceived(double)),
        this, SIGNAL(prechargeTimerCountReceived(double)));
    connect(&batteryData_, SIGNAL(lowestCellVoltage_VoltageReceived(double)),
        this, SIGNAL(lowestCellVoltage_VoltageReceived(double)));
    connect(&batteryData_, SIGNAL(lowestCellVoltage_CmuNumberReceived(int)),
        this, SIGNAL(lowestCellVoltage_CmuNumberReceived(int)));
    connect(&batteryData_, SIGNAL(lowestCellVoltage_CellNumberReceived(int)),
        this, SIGNAL(lowestCellVoltage_CellNumberReceived(int)));
    connect(&batteryData_, SIGNAL(lowestCellTemp_TemperatureReceived(double)),
        this, SIGNAL(lowestCellTemp_TemperatureReceived(double)));
    connect(&batteryData_, SIGNAL(lowestCellTemp_CmuNumberReceived(int)),
        this, SIGNAL(lowestCellTemp_CmuNumberReceived(int)));
    connect(&batteryData_, SIGNAL(lowestCellTemp_CellNumberReceived(int)),
        this, SIGNAL(lowestCellTemp_CellNumberReceived(int)));
    connect(&batteryData_, SIGNAL(highestCellVoltage_VoltageReceived(double)),
        this, SIGNAL(highestCellVoltage_VoltageReceived(double)));
    connect(&batteryData_, SIGNAL(highestCellVoltage_CmuNumberReceived(int)),
        this, SIGNAL(highestCellVoltage_CmuNumberReceived(int)));
    connect(&batteryData_, SIGNAL(highestCellVoltage_CellNumberReceived(int)),
        this, SIGNAL(highestCellVoltage_CellNumberReceived(int)));
    connect(&batteryData_, SIGNAL(highestCellTemp_TemperatureReceived(double)),
        this, SIGNAL(highestCellTemp_TemperatureReceived(double)));
    connect(&batteryData_, SIGNAL(highestCellTemp_CmuNumberReceived(int)),
        this, SIGNAL(highestCellTemp_CmuNumberReceived(int)));
    connect(&batteryData_, SIGNAL(highestCellTemp_CellNumberReceived(int)),
        this, SIGNAL(highestCellTemp_CellNumberReceived(int)));
    connect(&batteryData_, SIGNAL(voltageReceived(double)),
        this, SIGNAL(voltageReceived(double)));
    connect(&batteryData_, SIGNAL(currentReceived(double)),
        this, SIGNAL(currentReceived(double)));
    connect(&batteryData_, SIGNAL(fan0SpeedReceived(double)),
        this, SIGNAL(fan0SpeedReceived(double)));
    connect(&batteryData_, SIGNAL(fan1SpeedReceived(double)),
        this, SIGNAL(fan1SpeedReceived(double)));
    connect(&batteryData_, SIGNAL(fanContactorsCurrentReceived(double)),
        this, SIGNAL(fanContactorsCurrentReceived(double)));
    connect(&batteryData_, SIGNAL(cmuCurrentReceived(double)),
        this, SIGNAL(cmuCurrentReceived(double)));
}
