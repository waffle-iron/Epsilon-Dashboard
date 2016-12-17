#include "BatteryData.h"
#include <QDebug>

BatteryData::BatteryData()
{
}

BatteryData::~BatteryData()
{
}

bool BatteryData::alive() const
{
    return alive_;
}
double BatteryData::packSocAmpHours() const
{
    return packSocAmpHours_;
}
double BatteryData::packSocPercentage() const
{
    return packSocPercentage_;
}
double BatteryData::packBalanceSocAmpHours() const
{
    return packBalanceSocAmpHours_;
}
double BatteryData::packBalanceSocPercentage() const
{
    return packBalanceSocPercentage_;
}
double BatteryData::chargingCellVoltageError() const
{
    return chargingCellVoltageError_;
}
double BatteryData::cellTempMargin() const
{
    return cellTempMargin_;
}
double BatteryData::dischargingCellVoltageError() const
{
    return dischargingCellVoltageError_;
}
double BatteryData::totalPackCapacity() const
{
    return totalPackCapacity_;
}
bool BatteryData::prechargeContactor0DriverStatus() const
{
    return prechargeContactor0DriverStatus_;
}
bool BatteryData::prechargeContactor1DriverStatus() const
{
    return prechargeContactor1DriverStatus_;
}
bool BatteryData::prechargeContactor2DriverStatus() const
{
    return prechargeContactor2DriverStatus_;
}
bool BatteryData::prechargeContactor0DriverError() const
{
    return prechargeContactor0DriverError_;
}
bool BatteryData::prechargeContactor1DriverError() const
{
    return prechargeContactor1DriverError_;
}
bool BatteryData::prechargeContactor2DriverError() const
{
    return prechargeContactor2DriverError_;
}
bool BatteryData::contactorSupplyOk() const
{
    return contactorSupplyOk_;
}
QString BatteryData::prechargeState() const
{
    return prechargeState_;
}
bool BatteryData::prechargeTimerElapsed() const
{
    return prechargeTimerElapsed_;
}
double BatteryData::prechargeTimerCount() const
{
    return prechargeTimerCount_;
}
double BatteryData::lowestCellVoltage_Voltage() const
{
    return lowestCellVoltage_Voltage_;
}
int BatteryData::lowestCellVoltage_CmuNumber() const
{
    return lowestCellVoltage_CmuNumber_;
}
int BatteryData::lowestCellVoltage_CellNumber() const
{
    return lowestCellVoltage_CellNumber_;
}
double BatteryData::lowestCellTemp_Temperature() const
{
    return lowestCellTemp_Temperature_;
}
int BatteryData::lowestCellTemp_CmuNumber() const
{
    return lowestCellTemp_CmuNumber_;
}
int BatteryData::lowestCellTemp_CellNumber() const
{
    return lowestCellTemp_CellNumber_;
}
double BatteryData::highestCellVoltage_Voltage() const
{
    return highestCellVoltage_Voltage_;
}
int BatteryData::highestCellVoltage_CmuNumber() const
{
    return highestCellVoltage_CmuNumber_;
}
int BatteryData::highestCellVoltage_CellNumber() const
{
    return highestCellVoltage_CellNumber_;
}
double BatteryData::highestCellTemp_Temperature() const
{
    return highestCellTemp_Temperature_;
}
int BatteryData::highestCellTemp_CmuNumber() const
{
    return highestCellTemp_CmuNumber_;
}
int BatteryData::highestCellTemp_CellNumber() const
{
    return highestCellTemp_CellNumber_;
}
double BatteryData::voltage() const
{
    return voltage_;
}
double BatteryData::current() const
{
    return current_;
}
double BatteryData::netPower() const
{
    return netPower_;
}
double BatteryData::fan0Speed() const
{
    return fan0Speed_;
}
double BatteryData::fan1Speed() const
{
    return fan1Speed_;
}
double BatteryData::fanContactorsCurrent() const
{
    return fanContactorsCurrent_;
}
double BatteryData::cmuCurrent() const
{
    return cmuCurrent_;
}

void BatteryData::setAlive(bool alive)
{
    alive_ = alive;
    emit aliveReceived(alive_);
}
void BatteryData::setPackSocAmpHours(double packSocAmpHours)
{
    packSocAmpHours_ = packSocAmpHours;
    emit packSocAmpHoursReceived(packSocAmpHours_);
}
void BatteryData::setPackSocPercentage(double packSocPercentage)
{
    packSocPercentage_ = packSocPercentage;
    emit packSocPercentageReceived(packSocPercentage_);
}
void BatteryData::setPackBalanceSocAmpHours(double packBalanceSocAmpHours)
{
    packBalanceSocAmpHours_ = packBalanceSocAmpHours;
    emit packBalanceSocAmpHoursReceived(packBalanceSocAmpHours_);
}
void BatteryData::setPackBalanceSocPercentage(double packBalanceSocPercentage)
{
    packBalanceSocPercentage_ = packBalanceSocPercentage;
    emit packBalanceSocPercentageReceived(packBalanceSocPercentage_);
}
void BatteryData::setChargingCellVoltageError(double chargingCellVoltageError)
{
    chargingCellVoltageError_ = chargingCellVoltageError;
    emit chargingCellVoltageErrorReceived(chargingCellVoltageError_);
}
void BatteryData::setCellTempMargin(double cellTempMargin)
{
    cellTempMargin_ = cellTempMargin;
    emit cellTempMarginReceived(cellTempMargin_);
}
void BatteryData::setDischargingCellVoltageError(double dischargingCellVoltageError)
{
    dischargingCellVoltageError_ = dischargingCellVoltageError;
    emit dischargingCellVoltageErrorReceived(dischargingCellVoltageError_);
}
void BatteryData::setTotalPackCapacity(double totalPackCapacity)
{
    totalPackCapacity_ = totalPackCapacity;
    emit totalPackCapacityReceived(totalPackCapacity_);
}
void BatteryData::setPrechargeContactor0DriverStatus(bool prechargeContactor0DriverStatus)
{
    prechargeContactor0DriverStatus_ = prechargeContactor0DriverStatus;
    emit prechargeContactor0DriverStatusReceived(prechargeContactor0DriverStatus_);
}
void BatteryData::setPrechargeContactor1DriverStatus(bool prechargeContactor1DriverStatus)
{
    prechargeContactor1DriverStatus_ = prechargeContactor1DriverStatus;
    emit prechargeContactor1DriverStatusReceived(prechargeContactor1DriverStatus_);
}
void BatteryData::setPrechargeContactor2DriverStatus(bool prechargeContactor2DriverStatus)
{
    prechargeContactor2DriverStatus_ = prechargeContactor2DriverStatus;
    emit prechargeContactor2DriverStatusReceived(prechargeContactor2DriverStatus_);
}
void BatteryData::setPrechargeContactor0DriverError(bool prechargeContactor0DriverError)
{
    prechargeContactor0DriverError_ = prechargeContactor0DriverError;
    emit prechargeContactor0DriverErrorReceived(prechargeContactor0DriverError_);
}
void BatteryData::setPrechargeContactor1DriverError(bool prechargeContactor1DriverError)
{
    prechargeContactor1DriverError_ = prechargeContactor1DriverError;
    emit prechargeContactor1DriverErrorReceived(prechargeContactor1DriverError_);
}
void BatteryData::setPrechargeContactor2DriverError(bool prechargeContactor2DriverError)
{
    prechargeContactor2DriverError_ = prechargeContactor2DriverError;
    emit prechargeContactor2DriverErrorReceived(prechargeContactor2DriverError_);
}
void BatteryData::setContactorSupplyOk(bool contactorSupplyOk)
{
    contactorSupplyOk_ = contactorSupplyOk;
    emit contactorSupplyOkReceived(contactorSupplyOk_);
}
void BatteryData::setPrechargeState(QString prechargeState)
{
    prechargeState_ = prechargeState;
    emit prechargeStateReceived(prechargeState_);
}
void BatteryData::setPrechargeTimerElapsed(bool prechargeTimerElapsed)
{
    prechargeTimerElapsed_ = prechargeTimerElapsed;
    emit prechargeTimerElapsedReceived(prechargeTimerElapsed_);
}
void BatteryData::setPrechargeTimerCount(double prechargeTimerCount)
{
    prechargeTimerCount_ = prechargeTimerCount;
    emit prechargeTimerCountReceived(prechargeTimerCount_);
}
void BatteryData::setLowestCellVoltage_Voltage(double lowestCellVoltage_Voltage)
{
    lowestCellVoltage_Voltage_ = lowestCellVoltage_Voltage;
    emit lowestCellVoltage_VoltageReceived(lowestCellVoltage_Voltage_);
}
void BatteryData::setLowestCellVoltage_CmuNumber(int lowestCellVoltage_CmuNumber)
{
    lowestCellVoltage_CmuNumber_ = lowestCellVoltage_CmuNumber;
    emit lowestCellVoltage_CmuNumberReceived(lowestCellVoltage_CmuNumber_);
}
void BatteryData::setLowestCellVoltage_CellNumber(int lowestCellVoltage_CellNumber)
{
    lowestCellVoltage_CellNumber_ = lowestCellVoltage_CellNumber;
    emit lowestCellVoltage_CellNumberReceived(lowestCellVoltage_CellNumber_);
}
void BatteryData::setLowestCellTemp_Temperature(double lowestCellTemp_Temperature)
{
    lowestCellTemp_Temperature_ = lowestCellTemp_Temperature;
    emit lowestCellTemp_TemperatureReceived(lowestCellTemp_Temperature_);
}
void BatteryData::setLowestCellTemp_CmuNumber(int lowestCellTemp_CmuNumber)
{
    lowestCellTemp_CmuNumber_ = lowestCellTemp_CmuNumber;
    emit lowestCellTemp_CmuNumberReceived(lowestCellTemp_CmuNumber_);
}
void BatteryData::setLowestCellTemp_CellNumber(int lowestCellTemp_CellNumber)
{
    lowestCellTemp_CellNumber_ = lowestCellTemp_CellNumber;
    emit lowestCellTemp_CellNumberReceived(lowestCellTemp_CellNumber_);
}
void BatteryData::setHighestCellVoltage_Voltage(double highestCellVoltage_Voltage)
{
    highestCellVoltage_Voltage_ = highestCellVoltage_Voltage;
    emit highestCellVoltage_VoltageReceived(highestCellVoltage_Voltage_);
}
void BatteryData::setHighestCellVoltage_CmuNumber(int highestCellVoltage_CmuNumber)
{
    highestCellVoltage_CmuNumber_ = highestCellVoltage_CmuNumber;
    emit highestCellVoltage_CmuNumberReceived(highestCellVoltage_CmuNumber_);
}
void BatteryData::setHighestCellVoltage_CellNumber(int highestCellVoltage_CellNumber)
{
    highestCellVoltage_CellNumber_ = highestCellVoltage_CellNumber;
    emit highestCellVoltage_CellNumberReceived(highestCellVoltage_CellNumber_);
}
void BatteryData::setHighestCellTemp_Temperature(double highestCellTemp_Temperature)
{
    highestCellTemp_Temperature_ = highestCellTemp_Temperature;
    emit highestCellTemp_TemperatureReceived(highestCellTemp_Temperature_);
}
void BatteryData::setHighestCellTemp_CmuNumber(int highestCellTemp_CmuNumber)
{
    highestCellTemp_CmuNumber_ = highestCellTemp_CmuNumber;
    emit highestCellTemp_CmuNumberReceived(highestCellTemp_CmuNumber_);
}
void BatteryData::setHighestCellTemp_CellNumber(int highestCellTemp_CellNumber)
{
    highestCellTemp_CellNumber_ = highestCellTemp_CellNumber;
    emit highestCellTemp_CellNumberReceived(highestCellTemp_CellNumber_);
}
void BatteryData::setVoltage(double voltage)
{
    voltage_ = voltage;
    netPower_ = voltage * current_;
    emit voltageReceived(voltage_);
    emit netPowerReceived(netPower_);
}
void BatteryData::setCurrent(double current)
{
    current_ = current;
    netPower_ = voltage_ * current;
    emit currentReceived(current_);
    emit netPowerReceived(netPower_);
}
void BatteryData::setFan0Speed(double fan0Speed)
{
    fan0Speed_ = fan0Speed;
    emit fan0SpeedReceived(fan0Speed_);
}
void BatteryData::setFan1Speed(double fan1Speed)
{
    fan1Speed_ = fan1Speed;
    emit fan1SpeedReceived(fan1Speed_);
}
void BatteryData::setFanContactorsCurrent(double fanContactorsCurrent)
{
    fanContactorsCurrent_ = fanContactorsCurrent;
    emit fanContactorsCurrentReceived(fanContactorsCurrent_);
}
void BatteryData::setCmuCurrent(double cmuCurrent)
{
    cmuCurrent_ = cmuCurrent;
    emit cmuCurrentReceived(cmuCurrent_);
}