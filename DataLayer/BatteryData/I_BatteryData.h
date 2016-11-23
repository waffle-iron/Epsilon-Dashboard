#pragma once

#include <QObject>
#include <QString>

class I_BatteryData : public QObject
{
    Q_OBJECT

public:
    virtual ~I_BatteryData() {}

    virtual bool battery_Alive() const = 0;
    virtual double battery_PackSocAmpHours() const = 0;
    virtual double battery_PackSocPercentage() const = 0;
    virtual double battery_PackBalanceSocAmpHours() const = 0;
    virtual double battery_PackBalanceSocPercentage() const = 0;
    virtual double battery_ChargingCellVoltageError() const = 0;
    virtual double battery_CellTempMargin() const = 0;
    virtual double battery_DischargingCellVoltageError() const = 0;
    virtual double battery_TotalPackCapacity() const = 0;
    virtual bool battery_PrechargeContactor0DriverStatus() const = 0;
    virtual bool battery_PrechargeContactor1DriverStatus() const = 0;
    virtual bool battery_PrechargeContactor2DriverStatus() const = 0;
    virtual bool battery_PrechargeContactor0DriverError() const = 0;
    virtual bool battery_PrechargeContactor1DriverError() const = 0;
    virtual bool battery_PrechargeContactor2DriverError() const = 0;
    virtual bool battery_ContactorSupplyOk() const = 0;
    virtual QString battery_PrechargeState() const = 0;
    virtual bool battery_PrechargeTimerElapsed() const = 0;
    virtual double battery_PrechargeTimerCount() const = 0;
    virtual double battery_LowestCellVoltage_Voltage() const = 0;
    virtual int battery_LowestCellVoltage_CmuNumber() const = 0;
    virtual int battery_LowestCellVoltage_CellNumber() const = 0;
    virtual double battery_LowestCellTemp_Temperature() const = 0;
    virtual int battery_LowestCellTemp_CmuNumber() const = 0;
    virtual int battery_LowestCellTemp_CellNumber() const = 0;
    virtual double battery_HighestCellVoltage_Voltage() const = 0;
    virtual int battery_HighestCellVoltage_CmuNumber() const = 0;
    virtual int battery_HighestCellVoltage_CellNumber() const = 0;
    virtual double battery_HighestCellTemp_Temperature() const = 0;
    virtual int battery_HighestCellTemp_CmuNumber() const = 0;
    virtual int battery_HighestCellTemp_CellNumber() const = 0;
    virtual double battery_Voltage() const = 0;
    virtual double battery_Current() const = 0;
    virtual double battery_Fan0Speed() const = 0;
    virtual double battery_Fan1Speed() const = 0;
    virtual double battery_FanContactorsCurrent() const = 0;
    virtual double battery_CmuCurrent() const = 0;

    virtual void setBattery_Alive(bool battery_Alive) = 0;
    virtual void setBattery_PackSocAmpHours(double battery_PackSocAmpHours) = 0;
    virtual void setBattery_PackSocPercentage(double battery_PackSocPercentage) = 0;
    virtual void setBattery_PackBalanceSocAmpHours(double battery_PackBalanceSocAmpHours) = 0;
    virtual void setBattery_PackBalanceSocPercentage(double battery_PackBalanceSocPercentage) = 0;
    virtual void setBattery_ChargingCellVoltageError(double battery_ChargingCellVoltageError) = 0;
    virtual void setBattery_CellTempMargin(double battery_CellTempMargin) = 0;
    virtual void setBattery_DischargingCellVoltageError(double battery_DischargingCellVoltageError) = 0;
    virtual void setBattery_TotalPackCapacity(double battery_TotalPackCapacity) = 0;
    virtual void setBattery_PrechargeContactor0DriverStatus(bool battery_PrechargeContactor0DriverStatus) = 0;
    virtual void setBattery_PrechargeContactor1DriverStatus(bool battery_PrechargeContactor1DriverStatus) = 0;
    virtual void setBattery_PrechargeContactor2DriverStatus(bool battery_PrechargeContactor2DriverStatus) = 0;
    virtual void setBattery_PrechargeContactor0DriverError(bool battery_PrechargeContactor0DriverError) = 0;
    virtual void setBattery_PrechargeContactor1DriverError(bool battery_PrechargeContactor1DriverError) = 0;
    virtual void setBattery_PrechargeContactor2DriverError(bool battery_PrechargeContactor2DriverError) = 0;
    virtual void setBattery_ContactorSupplyOk(bool battery_ContactorSupplyOk) = 0;
    virtual void setBattery_PrechargeState(QString battery_PrechargeState) = 0;
    virtual void setBattery_PrechargeTimerElapsed(bool battery_PrechargeTimerElapsed) = 0;
    virtual void setBattery_PrechargeTimerCount(double battery_PrechargeTimerCount) = 0;
    virtual void setBattery_LowestCellVoltage_Voltage(double battery_LowestCellVoltage_Voltage) = 0;
    virtual void setBattery_LowestCellVoltage_CmuNumber(int battery_LowestCellVoltage_CmuNumber) = 0;
    virtual void setBattery_LowestCellVoltage_CellNumber(int battery_LowestCellVoltage_CellNumber) = 0;
    virtual void setBattery_LowestCellTemp_Temperature(double battery_LowestCellTemp_Temperature) = 0;
    virtual void setBattery_LowestCellTemp_CmuNumber(int battery_LowestCellTemp_CmuNumber) = 0;
    virtual void setBattery_LowestCellTemp_CellNumber(int battery_LowestCellTemp_CellNumber) = 0;
    virtual void setBattery_HighestCellVoltage_Voltage(double battery_HighestCellVoltage_Voltage) = 0;
    virtual void setBattery_HighestCellVoltage_CmuNumber(int battery_HighestCellVoltage_CmuNumber) = 0;
    virtual void setBattery_HighestCellVoltage_CellNumber(int battery_HighestCellVoltage_CellNumber) = 0;
    virtual void setBattery_HighestCellTemp_Temperature(double battery_HighestCellTemp_Temperature) = 0;
    virtual void setBattery_HighestCellTemp_CmuNumber(int battery_HighestCellTemp_CmuNumber) = 0;
    virtual void setBattery_HighestCellTemp_CellNumber(int battery_HighestCellTemp_CellNumber) = 0;
    virtual void setBattery_Voltage(double battery_Voltage) = 0;
    virtual void setBattery_Current(double battery_Current) = 0;
    virtual void setBattery_Fan0Speed(double battery_Fan0Speed) = 0;
    virtual void setBattery_Fan1Speed(double battery_Fan1Speed) = 0;
    virtual void setBattery_FanContactorsCurrent(double battery_FanContactorsCurrent) = 0;
    virtual void setBattery_CmuCurrent(double battery_CmuCurrent) = 0;

signals:
    void battery_AliveReceived(bool battery_Alive);
    void battery_PackSocAmpHoursReceived(double battery_PackSocAmpHours);
    void battery_PackSocPercentageReceived(double battery_PackSocPercentage);
    void battery_PackBalanceSocAmpHoursReceived(double battery_PackBalanceSocAmpHours);
    void battery_PackBalanceSocPercentageReceived(double battery_PackBalanceSocPercentage);
    void battery_ChargingCellVoltageErrorReceived(double battery_ChargingCellVoltageError);
    void battery_CellTempMarginReceived(double battery_CellTempMargin);
    void battery_DischargingCellVoltageErrorReceived(double battery_DischargingCellVoltageError);
    void battery_TotalPackCapacityReceived(double battery_TotalPackCapacity);
    void battery_PrechargeContactor0DriverStatusReceived(bool battery_PrechargeContactor0DriverStatus);
    void battery_PrechargeContactor1DriverStatusReceived(bool battery_PrechargeContactor1DriverStatus);
    void battery_PrechargeContactor2DriverStatusReceived(bool battery_PrechargeContactor2DriverStatus);
    void battery_PrechargeContactor0DriverErrorReceived(bool battery_PrechargeContactor0DriverError);
    void battery_PrechargeContactor1DriverErrorReceived(bool battery_PrechargeContactor1DriverError);
    void battery_PrechargeContactor2DriverErrorReceived(bool battery_PrechargeContactor2DriverError);
    void battery_ContactorSupplyOkReceived(bool battery_ContactorSupplyOk);
    void battery_PrechargeStateReceived(QString battery_PrechargeState);
    void battery_PrechargeTimerElapsedReceived(bool battery_PrechargeTimerElapsed);
    void battery_PrechargeTimerCountReceived(double battery_PrechargeTimerCount);
    void battery_LowestCellVoltage_VoltageReceived(double battery_LowestCellVoltage_Voltage);
    void battery_LowestCellVoltage_CmuNumberReceived(int battery_LowestCellVoltage_CmuNumber);
    void battery_LowestCellVoltage_CellNumberReceived(int battery_LowestCellVoltage_CellNumber);
    void battery_LowestCellTemp_TemperatureReceived(double battery_LowestCellTemp_Temperature);
    void battery_LowestCellTemp_CmuNumberReceived(int battery_LowestCellTemp_CmuNumber);
    void battery_LowestCellTemp_CellNumberReceived(int battery_LowestCellTemp_CellNumber);
    void battery_HighestCellVoltage_VoltageReceived(double battery_HighestCellVoltage_Voltage);
    void battery_HighestCellVoltage_CmuNumberReceived(int battery_HighestCellVoltage_CmuNumber);
    void battery_HighestCellVoltage_CellNumberReceived(int battery_HighestCellVoltage_CellNumber);
    void battery_HighestCellTemp_TemperatureReceived(double battery_HighestCellTemp_Temperature);
    void battery_HighestCellTemp_CmuNumberReceived(int battery_HighestCellTemp_CmuNumber);
    void battery_HighestCellTemp_CellNumberReceived(int battery_HighestCellTemp_CellNumber);
    void battery_VoltageReceived(double battery_Voltage);
    void battery_CurrentReceived(double battery_Current);
    void battery_Fan0SpeedReceived(double battery_Fan0Speed);
    void battery_Fan1SpeedReceived(double battery_Fan1Speed);
    void battery_FanContactorsCurrentReceived(double battery_FanContactorsCurrent);
    void battery_CmuCurrentReceived(double battery_CmuCurrent);
};
