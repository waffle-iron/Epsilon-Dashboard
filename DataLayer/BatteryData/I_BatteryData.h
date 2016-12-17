#pragma once

#include <QObject>
#include <QString>

class I_BatteryData : public QObject
{
    Q_OBJECT

public:
    virtual ~I_BatteryData() {}

    virtual bool alive() const = 0;
    virtual double packSocAmpHours() const = 0;
    virtual double packSocPercentage() const = 0;
    virtual double packBalanceSocAmpHours() const = 0;
    virtual double packBalanceSocPercentage() const = 0;
    virtual double chargingCellVoltageError() const = 0;
    virtual double cellTempMargin() const = 0;
    virtual double dischargingCellVoltageError() const = 0;
    virtual double totalPackCapacity() const = 0;
    virtual bool prechargeContactor0DriverStatus() const = 0;
    virtual bool prechargeContactor1DriverStatus() const = 0;
    virtual bool prechargeContactor2DriverStatus() const = 0;
    virtual bool prechargeContactor0DriverError() const = 0;
    virtual bool prechargeContactor1DriverError() const = 0;
    virtual bool prechargeContactor2DriverError() const = 0;
    virtual bool contactorSupplyOk() const = 0;
    virtual QString prechargeState() const = 0;
    virtual bool prechargeTimerElapsed() const = 0;
    virtual double prechargeTimerCount() const = 0;
    virtual double lowestCellVoltage_Voltage() const = 0;
    virtual int lowestCellVoltage_CmuNumber() const = 0;
    virtual int lowestCellVoltage_CellNumber() const = 0;
    virtual double lowestCellTemp_Temperature() const = 0;
    virtual int lowestCellTemp_CmuNumber() const = 0;
    virtual int lowestCellTemp_CellNumber() const = 0;
    virtual double highestCellVoltage_Voltage() const = 0;
    virtual int highestCellVoltage_CmuNumber() const = 0;
    virtual int highestCellVoltage_CellNumber() const = 0;
    virtual double highestCellTemp_Temperature() const = 0;
    virtual int highestCellTemp_CmuNumber() const = 0;
    virtual int highestCellTemp_CellNumber() const = 0;
    virtual double voltage() const = 0;
    virtual double current() const = 0;
    virtual double netPower() const = 0;
    virtual double fan0Speed() const = 0;
    virtual double fan1Speed() const = 0;
    virtual double fanContactorsCurrent() const = 0;
    virtual double cmuCurrent() const = 0;

    virtual void setAlive(bool alive) = 0;
    virtual void setPackSocAmpHours(double packSocAmpHours) = 0;
    virtual void setPackSocPercentage(double packSocPercentage) = 0;
    virtual void setPackBalanceSocAmpHours(double packBalanceSocAmpHours) = 0;
    virtual void setPackBalanceSocPercentage(double packBalanceSocPercentage) = 0;
    virtual void setChargingCellVoltageError(double chargingCellVoltageError) = 0;
    virtual void setCellTempMargin(double cellTempMargin) = 0;
    virtual void setDischargingCellVoltageError(double dischargingCellVoltageError) = 0;
    virtual void setTotalPackCapacity(double totalPackCapacity) = 0;
    virtual void setPrechargeContactor0DriverStatus(bool prechargeContactor0DriverStatus) = 0;
    virtual void setPrechargeContactor1DriverStatus(bool prechargeContactor1DriverStatus) = 0;
    virtual void setPrechargeContactor2DriverStatus(bool prechargeContactor2DriverStatus) = 0;
    virtual void setPrechargeContactor0DriverError(bool prechargeContactor0DriverError) = 0;
    virtual void setPrechargeContactor1DriverError(bool prechargeContactor1DriverError) = 0;
    virtual void setPrechargeContactor2DriverError(bool prechargeContactor2DriverError) = 0;
    virtual void setContactorSupplyOk(bool contactorSupplyOk) = 0;
    virtual void setPrechargeState(QString prechargeState) = 0;
    virtual void setPrechargeTimerElapsed(bool prechargeTimerElapsed) = 0;
    virtual void setPrechargeTimerCount(double prechargeTimerCount) = 0;
    virtual void setLowestCellVoltage_Voltage(double lowestCellVoltage_Voltage) = 0;
    virtual void setLowestCellVoltage_CmuNumber(int lowestCellVoltage_CmuNumber) = 0;
    virtual void setLowestCellVoltage_CellNumber(int lowestCellVoltage_CellNumber) = 0;
    virtual void setLowestCellTemp_Temperature(double lowestCellTemp_Temperature) = 0;
    virtual void setLowestCellTemp_CmuNumber(int lowestCellTemp_CmuNumber) = 0;
    virtual void setLowestCellTemp_CellNumber(int lowestCellTemp_CellNumber) = 0;
    virtual void setHighestCellVoltage_Voltage(double highestCellVoltage_Voltage) = 0;
    virtual void setHighestCellVoltage_CmuNumber(int highestCellVoltage_CmuNumber) = 0;
    virtual void setHighestCellVoltage_CellNumber(int highestCellVoltage_CellNumber) = 0;
    virtual void setHighestCellTemp_Temperature(double highestCellTemp_Temperature) = 0;
    virtual void setHighestCellTemp_CmuNumber(int highestCellTemp_CmuNumber) = 0;
    virtual void setHighestCellTemp_CellNumber(int highestCellTemp_CellNumber) = 0;
    virtual void setVoltage(double voltage) = 0;
    virtual void setCurrent(double current) = 0;
    virtual void setFan0Speed(double fan0Speed) = 0;
    virtual void setFan1Speed(double fan1Speed) = 0;
    virtual void setFanContactorsCurrent(double fanContactorsCurrent) = 0;
    virtual void setCmuCurrent(double cmuCurrent) = 0;

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
    void netPowerReceived(double power);
    void fan0SpeedReceived(double fan0Speed);
    void fan1SpeedReceived(double fan1Speed);
    void fanContactorsCurrentReceived(double fanContactorsCurrent);
    void cmuCurrentReceived(double cmuCurrent);
};
