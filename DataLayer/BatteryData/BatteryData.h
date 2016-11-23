#pragma once

#include "I_BatteryData.h"

class BatteryData : public I_BatteryData
{
public:
    BatteryData();
    virtual ~BatteryData();

    bool battery_Alive() const;
    double battery_PackSocAmpHours() const;
    double battery_PackSocPercentage() const;
    double battery_PackBalanceSocAmpHours() const;
    double battery_PackBalanceSocPercentage() const;
    double battery_ChargingCellVoltageError() const;
    double battery_CellTempMargin() const;
    double battery_DischargingCellVoltageError() const;
    double battery_TotalPackCapacity() const;
    bool battery_PrechargeContactor0DriverStatus() const;
    bool battery_PrechargeContactor1DriverStatus() const;
    bool battery_PrechargeContactor2DriverStatus() const;
    bool battery_PrechargeContactor0DriverError() const;
    bool battery_PrechargeContactor1DriverError() const;
    bool battery_PrechargeContactor2DriverError() const;
    bool battery_ContactorSupplyOk() const;
    QString battery_PrechargeState() const;
    bool battery_PrechargeTimerElapsed() const;
    double battery_PrechargeTimerCount() const;
    double battery_LowestCellVoltage_Voltage() const;
    int battery_LowestCellVoltage_CmuNumber() const;
    int battery_LowestCellVoltage_CellNumber() const;
    double battery_LowestCellTemp_Temperature() const;
    int battery_LowestCellTemp_CmuNumber() const;
    int battery_LowestCellTemp_CellNumber() const;
    double battery_HighestCellVoltage_Voltage() const;
    int battery_HighestCellVoltage_CmuNumber() const;
    int battery_HighestCellVoltage_CellNumber() const;
    double battery_HighestCellTemp_Temperature() const;
    int battery_HighestCellTemp_CmuNumber() const;
    int battery_HighestCellTemp_CellNumber() const;
    double battery_Voltage() const;
    double battery_Current() const;
    double battery_Fan0Speed() const;
    double battery_Fan1Speed() const;
    double battery_FanContactorsCurrent() const;
    double battery_CmuCurrent() const;

    void setBattery_Alive(bool battery_Alive);
    void setBattery_PackSocAmpHours(double battery_PackSocAmpHours);
    void setBattery_PackSocPercentage(double battery_PackSocPercentage);
    void setBattery_PackBalanceSocAmpHours(double battery_PackBalanceSocAmpHours);
    void setBattery_PackBalanceSocPercentage(double battery_PackBalanceSocPercentage);
    void setBattery_ChargingCellVoltageError(double battery_ChargingCellVoltageError);
    void setBattery_CellTempMargin(double battery_CellTempMargin);
    void setBattery_DischargingCellVoltageError(double battery_DischargingCellVoltageError);
    void setBattery_TotalPackCapacity(double battery_TotalPackCapacity);
    void setBattery_PrechargeContactor0DriverStatus(bool battery_PrechargeContactor0DriverStatus);
    void setBattery_PrechargeContactor1DriverStatus(bool battery_PrechargeContactor1DriverStatus);
    void setBattery_PrechargeContactor2DriverStatus(bool battery_PrechargeContactor2DriverStatus);
    void setBattery_PrechargeContactor0DriverError(bool battery_PrechargeContactor0DriverError);
    void setBattery_PrechargeContactor1DriverError(bool battery_PrechargeContactor1DriverError);
    void setBattery_PrechargeContactor2DriverError(bool battery_PrechargeContactor2DriverError);
    void setBattery_ContactorSupplyOk(bool battery_ContactorSupplyOk);
    void setBattery_PrechargeState(QString battery_PrechargeState);
    void setBattery_PrechargeTimerElapsed(bool battery_PrechargeTimerElapsed);
    void setBattery_PrechargeTimerCount(double battery_PrechargeTimerCount);
    void setBattery_LowestCellVoltage_Voltage(double battery_LowestCellVoltage_Voltage);
    void setBattery_LowestCellVoltage_CmuNumber(int battery_LowestCellVoltage_CmuNumber);
    void setBattery_LowestCellVoltage_CellNumber(int battery_LowestCellVoltage_CellNumber);
    void setBattery_LowestCellTemp_Temperature(double battery_LowestCellTemp_Temperature);
    void setBattery_LowestCellTemp_CmuNumber(int battery_LowestCellTemp_CmuNumber);
    void setBattery_LowestCellTemp_CellNumber(int battery_LowestCellTemp_CellNumber);
    void setBattery_HighestCellVoltage_Voltage(double battery_HighestCellVoltage_Voltage);
    void setBattery_HighestCellVoltage_CmuNumber(int battery_HighestCellVoltage_CmuNumber);
    void setBattery_HighestCellVoltage_CellNumber(int battery_HighestCellVoltage_CellNumber);
    void setBattery_HighestCellTemp_Temperature(double battery_HighestCellTemp_Temperature);
    void setBattery_HighestCellTemp_CmuNumber(int battery_HighestCellTemp_CmuNumber);
    void setBattery_HighestCellTemp_CellNumber(int battery_HighestCellTemp_CellNumber);
    void setBattery_Voltage(double battery_Voltage);
    void setBattery_Current(double battery_Current);
    void setBattery_Fan0Speed(double battery_Fan0Speed);
    void setBattery_Fan1Speed(double battery_Fan1Speed);
    void setBattery_FanContactorsCurrent(double battery_FanContactorsCurrent);
    void setBattery_CmuCurrent(double battery_CmuCurrent);

private:
    bool battery_Alive_;
    double battery_PackSocAmpHours_;
    double battery_PackSocPercentage_;
    double battery_PackBalanceSocAmpHours_;
    double battery_PackBalanceSocPercentage_;
    double battery_ChargingCellVoltageError_;
    double battery_CellTempMargin_;
    double battery_DischargingCellVoltageError_;
    double battery_TotalPackCapacity_;
    bool battery_PrechargeContactor0DriverStatus_;
    bool battery_PrechargeContactor1DriverStatus_;
    bool battery_PrechargeContactor2DriverStatus_;
    bool battery_PrechargeContactor0DriverError_;
    bool battery_PrechargeContactor1DriverError_;
    bool battery_PrechargeContactor2DriverError_;
    bool battery_ContactorSupplyOk_;
    QString battery_PrechargeState_;
    bool battery_PrechargeTimerElapsed_;
    double battery_PrechargeTimerCount_;
    double battery_LowestCellVoltage_Voltage_;
    int battery_LowestCellVoltage_CmuNumber_;
    int battery_LowestCellVoltage_CellNumber_;
    double battery_LowestCellTemp_Temperature_;
    int battery_LowestCellTemp_CmuNumber_;
    int battery_LowestCellTemp_CellNumber_;
    double battery_HighestCellVoltage_Voltage_;
    int battery_HighestCellVoltage_CmuNumber_;
    int battery_HighestCellVoltage_CellNumber_;
    double battery_HighestCellTemp_Temperature_;
    int battery_HighestCellTemp_CmuNumber_;
    int battery_HighestCellTemp_CellNumber_;
    double battery_Voltage_;
    double battery_Current_;
    double battery_Fan0Speed_;
    double battery_Fan1Speed_;
    double battery_FanContactorsCurrent_;
    double battery_CmuCurrent_;
};

