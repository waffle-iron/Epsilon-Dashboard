#pragma once

#include "I_MotorFaultsData.h"

class MotorFaultsData : public I_MotorFaultsData
{
public:
    MotorFaultsData();
    virtual ~MotorFaultsData();

    bool motorFaults_Zero_ErrorFlags_MotorOverSpeed() const;
    bool motorFaults_Zero_ErrorFlags_SoftwareOverCurrent() const;
    bool motorFaults_Zero_ErrorFlags_DcBusOverVoltage() const;
    bool motorFaults_Zero_ErrorFlags_BadMotorPositionHallSequence() const;
    bool motorFaults_Zero_ErrorFlags_WatchdogCausedLastReset() const;
    bool motorFaults_Zero_ErrorFlags_ConfigReadError() const;
    bool motorFaults_Zero_ErrorFlags_Rail15VUnderVoltageLockOut() const;
    bool motorFaults_Zero_ErrorFlags_DesaturationFault() const;
    bool motorFaults_Zero_LimitFlags_OutputVoltagePwm() const;
    bool motorFaults_Zero_LimitFlags_MotorCurrent() const;
    bool motorFaults_Zero_LimitFlags_Velocity() const;
    bool motorFaults_Zero_LimitFlags_BusCurrent() const;
    bool motorFaults_Zero_LimitFlags_BusVoltageUpper() const;
    bool motorFaults_Zero_LimitFlags_BusVoltageLower() const;
    bool motorFaults_Zero_LimitFlags_IpmOrMotorTemperature() const;
    int motorFaults_Zero_RxErrorCount() const;
    int motorFaults_Zero_TxErrorCount() const;

    bool motorFaults_One_ErrorFlags_MotorOverSpeed() const;
    bool motorFaults_One_ErrorFlags_SoftwareOverCurrent() const;
    bool motorFaults_One_ErrorFlags_DcBusOverVoltage() const;
    bool motorFaults_One_ErrorFlags_BadMotorPositionHallSequence() const;
    bool motorFaults_One_ErrorFlags_WatchdogCausedLastReset() const;
    bool motorFaults_One_ErrorFlags_ConfigReadError() const;
    bool motorFaults_One_ErrorFlags_Rail15VUnderVoltageLockOut() const;
    bool motorFaults_One_ErrorFlags_DesaturationFault() const;
    bool motorFaults_One_LimitFlags_OutputVoltagePwm() const;
    bool motorFaults_One_LimitFlags_MotorCurrent() const;
    bool motorFaults_One_LimitFlags_Velocity() const;
    bool motorFaults_One_LimitFlags_BusCurrent() const;
    bool motorFaults_One_LimitFlags_BusVoltageUpper() const;
    bool motorFaults_One_LimitFlags_BusVoltageLower() const;
    bool motorFaults_One_LimitFlags_IpmOrMotorTemperature() const;
    int motorFaults_One_RxErrorCount() const;
    int motorFaults_One_TxErrorCount() const;

    void setMotorFaults_Zero_ErrorFlags_MotorOverSpeed(bool motorFaults_Zero_ErrorFlags_MotorOverSpeed);
    void setMotorFaults_Zero_ErrorFlags_SoftwareOverCurrent(bool motorFaults_Zero_ErrorFlags_SoftwareOverCurrent);
    void setMotorFaults_Zero_ErrorFlags_DcBusOverVoltage(bool motorFaults_Zero_ErrorFlags_DcBusOverVoltage);
    void setMotorFaults_Zero_ErrorFlags_BadMotorPositionHallSequence(bool motorFaults_Zero_ErrorFlags_BadMotorPositionHallSequence);
    void setMotorFaults_Zero_ErrorFlags_WatchdogCausedLastReset(bool motorFaults_Zero_ErrorFlags_WatchdogCausedLastReset);
    void setMotorFaults_Zero_ErrorFlags_ConfigReadError(bool motorFaults_Zero_ErrorFlags_ConfigReadError);
    void setMotorFaults_Zero_ErrorFlags_Rail15VUnderVoltageLockOut(bool motorFaults_Zero_ErrorFlags_Rail15VUnderVoltageLockOut);
    void setMotorFaults_Zero_ErrorFlags_DesaturationFault(bool motorFaults_Zero_ErrorFlags_DesaturationFault);
    void setMotorFaults_Zero_LimitFlags_OutputVoltagePwm(bool motorFaults_Zero_LimitFlags_OutputVoltagePwm);
    void setMotorFaults_Zero_LimitFlags_MotorCurrent(bool motorFaults_Zero_LimitFlags_MotorCurrent);
    void setMotorFaults_Zero_LimitFlags_Velocity(bool motorFaults_Zero_LimitFlags_Velocity);
    void setMotorFaults_Zero_LimitFlags_BusCurrent(bool motorFaults_Zero_LimitFlags_BusCurrent);
    void setMotorFaults_Zero_LimitFlags_BusVoltageUpper(bool motorFaults_Zero_LimitFlags_BusVoltageUpper);
    void setMotorFaults_Zero_LimitFlags_BusVoltageLower(bool motorFaults_Zero_LimitFlags_BusVoltageLower);
    void setMotorFaults_Zero_LimitFlags_IpmOrMotorTemperature(bool motorFaults_Zero_LimitFlags_IpmOrMotorTemperature);
    void setMotorFaults_Zero_RxErrorCount(int motorFaults_Zero_RxErrorCount);
    void setMotorFaults_Zero_TxErrorCount(int motorFaults_Zero_TxErrorCount);

    void setMotorFaults_One_ErrorFlags_MotorOverSpeed(bool motorFaults_Zero_ErrorFlags_MotorOverSpeed);
    void setMotorFaults_One_ErrorFlags_SoftwareOverCurrent(bool motorFaults_Zero_ErrorFlags_SoftwareOverCurrent);
    void setMotorFaults_One_ErrorFlags_DcBusOverVoltage(bool motorFaults_Zero_ErrorFlags_DcBusOverVoltage);
    void setMotorFaults_One_ErrorFlags_BadMotorPositionHallSequence(bool motorFaults_Zero_ErrorFlags_BadMotorPositionHallSequence);
    void setMotorFaults_One_ErrorFlags_WatchdogCausedLastReset(bool motorFaults_Zero_ErrorFlags_WatchdogCausedLastReset);
    void setMotorFaults_One_ErrorFlags_ConfigReadError(bool motorFaults_Zero_ErrorFlags_ConfigReadError);
    void setMotorFaults_One_ErrorFlags_Rail15VUnderVoltageLockOut(bool motorFaults_Zero_ErrorFlags_Rail15VUnderVoltageLockOut);
    void setMotorFaults_One_ErrorFlags_DesaturationFault(bool motorFaults_Zero_ErrorFlags_DesaturationFault);
    void setMotorFaults_One_LimitFlags_OutputVoltagePwm(bool motorFaults_Zero_LimitFlags_OutputVoltagePwm);
    void setMotorFaults_One_LimitFlags_MotorCurrent(bool motorFaults_Zero_LimitFlags_MotorCurrent);
    void setMotorFaults_One_LimitFlags_Velocity(bool motorFaults_Zero_LimitFlags_Velocity);
    void setMotorFaults_One_LimitFlags_BusCurrent(bool motorFaults_Zero_LimitFlags_BusCurrent);
    void setMotorFaults_One_LimitFlags_BusVoltageUpper(bool motorFaults_Zero_LimitFlags_BusVoltageUpper);
    void setMotorFaults_One_LimitFlags_BusVoltageLower(bool motorFaults_Zero_LimitFlags_BusVoltageLower);
    void setMotorFaults_One_LimitFlags_IpmOrMotorTemperature(bool motorFaults_Zero_LimitFlags_IpmOrMotorTemperature);
    void setMotorFaults_One_RxErrorCount(int motorFaults_Zero_RxErrorCount);
    void setMotorFaults_One_TxErrorCount(int motorFaults_Zero_TxErrorCount);

private:
    bool motorFaults_Zero_ErrorFlags_MotorOverSpeed_;
    bool motorFaults_Zero_ErrorFlags_SoftwareOverCurrent_;
    bool motorFaults_Zero_ErrorFlags_DcBusOverVoltage_;
    bool motorFaults_Zero_ErrorFlags_BadMotorPositionHallSequence_;
    bool motorFaults_Zero_ErrorFlags_WatchdogCausedLastReset_;
    bool motorFaults_Zero_ErrorFlags_ConfigReadError_;
    bool motorFaults_Zero_ErrorFlags_Rail15VUnderVoltageLockOut_;
    bool motorFaults_Zero_ErrorFlags_DesaturationFault_;
    bool motorFaults_Zero_LimitFlags_OutputVoltagePwm_;
    bool motorFaults_Zero_LimitFlags_MotorCurrent_;
    bool motorFaults_Zero_LimitFlags_Velocity_;
    bool motorFaults_Zero_LimitFlags_BusCurrent_;
    bool motorFaults_Zero_LimitFlags_BusVoltageUpper_;
    bool motorFaults_Zero_LimitFlags_BusVoltageLower_;
    bool motorFaults_Zero_LimitFlags_IpmOrMotorTemperature_;
    int motorFaults_Zero_RxErrorCount_;
    int motorFaults_Zero_TxErrorCount_;

    bool motorFaults_One_ErrorFlags_MotorOverSpeed_;
    bool motorFaults_One_ErrorFlags_SoftwareOverCurrent_;
    bool motorFaults_One_ErrorFlags_DcBusOverVoltage_;
    bool motorFaults_One_ErrorFlags_BadMotorPositionHallSequence_;
    bool motorFaults_One_ErrorFlags_WatchdogCausedLastReset_;
    bool motorFaults_One_ErrorFlags_ConfigReadError_;
    bool motorFaults_One_ErrorFlags_Rail15VUnderVoltageLockOut_;
    bool motorFaults_One_ErrorFlags_DesaturationFault_;
    bool motorFaults_One_LimitFlags_OutputVoltagePwm_;
    bool motorFaults_One_LimitFlags_MotorCurrent_;
    bool motorFaults_One_LimitFlags_Velocity_;
    bool motorFaults_One_LimitFlags_BusCurrent_;
    bool motorFaults_One_LimitFlags_BusVoltageUpper_;
    bool motorFaults_One_LimitFlags_BusVoltageLower_;
    bool motorFaults_One_LimitFlags_IpmOrMotorTemperature_;
    int motorFaults_One_RxErrorCount_;
    int motorFaults_One_TxErrorCount_;
};

