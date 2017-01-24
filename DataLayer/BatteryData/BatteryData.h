#pragma once

#include "I_BatteryData.h"

class BatteryData : public I_BatteryData
{
public:
    BatteryData();
    virtual ~BatteryData();

    bool alive() const;
    double packSocAmpHours() const;
    double packSocPercentage() const;
    double packBalanceSocAmpHours() const;
    double packBalanceSocPercentage() const;
    double chargingCellVoltageError() const;
    double cellTempMargin() const;
    double dischargingCellVoltageError() const;
    double totalPackCapacity() const;
    bool prechargeContactor0DriverStatus() const;
    bool prechargeContactor1DriverStatus() const;
    bool prechargeContactor2DriverStatus() const;
    bool prechargeContactor0DriverError() const;
    bool prechargeContactor1DriverError() const;
    bool prechargeContactor2DriverError() const;
    bool contactorSupplyOk() const;
    QString prechargeState() const;
    bool prechargeTimerElapsed() const;
    double prechargeTimerCount() const;
    double lowestCellVoltage_Voltage() const;
    int lowestCellVoltage_CmuNumber() const;
    int lowestCellVoltage_CellNumber() const;
    double lowestCellTemp_Temperature() const;
    int lowestCellTemp_CmuNumber() const;
    int lowestCellTemp_CellNumber() const;
    double highestCellVoltage_Voltage() const;
    int highestCellVoltage_CmuNumber() const;
    int highestCellVoltage_CellNumber() const;
    double highestCellTemp_Temperature() const;
    int highestCellTemp_CmuNumber() const;
    int highestCellTemp_CellNumber() const;
    double voltage() const;
    double current() const;
    double netPower() const;
    double fan0Speed() const;
    double fan1Speed() const;
    double fanContactorsCurrent() const;
    double cmuCurrent() const;

    void setAlive(bool alive);
    void setPackSocAmpHours(double packSocAmpHours);
    void setPackSocPercentage(double packSocPercentage);
    void setPackBalanceSocAmpHours(double packBalanceSocAmpHours);
    void setPackBalanceSocPercentage(double packBalanceSocPercentage);
    void setChargingCellVoltageError(double chargingCellVoltageError);
    void setCellTempMargin(double cellTempMargin);
    void setDischargingCellVoltageError(double dischargingCellVoltageError);
    void setTotalPackCapacity(double totalPackCapacity);
    void setPrechargeContactor0DriverStatus(bool prechargeContactor0DriverStatus);
    void setPrechargeContactor1DriverStatus(bool prechargeContactor1DriverStatus);
    void setPrechargeContactor2DriverStatus(bool prechargeContactor2DriverStatus);
    void setPrechargeContactor0DriverError(bool prechargeContactor0DriverError);
    void setPrechargeContactor1DriverError(bool prechargeContactor1DriverError);
    void setPrechargeContactor2DriverError(bool prechargeContactor2DriverError);
    void setContactorSupplyOk(bool contactorSupplyOk);
    void setPrechargeState(QString prechargeState);
    void setPrechargeTimerElapsed(bool prechargeTimerElapsed);
    void setPrechargeTimerCount(double prechargeTimerCount);
    void setLowestCellVoltage_Voltage(double lowestCellVoltage_Voltage);
    void setLowestCellVoltage_CmuNumber(int lowestCellVoltage_CmuNumber);
    void setLowestCellVoltage_CellNumber(int lowestCellVoltage_CellNumber);
    void setLowestCellTemp_Temperature(double lowestCellTemp_Temperature);
    void setLowestCellTemp_CmuNumber(int lowestCellTemp_CmuNumber);
    void setLowestCellTemp_CellNumber(int lowestCellTemp_CellNumber);
    void setHighestCellVoltage_Voltage(double highestCellVoltage_Voltage);
    void setHighestCellVoltage_CmuNumber(int highestCellVoltage_CmuNumber);
    void setHighestCellVoltage_CellNumber(int highestCellVoltage_CellNumber);
    void setHighestCellTemp_Temperature(double highestCellTemp_Temperature);
    void setHighestCellTemp_CmuNumber(int highestCellTemp_CmuNumber);
    void setHighestCellTemp_CellNumber(int highestCellTemp_CellNumber);
    void setVoltage(double voltage);
    void setCurrent(double current);
    void setFan0Speed(double fan0Speed);
    void setFan1Speed(double fan1Speed);
    void setFanContactorsCurrent(double fanContactorsCurrent);
    void setCmuCurrent(double cmuCurrent);

private:
    bool alive_;
    double packSocAmpHours_;
    double packSocPercentage_;
    double packBalanceSocAmpHours_;
    double packBalanceSocPercentage_;
    double chargingCellVoltageError_;
    double cellTempMargin_;
    double dischargingCellVoltageError_;
    double totalPackCapacity_;
    bool prechargeContactor0DriverStatus_;
    bool prechargeContactor1DriverStatus_;
    bool prechargeContactor2DriverStatus_;
    bool prechargeContactor0DriverError_;
    bool prechargeContactor1DriverError_;
    bool prechargeContactor2DriverError_;
    bool contactorSupplyOk_;
    QString prechargeState_;
    bool prechargeTimerElapsed_;
    double prechargeTimerCount_;
    double lowestCellVoltage_Voltage_;
    int lowestCellVoltage_CmuNumber_;
    int lowestCellVoltage_CellNumber_;
    double lowestCellTemp_Temperature_;
    int lowestCellTemp_CmuNumber_;
    int lowestCellTemp_CellNumber_;
    double highestCellVoltage_Voltage_;
    int highestCellVoltage_CmuNumber_;
    int highestCellVoltage_CellNumber_;
    double highestCellTemp_Temperature_;
    int highestCellTemp_CmuNumber_;
    int highestCellTemp_CellNumber_;
    double voltage_;
    double current_;
    double netPower_;
    double fan0Speed_;
    double fan1Speed_;
    double fanContactorsCurrent_;
    double cmuCurrent_;
};

