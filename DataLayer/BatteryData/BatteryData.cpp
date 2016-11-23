#include "BatteryData.h"
#include <QDebug>

BatteryData::BatteryData()
{
}

BatteryData::~BatteryData()
{
}

bool BatteryData::battery_Alive() const
{
    return battery_Alive_;
}
double BatteryData::battery_PackSocAmpHours() const
{
    return battery_PackSocAmpHours_;
}
double BatteryData::battery_PackSocPercentage() const
{
    return battery_PackSocPercentage_;
}
double BatteryData::battery_PackBalanceSocAmpHours() const
{
    return battery_PackBalanceSocAmpHours_;
}
double BatteryData::battery_PackBalanceSocPercentage() const
{
    return battery_PackBalanceSocPercentage_;
}
double BatteryData::battery_ChargingCellVoltageError() const
{
    return battery_ChargingCellVoltageError_;
}
double BatteryData::battery_CellTempMargin() const
{
    return battery_CellTempMargin_;
}
double BatteryData::battery_DischargingCellVoltageError() const
{
    return battery_DischargingCellVoltageError_;
}
double BatteryData::battery_TotalPackCapacity() const
{
    return battery_TotalPackCapacity_;
}
bool BatteryData::battery_PrechargeContactor0DriverStatus() const
{
    return battery_PrechargeContactor0DriverStatus_;
}
bool BatteryData::battery_PrechargeContactor1DriverStatus() const
{
    return battery_PrechargeContactor1DriverStatus_;
}
bool BatteryData::battery_PrechargeContactor2DriverStatus() const
{
    return battery_PrechargeContactor2DriverStatus_;
}
bool BatteryData::battery_PrechargeContactor0DriverError() const
{
    return battery_PrechargeContactor0DriverError_;
}
bool BatteryData::battery_PrechargeContactor1DriverError() const
{
    return battery_PrechargeContactor1DriverError_;
}
bool BatteryData::battery_PrechargeContactor2DriverError() const
{
    return battery_PrechargeContactor2DriverError_;
}
bool BatteryData::battery_ContactorSupplyOk() const
{
    return battery_ContactorSupplyOk_;
}
QString BatteryData::battery_PrechargeState() const
{
    return battery_PrechargeState_;
}
bool BatteryData::battery_PrechargeTimerElapsed() const
{
    return battery_PrechargeTimerElapsed_;
}
double BatteryData::battery_PrechargeTimerCount() const
{
    return battery_PrechargeTimerCount_;
}
double BatteryData::battery_LowestCellVoltage_Voltage() const
{
    return battery_LowestCellVoltage_Voltage_;
}
int BatteryData::battery_LowestCellVoltage_CmuNumber() const
{
    return battery_LowestCellVoltage_CmuNumber_;
}
int BatteryData::battery_LowestCellVoltage_CellNumber() const
{
    return battery_LowestCellVoltage_CellNumber_;
}
double BatteryData::battery_LowestCellTemp_Temperature() const
{
    return battery_LowestCellTemp_Temperature_;
}
int BatteryData::battery_LowestCellTemp_CmuNumber() const
{
    return battery_LowestCellTemp_CmuNumber_;
}
int BatteryData::battery_LowestCellTemp_CellNumber() const
{
    return battery_LowestCellTemp_CellNumber_;
}
double BatteryData::battery_HighestCellVoltage_Voltage() const
{
    return battery_HighestCellVoltage_Voltage_;
}
int BatteryData::battery_HighestCellVoltage_CmuNumber() const
{
    return battery_HighestCellVoltage_CmuNumber_;
}
int BatteryData::battery_HighestCellVoltage_CellNumber() const
{
    return battery_HighestCellVoltage_CellNumber_;
}
double BatteryData::battery_HighestCellTemp_Temperature() const
{
    return battery_HighestCellTemp_Temperature_;
}
int BatteryData::battery_HighestCellTemp_CmuNumber() const
{
    return battery_HighestCellTemp_CmuNumber_;
}
int BatteryData::battery_HighestCellTemp_CellNumber() const
{
    return battery_HighestCellTemp_CellNumber_;
}
double BatteryData::battery_Voltage() const
{
    return battery_Voltage_;
}
double BatteryData::battery_Current() const
{
    return battery_Current_;
}
double BatteryData::battery_Fan0Speed() const
{
    return battery_Fan0Speed_;
}
double BatteryData::battery_Fan1Speed() const
{
    return battery_Fan1Speed_;
}
double BatteryData::battery_FanContactorsCurrent() const
{
    return battery_FanContactorsCurrent_;
}
double BatteryData::battery_CmuCurrent() const
{
    return battery_CmuCurrent_;
}

void BatteryData::setBattery_Alive(bool battery_Alive)
{
    battery_Alive_ = battery_Alive;
    emit battery_AliveReceived(battery_Alive_);
}
void BatteryData::setBattery_PackSocAmpHours(double battery_PackSocAmpHours)
{
    battery_PackSocAmpHours_ = battery_PackSocAmpHours;
    emit battery_PackSocAmpHoursReceived(battery_PackSocAmpHours_);
}
void BatteryData::setBattery_PackSocPercentage(double battery_PackSocPercentage)
{
    battery_PackSocPercentage_ = battery_PackSocPercentage;
    emit battery_PackSocPercentageReceived(battery_PackSocPercentage_);
}
void BatteryData::setBattery_PackBalanceSocAmpHours(double battery_PackBalanceSocAmpHours)
{
    battery_PackBalanceSocAmpHours_ = battery_PackBalanceSocAmpHours;
    emit battery_PackBalanceSocAmpHoursReceived(battery_PackBalanceSocAmpHours_);
}
void BatteryData::setBattery_PackBalanceSocPercentage(double battery_PackBalanceSocPercentage)
{
    battery_PackBalanceSocPercentage_ = battery_PackBalanceSocPercentage;
    emit battery_PackBalanceSocPercentageReceived(battery_PackBalanceSocPercentage_);
}
void BatteryData::setBattery_ChargingCellVoltageError(double battery_ChargingCellVoltageError)
{
    battery_ChargingCellVoltageError_ = battery_ChargingCellVoltageError;
    emit battery_ChargingCellVoltageErrorReceived(battery_ChargingCellVoltageError_);
}
void BatteryData::setBattery_CellTempMargin(double battery_CellTempMargin)
{
    battery_CellTempMargin_ = battery_CellTempMargin;
    emit battery_CellTempMarginReceived(battery_CellTempMargin_);
}
void BatteryData::setBattery_DischargingCellVoltageError(double battery_DischargingCellVoltageError)
{
    battery_DischargingCellVoltageError_ = battery_DischargingCellVoltageError;
    emit battery_DischargingCellVoltageErrorReceived(battery_DischargingCellVoltageError_);
}
void BatteryData::setBattery_TotalPackCapacity(double battery_TotalPackCapacity)
{
    battery_TotalPackCapacity_ = battery_TotalPackCapacity;
    emit battery_TotalPackCapacityReceived(battery_TotalPackCapacity_);
}
void BatteryData::setBattery_PrechargeContactor0DriverStatus(bool battery_PrechargeContactor0DriverStatus)
{
    battery_PrechargeContactor0DriverStatus_ = battery_PrechargeContactor0DriverStatus;
    emit battery_PrechargeContactor0DriverStatusReceived(battery_PrechargeContactor0DriverStatus_);
}
void BatteryData::setBattery_PrechargeContactor1DriverStatus(bool battery_PrechargeContactor1DriverStatus)
{
    battery_PrechargeContactor1DriverStatus_ = battery_PrechargeContactor1DriverStatus;
    emit battery_PrechargeContactor1DriverStatusReceived(battery_PrechargeContactor1DriverStatus_);
}
void BatteryData::setBattery_PrechargeContactor2DriverStatus(bool battery_PrechargeContactor2DriverStatus)
{
    battery_PrechargeContactor2DriverStatus_ = battery_PrechargeContactor2DriverStatus;
    emit battery_PrechargeContactor2DriverStatusReceived(battery_PrechargeContactor2DriverStatus_);
}
void BatteryData::setBattery_PrechargeContactor0DriverError(bool battery_PrechargeContactor0DriverError)
{
    battery_PrechargeContactor0DriverError_ = battery_PrechargeContactor0DriverError;
    emit battery_PrechargeContactor0DriverErrorReceived(battery_PrechargeContactor0DriverError_);
}
void BatteryData::setBattery_PrechargeContactor1DriverError(bool battery_PrechargeContactor1DriverError)
{
    battery_PrechargeContactor1DriverError_ = battery_PrechargeContactor1DriverError;
    emit battery_PrechargeContactor1DriverErrorReceived(battery_PrechargeContactor1DriverError_);
}
void BatteryData::setBattery_PrechargeContactor2DriverError(bool battery_PrechargeContactor2DriverError)
{
    battery_PrechargeContactor2DriverError_ = battery_PrechargeContactor2DriverError;
    emit battery_PrechargeContactor2DriverErrorReceived(battery_PrechargeContactor2DriverError_);
}
void BatteryData::setBattery_ContactorSupplyOk(bool battery_ContactorSupplyOk)
{
    battery_ContactorSupplyOk_ = battery_ContactorSupplyOk;
    emit battery_ContactorSupplyOkReceived(battery_ContactorSupplyOk_);
}
void BatteryData::setBattery_PrechargeState(QString battery_PrechargeState)
{
    battery_PrechargeState_ = battery_PrechargeState;
    emit battery_PrechargeStateReceived(battery_PrechargeState_);
}
void BatteryData::setBattery_PrechargeTimerElapsed(bool battery_PrechargeTimerElapsed)
{
    battery_PrechargeTimerElapsed_ = battery_PrechargeTimerElapsed;
    emit battery_PrechargeTimerElapsedReceived(battery_PrechargeTimerElapsed_);
}
void BatteryData::setBattery_PrechargeTimerCount(double battery_PrechargeTimerCount)
{
    battery_PrechargeTimerCount_ = battery_PrechargeTimerCount;
    emit battery_PrechargeTimerCountReceived(battery_PrechargeTimerCount_);
}
void BatteryData::setBattery_LowestCellVoltage_Voltage(double battery_LowestCellVoltage_Voltage)
{
    battery_LowestCellVoltage_Voltage_ = battery_LowestCellVoltage_Voltage;
    emit battery_LowestCellVoltage_VoltageReceived(battery_LowestCellVoltage_Voltage_);
}
void BatteryData::setBattery_LowestCellVoltage_CmuNumber(int battery_LowestCellVoltage_CmuNumber)
{
    battery_LowestCellVoltage_CmuNumber_ = battery_LowestCellVoltage_CmuNumber;
    emit battery_LowestCellVoltage_CmuNumberReceived(battery_LowestCellVoltage_CmuNumber_);
}
void BatteryData::setBattery_LowestCellVoltage_CellNumber(int battery_LowestCellVoltage_CellNumber)
{
    battery_LowestCellVoltage_CellNumber_ = battery_LowestCellVoltage_CellNumber;
    emit battery_LowestCellVoltage_CellNumberReceived(battery_LowestCellVoltage_CellNumber_);
}
void BatteryData::setBattery_LowestCellTemp_Temperature(double battery_LowestCellTemp_Temperature)
{
    battery_LowestCellTemp_Temperature_ = battery_LowestCellTemp_Temperature;
    emit battery_LowestCellTemp_TemperatureReceived(battery_LowestCellTemp_Temperature_);
}
void BatteryData::setBattery_LowestCellTemp_CmuNumber(int battery_LowestCellTemp_CmuNumber)
{
    battery_LowestCellTemp_CmuNumber_ = battery_LowestCellTemp_CmuNumber;
    emit battery_LowestCellTemp_CmuNumberReceived(battery_LowestCellTemp_CmuNumber_);
}
void BatteryData::setBattery_LowestCellTemp_CellNumber(int battery_LowestCellTemp_CellNumber)
{
    battery_LowestCellTemp_CellNumber_ = battery_LowestCellTemp_CellNumber;
    emit battery_LowestCellTemp_CellNumberReceived(battery_LowestCellTemp_CellNumber_);
}
void BatteryData::setBattery_HighestCellVoltage_Voltage(double battery_HighestCellVoltage_Voltage)
{
    battery_HighestCellVoltage_Voltage_ = battery_HighestCellVoltage_Voltage;
    emit battery_HighestCellVoltage_VoltageReceived(battery_HighestCellVoltage_Voltage_);
}
void BatteryData::setBattery_HighestCellVoltage_CmuNumber(int battery_HighestCellVoltage_CmuNumber)
{
    battery_HighestCellVoltage_CmuNumber_ = battery_HighestCellVoltage_CmuNumber;
    emit battery_HighestCellVoltage_CmuNumberReceived(battery_HighestCellVoltage_CmuNumber_);
}
void BatteryData::setBattery_HighestCellVoltage_CellNumber(int battery_HighestCellVoltage_CellNumber)
{
    battery_HighestCellVoltage_CellNumber_ = battery_HighestCellVoltage_CellNumber;
    emit battery_HighestCellVoltage_CellNumberReceived(battery_HighestCellVoltage_CellNumber_);
}
void BatteryData::setBattery_HighestCellTemp_Temperature(double battery_HighestCellTemp_Temperature)
{
    battery_HighestCellTemp_Temperature_ = battery_HighestCellTemp_Temperature;
    emit battery_HighestCellTemp_TemperatureReceived(battery_HighestCellTemp_Temperature_);
}
void BatteryData::setBattery_HighestCellTemp_CmuNumber(int battery_HighestCellTemp_CmuNumber)
{
    battery_HighestCellTemp_CmuNumber_ = battery_HighestCellTemp_CmuNumber;
    emit battery_HighestCellTemp_CmuNumberReceived(battery_HighestCellTemp_CmuNumber_);
}
void BatteryData::setBattery_HighestCellTemp_CellNumber(int battery_HighestCellTemp_CellNumber)
{
    battery_HighestCellTemp_CellNumber_ = battery_HighestCellTemp_CellNumber;
    emit battery_HighestCellTemp_CellNumberReceived(battery_HighestCellTemp_CellNumber_);
}
void BatteryData::setBattery_Voltage(double battery_Voltage)
{
    battery_Voltage_ = battery_Voltage;
    emit battery_VoltageReceived(battery_Voltage_);
}
void BatteryData::setBattery_Current(double battery_Current)
{
    battery_Current_ = battery_Current;
    emit battery_CurrentReceived(battery_Current_);
}
void BatteryData::setBattery_Fan0Speed(double battery_Fan0Speed)
{
    battery_Fan0Speed_ = battery_Fan0Speed;
    emit battery_Fan0SpeedReceived(battery_Fan0Speed_);
}
void BatteryData::setBattery_Fan1Speed(double battery_Fan1Speed)
{
    battery_Fan1Speed_ = battery_Fan1Speed;
    emit battery_Fan1SpeedReceived(battery_Fan1Speed_);
}
void BatteryData::setBattery_FanContactorsCurrent(double battery_FanContactorsCurrent)
{
    battery_FanContactorsCurrent_ = battery_FanContactorsCurrent;
    emit battery_FanContactorsCurrentReceived(battery_FanContactorsCurrent_);
}
void BatteryData::setBattery_CmuCurrent(double battery_CmuCurrent)
{
    battery_CmuCurrent_ = battery_CmuCurrent;
    emit battery_CmuCurrentReceived(battery_CmuCurrent_);
}

void KeyMotorData::setKeyMotorZero_Alive(bool KeyMotorZero_Alive)
{
    KeyMotorZero_Alive_   = KeyMotorZero_Alive;
    emit keyMotorZero_AliveReceived(keyMotorZero_Alive_);
}
void KeyMotorData::setKeyMotorZero_SetCurrent(double KeyMotorZero_SetCurrent)
{
    KeyMotorZero_SetCurrent_   = KeyMotorZero_SetCurrent;
    emit keyMotorZero_SetCurrentReceived(keyMotorZero_SetCurrent_);
}
void KeyMotorData::setKeyMotorZero_SetVelocity(double KeyMotorZero_SetVelocity)
{
    KeyMotorZero_SetVelocity_   = KeyMotorZero_SetVelocity;
    emit keyMotorZero_SetVelocityReceived(keyMotorZero_SetVelocity_);
}
void KeyMotorData::setKeyMotorZero_BusCurrent(double KeyMotorZero_BusCurrent)
{
    KeyMotorZero_BusCurrent_   = KeyMotorZero_BusCurrent;
    emit keyMotorZero_BusCurrentReceived(keyMotorZero_BusCurrent_);
}
void KeyMotorData::setKeyMotorZero_BusVelocity(double KeyMotorZero_BusVelocity)
{
    KeyMotorZero_BusVelocity_   = KeyMotorZero_BusVelocity;
    emit keyMotorZero_BusVelocityReceived(keyMotorZero_BusVelocity_);
}
void KeyMotorData::setKeyMotorZero_VehicleVelocity(double KeyMotorZero_VehicleVelocity)
{
    KeyMotorZero_VehicleVelocity_   = KeyMotorZero_VehicleVelocity;
    emit keyMotorZero_VehicleVelocityReceived(keyMotorZero_VehicleVelocity_);
}

void KeyMotorData::setKeyMotorOne_Alive(bool KeyMotorOne_Alive)
{
    KeyMotorOne_Alive_   = KeyMotorOne_Alive;
    emit keyMotorOne_AliveReceived(keyMotorOne_Alive_);
}
void KeyMotorData::setKeyMotorOne_SetCurrent(double KeyMotorOne_SetCurrent)
{
    KeyMotorOne_SetCurrent_   = KeyMotorOne_SetCurrent;
    emit keyMotorOne_SetCurrentReceived(keyMotorOne_SetCurrent_);
}
void KeyMotorData::setKeyMotorOne_SetVelocity(double KeyMotorOne_SetVelocity)
{
    KeyMotorOne_SetVelocity_   = KeyMotorOne_SetVelocity;
    emit keyMotorOne_SetVelocityReceived(keyMotorOne_SetVelocity_);
}
void KeyMotorData::setKeyMotorOne_BusCurrent(double KeyMotorOne_BusCurrent)
{
    KeyMotorOne_BusCurrent_   = KeyMotorOne_BusCurrent;
    emit keyMotorOne_BusCurrentReceived(keyMotorOne_BusCurrent_);
}
void KeyMotorData::setKeyMotorOne_BusVelocity(double KeyMotorOne_BusVelocity)
{
    KeyMotorOne_BusVelocity_   = KeyMotorOne_BusVelocity;
    emit keyMotorOne_BusVelocityReceived(keyMotorOne_BusVelocity_);
}
void KeyMotorData::setKeyMotorOne_VehicleVelocity(double KeyMotorOne_VehicleVelocity)
{
    KeyMotorOne_VehicleVelocity_   = KeyMotorOne_VehicleVelocity;
    emit keyMotorOne_VehicleVelocityReceived(keyMotorOne_VehicleVelocity_);
}
