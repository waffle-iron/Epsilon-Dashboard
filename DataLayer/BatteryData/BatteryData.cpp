#include "BatteryData.h"
#include <QDebug>

BatteryData::BatteryData()
{
}

BatteryData::~BatteryData()
{
}

// ------ data getter ------ //

bool BatteryData::alive() const
{
    return alive_;
}

BmsRelayStatusFlags BatteryData::bmsRelayStatus() const
{
    return bmsRelayStatus_;
}

int BatteryData::populatedCells() const
{
    return populatedCells_;
}

double BatteryData::inputVoltage12() const
{
    return inputVoltage12_;
}

double BatteryData::fanVoltage() const
{
    return fanVoltage_;
}

double BatteryData::packCurrent() const
{
    return packCurrent_;
}

double BatteryData::packVoltage() const
{
    return packVoltage_;
}

double BatteryData::packStateOfCharge() const
{
    return packStateOfCharge_;
}

double BatteryData::packAmphours() const
{
    return packAmphours_;
}

double BatteryData::packDepthOfDischarge() const
{
    return packDepthOfDischarge_;
}

int BatteryData::highTemperature() const
{
    return highTemperature_;
}

int BatteryData::highThermistorId() const
{
    return highThermistorId_;
}

int BatteryData::lowTemperature() const
{
    return lowTemperature_;
}

int BatteryData::lowThermistorId() const
{
    return lowThermistorId_;
}

int BatteryData::averageTemperature() const
{
    return averageTemperature_;
}

int BatteryData::internalTemperature() const
{
    return internalTemperature_;
}

int BatteryData::fanSpeed() const
{
    return fanSpeed_;
}

int BatteryData::requestedFanSpeed() const
{
    return requestedFanSpeed_;
}

int BatteryData::lowCellVoltage() const
{
    return lowCellVoltage_;
}

int BatteryData::lowCellVoltageId() const
{
    return lowCellVoltageId_;
}

int BatteryData::highCellVoltage() const
{
    return highCellVoltage_;
}

int BatteryData::highCellVoltageId() const
{
    return highCellVoltageId_;
}

int BatteryData::averageCellVoltage() const
{
    return averageCellVoltage_;
}

QString BatteryData::prechargeState() const
{
    return prechargeState_;
}

int BatteryData::auxVoltage() const
{
    return auxVoltage_;
}

bool BatteryData::auxBmsAlive() const
{
    return auxBmsAlive_;
}

double BatteryData::packNetPower() const
{
    return packNetPower_;
}

// ------ data setter ------ //

void BatteryData::setAlive(bool alive)
{
    alive_ = alive;
    emit aliveReceived(alive_);
}

void BatteryData::setBmsRelayStatus(const BmsRelayStatusFlags &bmsRelayStatus)
{
    bmsRelayStatus_ = bmsRelayStatus;
    emit bmsRelayStatusReceived(bmsRelayStatus_);
}

void BatteryData::setPopulatedCells(int populatedCells)
{
    populatedCells_ = populatedCells;
    emit populatedCellsReceived(populatedCells_);
}

void BatteryData::setInputVoltage12(double inputVoltage12)
{
    inputVoltage12_ = inputVoltage12;
    emit inputVoltage12VReceived(inputVoltage12_);
}

void BatteryData::setFanVoltage(double fanVoltage)
{
    fanVoltage_ = fanVoltage;
    emit fanVoltageReceived(fanVoltage_);
}

void BatteryData::setPackCurrent(double packCurrent)
{
    packCurrent_ = packCurrent;
    packNetPower_ = packVoltage_ * packCurrent;
    emit packCurrentReceived(packCurrent_);
    emit packNetPowerReceived(packNetPower_);
}

void BatteryData::setPackVoltage(double packVoltage)
{
    packVoltage_ = packVoltage;
    packNetPower_ = packVoltage * packCurrent_;
    emit packVoltageReceived(packVoltage_);
    emit packNetPowerReceived(packNetPower_);
}

void BatteryData::setPackStateOfCharge(double packStateOfCharge)
{
    packStateOfCharge_ = packStateOfCharge;
    emit packStateOfChargeReceived(packStateOfCharge_);
}

void BatteryData::setPackAmphours(double packAmphours)
{
    packAmphours_ = packAmphours;
    emit packAmphoursReceived(packAmphours_);
}

void BatteryData::setPackDepthOfDischarge(double packDepthOfDischarge)
{
    packDepthOfDischarge_ = packDepthOfDischarge;
    emit packDepthOfDischargeReceived(packDepthOfDischarge_);
}

void BatteryData::setHighTemperature(int highTemperature)
{
    highTemperature_ = highTemperature;
    emit highTemperatureReceived(highTemperature_);
}

void BatteryData::setHighThermistorId(int highThermistorId)
{
    highThermistorId_ = highThermistorId;
    emit highThermistorIdReceived(highThermistorId_);
}

void BatteryData::setLowTemperature(int lowTemperature)
{
    lowTemperature_ = lowTemperature;
    emit lowTemperatureReceived(lowTemperature_);
}

void BatteryData::setLowThermistorId(int lowThermistorId)
{
    lowThermistorId_ = lowThermistorId;
    emit lowThermistorIdReceived(lowThermistorId_);
}

void BatteryData::setAverageTemperature(int averageTemperature)
{
    averageTemperature_ = averageTemperature;
    emit averageTemperatureReceived(averageTemperature_);
}

void BatteryData::setInternalTemperature(int internalTemperature)
{
    internalTemperature_ = internalTemperature;
    emit internalTemperatureReceived(internalTemperature_);
}

void BatteryData::setFanSpeed(int fanSpeed)
{
    fanSpeed_ = fanSpeed;
    emit fanSpeedReceived(fanSpeed_);
}

void BatteryData::setRequestedFanSpeed(int requestedFanSpeed)
{
    requestedFanSpeed_ = requestedFanSpeed;
    emit requestedFanSpeedReceived(requestedFanSpeed_);
}

void BatteryData::setLowCellVoltage(int lowCellVoltage)
{
    lowCellVoltage_ = lowCellVoltage;
    emit lowCellVoltageReceived(lowCellVoltage_);
}

void BatteryData::setLowCellVoltageId(int lowCellVoltageId)
{
    lowCellVoltageId_ = lowCellVoltageId;
    emit lowCellVoltageIdReceived(lowCellVoltageId_);
}

void BatteryData::setHighCellVoltage(int highCellVoltage)
{
    highCellVoltage_ = highCellVoltage;
    emit highCellVoltageReceived(highCellVoltage_);
}

void BatteryData::setHighCellVoltageId(int highCellVoltageId)
{
    highCellVoltageId_ = highCellVoltageId;
    emit highCellVoltageIdReceived(highCellVoltageId_);
}

void BatteryData::setAverageCellVoltage(int averageCellVoltage)
{
    averageCellVoltage_ = averageCellVoltage;
    emit averageCellVoltageReceived(averageCellVoltage_);
}

void BatteryData::setPrechargeState(const QString &prechargeState)
{
    prechargeState_ = prechargeState;
    emit prechargeStateReceived(prechargeState_);
}

void BatteryData::setAuxVoltage(int auxVoltage)
{
    auxVoltage_ = auxVoltage;
    emit auxVoltageReceived(auxVoltage_);
}

void BatteryData::setAuxBmsAlive(bool auxBmsAlive)
{
    auxBmsAlive_ = auxBmsAlive;
    emit auxBmsAliveReceived(auxBmsAlive_);
}
