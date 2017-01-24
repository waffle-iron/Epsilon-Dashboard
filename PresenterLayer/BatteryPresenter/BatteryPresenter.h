#pragma once

#include <QObject>
class I_BatteryData;

class BatteryPresenter : public QObject
{
    Q_OBJECT
public:
    explicit BatteryPresenter(const I_BatteryData& batteryData);

private:
    void relayBatteryData();

    const I_BatteryData& batteryData_;

signals:
    void aliveReceived(bool alive);
    void packSocAmpHoursReceived(double packSocAmpHours);
    void packSocPercentageReceived(double packSocPercentage);
    void packBalanceSocAmpHoursReceived(double packBalanceSocAmpHours);
    void packBalanceSocPercentageReceived(double packBalanceSocPercentage);
    void chargingCellVoltageErrorReceived(double chargingCellVoltageError);
    void cellTempMarginReceived(double cellTempMargin);
    void dischargingCellVoltageErrorReceived(double dischargingCellVoltageError);
    void totalPackCapacityReceived(double totalPackCapacity);
    void prechargeContactor0DriverStatusReceived(bool prechargeContactor0DriverStatus);
    void prechargeContactor1DriverStatusReceived(bool prechargeContactor1DriverStatus);
    void prechargeContactor2DriverStatusReceived(bool prechargeContactor2DriverStatus);
    void prechargeContactor0DriverErrorReceived(bool prechargeContactor0DriverError);
    void prechargeContactor1DriverErrorReceived(bool prechargeContactor1DriverError);
    void prechargeContactor2DriverErrorReceived(bool prechargeContactor2DriverError);
    void contactorSupplyOkReceived(bool contactorSupplyOk);
    void prechargeStateReceived(QString prechargeState);
    void prechargeTimerElapsedReceived(bool prechargeTimerElapsed);
    void prechargeTimerCountReceived(double prechargeTimerCount);
    void lowestCellVoltage_VoltageReceived(double lowestCellVoltage_Voltage);
    void lowestCellVoltage_CmuNumberReceived(int lowestCellVoltage_CmuNumber);
    void lowestCellVoltage_CellNumberReceived(int lowestCellVoltage_CellNumber);
    void lowestCellTemp_TemperatureReceived(double lowestCellTemp_Temperature);
    void lowestCellTemp_CmuNumberReceived(int lowestCellTemp_CmuNumber);
    void lowestCellTemp_CellNumberReceived(int lowestCellTemp_CellNumber);
    void highestCellVoltage_VoltageReceived(double highestCellVoltage_Voltage);
    void highestCellVoltage_CmuNumberReceived(int highestCellVoltage_CmuNumber);
    void highestCellVoltage_CellNumberReceived(int highestCellVoltage_CellNumber);
    void highestCellTemp_TemperatureReceived(double highestCellTemp_Temperature);
    void highestCellTemp_CmuNumberReceived(int highestCellTemp_CmuNumber);
    void highestCellTemp_CellNumberReceived(int highestCellTemp_CellNumber);
    void voltageReceived(double voltage);
    void currentReceived(double current);
    void netPowerReceived(double netPower);
    void fan0SpeedReceived(double fan0Speed);
    void fan1SpeedReceived(double fan1Speed);
    void fanContactorsCurrentReceived(double fanContactorsCurrent);
    void cmuCurrentReceived(double cmuCurrent);
};
