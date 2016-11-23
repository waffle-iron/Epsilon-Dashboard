#include "MotorFaultsData.h"
#include <QDebug>

MotorFaultsData::MotorFaultsData()
{
}

MotorFaultsData::~MotorFaultsData()
{
}

bool MotorFaultsData::motorFaults_Zero_ErrorFlags_MotorOverSpeed() const
{
    return motorFaults_Zero_ErrorFlags_MotorOverSpeed_;
}
bool MotorFaultsData::motorFaults_Zero_ErrorFlags_SoftwareOverCurrent() const
{
    return motorFaults_Zero_ErrorFlags_SoftwareOverCurrent_;
}
bool MotorFaultsData::motorFaults_Zero_ErrorFlags_DcBusOverVoltage() const
{
    return motorFaults_Zero_ErrorFlags_DcBusOverVoltage_;
}
bool MotorFaultsData::motorFaults_Zero_ErrorFlags_BadMotorPositionHallSequence() const
{
    return motorFaults_Zero_ErrorFlags_BadMotorPositionHallSequence_;
}
bool MotorFaultsData::motorFaults_Zero_ErrorFlags_WatchdogCausedLastReset() const
{
    return motorFaults_Zero_ErrorFlags_WatchdogCausedLastReset_;
}
bool motorFaultsData::motorFaults_Zero_ErrorFlags_ConfigReadError() const
{
    return motorFaults_Zero_ErrorFlags_ConfigReadError_;
}
bool MotorFaultsData::motorFaults_Zero_ErrorFlags_Rail15VUnderVoltageLockOut() const
{
    return motorFaults_Zero_ErrorFlags_Rail15VUnderVoltageLockOut_;
}
bool MotorFaultsData::motorFaults_Zero_ErrorFlags_DesaturationFault() const
{
    return motorFaults_Zero_ErrorFlags_DesaturationFault_;
}
bool MotorFaultsData::motorFaults_Zero_LimitFlags_OutputVoltagePwm() const
{
    return motorFaults_Zero_LimitFlags_OutputVoltagePwm_;
}
bool MotorFaultsData::motorFaults_Zero_LimitFlags_MotorCurrent() const
{
    return motorFaults_Zero_LimitFlags_MotorCurrent_;
}
bool MotorFaultsData::motorFaults_Zero_LimitFlags_Velocity() const
{
    return motorFaults_Zero_LimitFlags_Velocity_;
}
bool MotorFaultsData::motorFaults_Zero_LimitFlags_BusCurrent() const
{
    return motorFaults_Zero_LimitFlags_BusCurrent_;
}
bool MotorFaultsData::motorFaults_Zero_LimitFlags_BusVoltageUpper() const
{
    return motorFaults_Zero_LimitFlags_BusVoltageUpper_;
}
bool MotorFaultsData::motorFaults_Zero_LimitFlags_BusVoltageLower() const
{
    return motorFaults_Zero_LimitFlags_BusVoltageLower_;
}
bool MotorFaultsData::motorFaults_Zero_LimitFlags_IpmOrMotorTemperature() const
{
    return motorFaults_Zero_LimitFlags_IpmOrMotorTemperature_;
}
int MotorFaultsData::motorFaults_Zero_RxErrorCount() const
{
    return motorFaults_Zero_RxErrorCount_;
}
int MotorFaultsData::motorFaults_Zero_TxErrorCount() const
{
    return motorFaults_Zero_TxErrorCount_;
}

bool MotorFaultsData::motorFaults_One_ErrorFlags_MotorOverSpeed() const
{
    return motorFaults_One_ErrorFlags_MotorOverSpeed_;
}
bool MotorFaultsData::motorFaults_One_ErrorFlags_SoftwareOverCurrent() const
{
    return motorFaults_One_ErrorFlags_SoftwareOverCurrent_;
}
bool MotorFaultsData::motorFaults_One_ErrorFlags_DcBusOverVoltage() const
{
    return motorFaults_One_ErrorFlags_DcBusOverVoltage_;
}
bool MotorFaultsData::motorFaults_One_ErrorFlags_BadMotorPositionHallSequence() const
{
    return motorFaults_One_ErrorFlags_BadMotorPositionHallSequence_;
}
bool MotorFaultsData::motorFaults_One_ErrorFlags_WatchdogCausedLastReset() const
{
    return motorFaults_One_ErrorFlags_WatchdogCausedLastReset_;
}
bool motorFaultsData::motorFaults_One_ErrorFlags_ConfigReadError() const
{
    return motorFaults_One_ErrorFlags_ConfigReadError_;
}
bool MotorFaultsData::motorFaults_One_ErrorFlags_Rail15VUnderVoltageLockOut() const
{
    return motorFaults_One_ErrorFlags_Rail15VUnderVoltageLockOut_;
}
bool MotorFaultsData::motorFaults_One_ErrorFlags_DesaturationFault() const
{
    return motorFaults_One_ErrorFlags_DesaturationFault_;
}
bool MotorFaultsData::motorFaults_One_LimitFlags_OutputVoltagePwm() const
{
    return motorFaults_One_LimitFlags_OutputVoltagePwm_;
}
bool MotorFaultsData::motorFaults_One_LimitFlags_MotorCurrent() const
{
    return motorFaults_One_LimitFlags_MotorCurrent_;
}
bool MotorFaultsData::motorFaults_One_LimitFlags_Velocity() const
{
    return motorFaults_One_LimitFlags_Velocity_;
}
bool MotorFaultsData::motorFaults_One_LimitFlags_BusCurrent() const
{
    return motorFaults_One_LimitFlags_BusCurrent_;
}
bool MotorFaultsData::motorFaults_One_LimitFlags_BusVoltageUpper() const
{
    return motorFaults_One_LimitFlags_BusVoltageUpper_;
}
bool MotorFaultsData::motorFaults_One_LimitFlags_BusVoltageLower() const
{
    return motorFaults_One_LimitFlags_BusVoltageLower_;
}
bool MotorFaultsData::motorFaults_One_LimitFlags_IpmOrMotorTemperature() const
{
    return motorFaults_One_LimitFlags_IpmOrMotorTemperature_;
}
int MotorFaultsData::motorFaults_One_RxErrorCount() const
{
    return motorFaults_One_RxErrorCount_;
}
int MotorFaultsData::motorFaults_One_TxErrorCount() const
{
    return motorFaults_One_TxErrorCount_;
}

void MotorFaultsData::setMotorFaults_Zero_ErrorFlags_MotorOverSpeed(bool motorFaults_Zero_ErrorFlags_MotorOverSpeed)
{
    motorFaults_Zero_ErrorFlags_MotorOverSpeed_ = motorFaults_Zero_ErrorFlags_MotorOverSpeed;
    emit MotorFaults_Zero_ErrorFlags_MotorOverSpeedReceived(motorFaults_Zero_ErrorFlags_MotorOverSpeed_);
}
void MotorFaultsData::setMotorFaults_Zero_ErrorFlags_SoftwareOverCurrent(bool motorFaults_Zero_ErrorFlags_SoftwareOverCurrent)
{
    motorFaults_Zero_ErrorFlags_SoftwareOverCurrent_ = motorFaults_Zero_ErrorFlags_SoftwareOverCurrent;
    emit MotorFaults_Zero_ErrorFlags_SoftwareOverCurrentReceived(motorFaults_Zero_ErrorFlags_SoftwareOverCurrent_);
}
void MotorFaultsData::setMotorFaults_Zero_ErrorFlags_DcBusOverVoltage(bool motorFaults_Zero_ErrorFlags_DcBusOverVoltage)
{
    motorFaults_Zero_ErrorFlags_DcBusOverVoltage_ = motorFaults_Zero_ErrorFlags_DcBusOverVoltage;
    emit MotorFaults_Zero_ErrorFlags_DcBusOverVoltageReceived(motorFaults_Zero_ErrorFlags_DcBusOverVoltage_);
}
void MotorFaultsData::setMotorFaults_Zero_ErrorFlags_BadMotorPositionHallSequence(bool motorFaults_Zero_ErrorFlags_BadMotorPositionHallSequence)
{
    motorFaults_Zero_ErrorFlags_BadMotorPositionHallSequence_ = motorFaults_Zero_ErrorFlags_BadMotorPositionHallSequence;
    emit MotorFaults_Zero_ErrorFlags_BadMotorPositionHallSequenceReceived(motorFaults_Zero_ErrorFlags_BadMotorPositionHallSequence_);
}
void MotorFaultsData::setMotorFaults_Zero_ErrorFlags_WatchdogCausedLastReset(bool motorFaults_Zero_ErrorFlags_WatchdogCausedLastReset)
{
    motorFaults_Zero_ErrorFlags_WatchdogCausedLastReset_ = motorFaults_Zero_ErrorFlags_WatchdogCausedLastReset;
    emit MotorFaults_Zero_ErrorFlags_WatchdogCausedLastResetReceived(motorFaults_Zero_ErrorFlags_WatchdogCausedLastReset_);
}
void MotorFaultsData::setMotorFaults_Zero_ErrorFlags_ConfigReadError(bool motorFaults_Zero_ErrorFlags_ConfigReadError)
{
    motorFaults_Zero_ErrorFlags_ConfigReadError_ = motorFaults_Zero_ErrorFlags_ConfigReadError;
    emit MotorFaults_Zero_ErrorFlags_ConfigReadErrorReceived(motorFaults_Zero_ErrorFlags_ConfigReadError_);
}
void MotorFaultsData::setMotorFaults_Zero_ErrorFlags_Rail15VUnderVoltageLockOut(bool motorFaults_Zero_ErrorFlags_Rail15VUnderVoltageLockOut)
{
    motorFaults_Zero_ErrorFlags_Rail15VUnderVoltageLockOut_ = motorFaults_Zero_ErrorFlags_Rail15VUnderVoltageLockOut;
    emit MotorFaults_Zero_ErrorFlags_Rail15VUnderVoltageLockOutReceived(motorFaults_Zero_ErrorFlags_Rail15VUnderVoltageLockOut_);
}
void MotorFaultsData::setMotorFaults_Zero_ErrorFlags_DesaturationFault(bool motorFaults_Zero_ErrorFlags_DesaturationFault)
{
    motorFaults_Zero_ErrorFlags_DesaturationFault_ = motorFaults_Zero_ErrorFlags_DesaturationFault;
    emit MotorFaults_Zero_ErrorFlags_DesaturationFaultReceived(motorFaults_Zero_ErrorFlags_DesaturationFault_);
}
void MotorFaultsData::setMotorFaults_Zero_LimitFlags_OutputVoltagePwm(bool motorFaults_Zero_LimitFlags_OutputVoltagePwm)
{
    motorFaults_Zero_LimitFlags_OutputVoltagePwm_ = motorFaults_Zero_LimitFlags_OutputVoltagePwm;
    emit MotorFaults_Zero_LimitFlags_OutputVoltagePwmReceived(motorFaults_Zero_LimitFlags_OutputVoltagePwm_);
}
void MotorFaultsData::setMotorFaults_Zero_LimitFlags_MotorCurrent(bool motorFaults_Zero_LimitFlags_MotorCurrent)
{
    motorFaults_Zero_LimitFlags_MotorCurrent_ = motorFaults_Zero_LimitFlags_MotorCurrent;
    emit MotorFaults_Zero_LimitFlags_MotorCurrentReceived(motorFaults_Zero_LimitFlags_MotorCurrent_);
}
void MotorFaultsData::setMotorFaults_Zero_LimitFlags_Velocity(bool motorFaults_Zero_LimitFlags_Velocity)
{
    motorFaults_Zero_LimitFlags_Velocity_ = motorFaults_Zero_LimitFlags_Velocity;
    emit MotorFaults_Zero_LimitFlags_VelocityReceived(motorFaults_Zero_LimitFlags_Velocity_);
}
void MotorFaultsData::setMotorFaults_Zero_LimitFlags_BusCurrent(bool motorFaults_Zero_LimitFlags_BusCurrent)
{
    motorFaults_Zero_LimitFlags_BusCurrent_ = motorFaults_Zero_LimitFlags_BusCurrent;
    emit MotorFaults_Zero_LimitFlags_BusCurrentReceived(motorFaults_Zero_LimitFlags_BusCurrent_);
}
void MotorFaultsData::setMotorFaults_Zero_LimitFlags_BusVoltageUpper(bool motorFaults_Zero_LimitFlags_BusVoltageUpper)
{
    motorFaults_Zero_LimitFlags_BusVoltageUpper_ = motorFaults_Zero_LimitFlags_BusVoltageUpper;
    emit MotorFaults_Zero_LimitFlags_BusVoltageUpperReceived(motorFaults_Zero_LimitFlags_BusVoltageUpper_);
}
void MotorFaultsData::setMotorFaults_Zero_LimitFlags_BusVoltageLower(bool motorFaults_Zero_LimitFlags_BusVoltageLower)
{
    motorFaults_Zero_LimitFlags_BusVoltageLower_ = motorFaults_Zero_LimitFlags_BusVoltageLower;
    emit MotorFaults_Zero_LimitFlags_BusVoltageLowerReceived(motorFaults_Zero_LimitFlags_BusVoltageLower_);
}
void MotorFaultsData::setMotorFaults_Zero_LimitFlags_IpmOrMotorTemperature(bool motorFaults_Zero_LimitFlags_IpmOrMotorTemperature)
{
    motorFaults_Zero_LimitFlags_IpmOrMotorTemperature_ = motorFaults_Zero_LimitFlags_IpmOrMotorTemperature;
    emit MotorFaults_Zero_LimitFlags_IpmOrMotorTemperatureReceived(motorFaults_Zero_LimitFlags_IpmOrMotorTemperature_);
}
void MotorFaultsData::setMotorFaults_Zero_RxErrorCount(int motorFaults_Zero_RxErrorCount)
{
    motorFaults_Zero_RxErrorCount_ = motorFaults_Zero_RxErrorCount;
    emit MotorFaults_Zero_RxErrorCountReceived(motorFaults_Zero_RxErrorCount_);
}
void MotorFaultsData::setMotorFaults_Zero_TxErrorCount(int motorFaults_Zero_TxErrorCount)
{
    motorFaults_Zero_TxErrorCount_ = motorFaults_Zero_TxErrorCount;
    emit MotorFaults_Zero_TxErrorCountReceived(motorFaults_Zero_TxErrorCount_);
}

void MotorFaultsData::setMotorFaults_One_ErrorFlags_MotorOverSpeed(bool motorFaults_Zero_ErrorFlags_MotorOverSpeed)
{
    motorFaults_Zero_ErrorFlags_MotorOverSpeed_ = motorFaults_Zero_ErrorFlags_MotorOverSpeed;
    emit MotorFaults_One_ErrorFlags_MotorOverSpeedReceived(motorFaults_Zero_ErrorFlags_MotorOverSpeed_);
}
void MotorFaultsData::setMotorFaults_One_ErrorFlags_SoftwareOverCurrent(bool motorFaults_Zero_ErrorFlags_SoftwareOverCurrent)
{
    motorFaults_Zero_ErrorFlags_SoftwareOverCurrent_ = motorFaults_Zero_ErrorFlags_SoftwareOverCurrent;
    emit MotorFaults_One_ErrorFlags_SoftwareOverCurrentReceived(motorFaults_Zero_ErrorFlags_SoftwareOverCurrent_);
}
void MotorFaultsData::setMotorFaults_One_ErrorFlags_DcBusOverVoltage(bool motorFaults_Zero_ErrorFlags_DcBusOverVoltage)
{
    motorFaults_Zero_ErrorFlags_DcBusOverVoltage_ = motorFaults_Zero_ErrorFlags_DcBusOverVoltage;
    emit MotorFaults_One_ErrorFlags_DcBusOverVoltageReceived(motorFaults_Zero_ErrorFlags_DcBusOverVoltage_);
}
void MotorFaultsData::setMotorFaults_One_ErrorFlags_BadMotorPositionHallSequence(bool motorFaults_Zero_ErrorFlags_BadMotorPositionHallSequence)
{
    motorFaults_Zero_ErrorFlags_BadMotorPositionHallSequence_ = motorFaults_Zero_ErrorFlags_BadMotorPositionHallSequence;
    emit MotorFaults_One_ErrorFlags_BadMotorPositionHallSequenceReceived(motorFaults_Zero_ErrorFlags_BadMotorPositionHallSequence_);
}
void MotorFaultsData::setMotorFaults_One_ErrorFlags_WatchdogCausedLastReset(bool motorFaults_Zero_ErrorFlags_WatchdogCausedLastReset)
{
    motorFaults_Zero_ErrorFlags_WatchdogCausedLastReset_ = motorFaults_Zero_ErrorFlags_WatchdogCausedLastReset;
    emit MotorFaults_One_ErrorFlags_WatchdogCausedLastResetReceived(motorFaults_Zero_ErrorFlags_WatchdogCausedLastReset_);
}
void MotorFaultsData::setMotorFaults_One_ErrorFlags_ConfigReadError(bool motorFaults_Zero_ErrorFlags_ConfigReadError)
{
    motorFaults_Zero_ErrorFlags_ConfigReadError_ = motorFaults_Zero_ErrorFlags_ConfigReadError;
    emit MotorFaults_One_ErrorFlags_ConfigReadErrorReceived(motorFaults_Zero_ErrorFlags_ConfigReadError_);
}
void MotorFaultsData::setMotorFaults_One_ErrorFlags_Rail15VUnderVoltageLockOut(bool motorFaults_Zero_ErrorFlags_Rail15VUnderVoltageLockOut)
{
    motorFaults_Zero_ErrorFlags_Rail15VUnderVoltageLockOut_ = motorFaults_Zero_ErrorFlags_Rail15VUnderVoltageLockOut;
    emit MotorFaults_One_ErrorFlags_Rail15VUnderVoltageLockOutReceived(motorFaults_Zero_ErrorFlags_Rail15VUnderVoltageLockOut_);
}
void MotorFaultsData::setMotorFaults_One_ErrorFlags_DesaturationFault(bool motorFaults_Zero_ErrorFlags_DesaturationFault)
{
    motorFaults_Zero_ErrorFlags_DesaturationFault_ = motorFaults_Zero_ErrorFlags_DesaturationFault;
    emit MotorFaults_One_ErrorFlags_DesaturationFaultReceived(motorFaults_Zero_ErrorFlags_DesaturationFault_);
}
void MotorFaultsData::setMotorFaults_One_LimitFlags_OutputVoltagePwm(bool motorFaults_Zero_LimitFlags_OutputVoltagePwm)
{
    motorFaults_Zero_LimitFlags_OutputVoltagePwm_ = motorFaults_Zero_LimitFlags_OutputVoltagePwm;
    emit MotorFaults_One_LimitFlags_OutputVoltagePwmReceived(motorFaults_Zero_LimitFlags_OutputVoltagePwm_);
}
void MotorFaultsData::setMotorFaults_One_LimitFlags_MotorCurrent(bool motorFaults_Zero_LimitFlags_MotorCurrent)
{
    motorFaults_Zero_LimitFlags_MotorCurrent_ = motorFaults_Zero_LimitFlags_MotorCurrent;
    emit MotorFaults_One_LimitFlags_MotorCurrentReceived(motorFaults_Zero_LimitFlags_MotorCurrent_);
}
void MotorFaultsData::setMotorFaults_One_LimitFlags_Velocity(bool motorFaults_Zero_LimitFlags_Velocity)
{
    motorFaults_Zero_LimitFlags_Velocity_ = motorFaults_Zero_LimitFlags_Velocity;
    emit MotorFaults_One_LimitFlags_VelocityReceived(motorFaults_Zero_LimitFlags_Velocity_);
}
void MotorFaultsData::setMotorFaults_One_LimitFlags_BusCurrent(bool motorFaults_Zero_LimitFlags_BusCurrent)
{
    motorFaults_Zero_LimitFlags_BusCurrent_ = motorFaults_Zero_LimitFlags_BusCurrent;
    emit MotorFaults_One_LimitFlags_BusCurrentReceived(motorFaults_Zero_LimitFlags_BusCurrent_);
}
void MotorFaultsData::setMotorFaults_One_LimitFlags_BusVoltageUpper(bool motorFaults_Zero_LimitFlags_BusVoltageUpper)
{
    motorFaults_Zero_LimitFlags_BusVoltageUpper_ = motorFaults_Zero_LimitFlags_BusVoltageUpper;
    emit MotorFaults_One_LimitFlags_BusVoltageUpperReceived(motorFaults_Zero_LimitFlags_BusVoltageUpper_);
}
void MotorFaultsData::setMotorFaults_One_LimitFlags_BusVoltageLower(bool motorFaults_Zero_LimitFlags_BusVoltageLower)
{
    motorFaults_Zero_LimitFlags_BusVoltageLower_ = motorFaults_Zero_LimitFlags_BusVoltageLower;
    emit MotorFaults_One_LimitFlags_BusVoltageLowerReceived(motorFaults_Zero_LimitFlags_BusVoltageLower_);
}
void MotorFaultsData::setMotorFaults_One_LimitFlags_IpmOrMotorTemperature(bool motorFaults_Zero_LimitFlags_IpmOrMotorTemperature)
{
    motorFaults_Zero_LimitFlags_IpmOrMotorTemperature_ = motorFaults_Zero_LimitFlags_IpmOrMotorTemperature;
    emit MotorFaults_One_LimitFlags_IpmOrMotorTemperatureReceived(motorFaults_Zero_LimitFlags_IpmOrMotorTemperature_);
}
void MotorFaultsData::setMotorFaults_One_RxErrorCount(int motorFaults_Zero_RxErrorCount)
{
    motorFaults_Zero_RxErrorCount_ = motorFaults_Zero_RxErrorCount;
    emit MotorFaults_One_RxErrorCountReceived(motorFaults_Zero_RxErrorCount_);
}
void MotorFaultsData::setMotorFaults_One_TxErrorCount(int motorFaults_Zero_TxErrorCount)
{
    motorFaults_Zero_TxErrorCount_ = motorFaults_Zero_TxErrorCount;
    emit MotorFaults_One_TxErrorCountReceived(motorFaults_Zero_TxErrorCount_);
}
