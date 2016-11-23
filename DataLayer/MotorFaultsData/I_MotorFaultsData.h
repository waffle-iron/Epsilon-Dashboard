#pragma once

#include <QObject>

class I_MotorFaultsData : public QObject
{
    Q_OBJECT

public:
    virtual ~I_MotorFaultsData() {}

    virtual bool motorFaults_Zero_ErrorFlags_MotorOverSpeed() const = 0;
    virtual bool motorFaults_Zero_ErrorFlags_SoftwareOverCurrent() const = 0;
    virtual bool motorFaults_Zero_ErrorFlags_DcBusOverVoltage() const = 0;
    virtual bool motorFaults_Zero_ErrorFlags_BadMotorPositionHallSequence() const = 0;
    virtual bool motorFaults_Zero_ErrorFlags_WatchdogCausedLastReset() const = 0;
    virtual bool motorFaults_Zero_ErrorFlags_ConfigReadError() const = 0;
    virtual bool motorFaults_Zero_ErrorFlags_Rail15VUnderVoltageLockOut() const = 0;
    virtual bool motorFaults_Zero_ErrorFlags_DesaturationFault() const = 0;
    virtual bool motorFaults_Zero_LimitFlags_OutputVoltagePwm() const = 0;
    virtual bool motorFaults_Zero_LimitFlags_MotorCurrent() const = 0;
    virtual bool motorFaults_Zero_LimitFlags_Velocity() const = 0;
    virtual bool motorFaults_Zero_LimitFlags_BusCurrent() const = 0;
    virtual bool motorFaults_Zero_LimitFlags_BusVoltageUpper() const = 0;
    virtual bool motorFaults_Zero_LimitFlags_BusVoltageLower() const = 0;
    virtual bool motorFaults_Zero_LimitFlags_IpmOrMotorTemperature() const = 0;
    virtual int motorFaults_Zero_RxErrorCount() const = 0;
    virtual int motorFaults_Zero_TxErrorCount() const = 0;

    virtual bool motorFaults_One_ErrorFlags_MotorOverSpeed() const = 0;
    virtual bool motorFaults_One_ErrorFlags_SoftwareOverCurrent() const = 0;
    virtual bool motorFaults_One_ErrorFlags_DcBusOverVoltage() const = 0;
    virtual bool motorFaults_One_ErrorFlags_BadMotorPositionHallSequence() const = 0;
    virtual bool motorFaults_One_ErrorFlags_WatchdogCausedLastReset() const = 0;
    virtual bool motorFaults_One_ErrorFlags_ConfigReadError() const = 0;
    virtual bool motorFaults_One_ErrorFlags_Rail15VUnderVoltageLockOut() const = 0;
    virtual bool motorFaults_One_ErrorFlags_DesaturationFault() const = 0;
    virtual bool motorFaults_One_LimitFlags_OutputVoltagePwm() const = 0;
    virtual bool motorFaults_One_LimitFlags_MotorCurrent() const = 0;
    virtual bool motorFaults_One_LimitFlags_Velocity() const = 0;
    virtual bool motorFaults_One_LimitFlags_BusCurrent() const = 0;
    virtual bool motorFaults_One_LimitFlags_BusVoltageUpper() const = 0;
    virtual bool motorFaults_One_LimitFlags_BusVoltageLower() const = 0;
    virtual bool motorFaults_One_LimitFlags_IpmOrMotorTemperature() const = 0;
    virtual int motorFaults_One_RxErrorCount() const = 0;
    virtual int motorFaults_One_TxErrorCount() const = 0;

    virtual void setMotorFaults_Zero_ErrorFlags_MotorOverSpeed(bool motorFaults_Zero_ErrorFlags_MotorOverSpeed) = 0;
    virtual void setMotorFaults_Zero_ErrorFlags_SoftwareOverCurrent(bool motorFaults_Zero_ErrorFlags_SoftwareOverCurrent) = 0;
    virtual void setMotorFaults_Zero_ErrorFlags_DcBusOverVoltage(bool motorFaults_Zero_ErrorFlags_DcBusOverVoltage) = 0;
    virtual void setMotorFaults_Zero_ErrorFlags_BadMotorPositionHallSequence(bool motorFaults_Zero_ErrorFlags_BadMotorPositionHallSequence) = 0;
    virtual void setMotorFaults_Zero_ErrorFlags_WatchdogCausedLastReset(bool motorFaults_Zero_ErrorFlags_WatchdogCausedLastReset) = 0;
    virtual void setMotorFaults_Zero_ErrorFlags_ConfigReadError(bool motorFaults_Zero_ErrorFlags_ConfigReadError) = 0;
    virtual void setMotorFaults_Zero_ErrorFlags_Rail15VUnderVoltageLockOut(bool motorFaults_Zero_ErrorFlags_Rail15VUnderVoltageLockOut) = 0;
    virtual void setMotorFaults_Zero_ErrorFlags_DesaturationFault(bool motorFaults_Zero_ErrorFlags_DesaturationFault) = 0;
    virtual void setMotorFaults_Zero_LimitFlags_OutputVoltagePwm(bool motorFaults_Zero_LimitFlags_OutputVoltagePwm) = 0;
    virtual void setMotorFaults_Zero_LimitFlags_MotorCurrent(bool motorFaults_Zero_LimitFlags_MotorCurrent) = 0;
    virtual void setMotorFaults_Zero_LimitFlags_Velocity(bool motorFaults_Zero_LimitFlags_Velocity) = 0;
    virtual void setMotorFaults_Zero_LimitFlags_BusCurrent(bool motorFaults_Zero_LimitFlags_BusCurrent) = 0;
    virtual void setMotorFaults_Zero_LimitFlags_BusVoltageUpper(bool motorFaults_Zero_LimitFlags_BusVoltageUpper) = 0;
    virtual void setMotorFaults_Zero_LimitFlags_BusVoltageLower(bool motorFaults_Zero_LimitFlags_BusVoltageLower) = 0;
    virtual void setMotorFaults_Zero_LimitFlags_IpmOrMotorTemperature(bool motorFaults_Zero_LimitFlags_IpmOrMotorTemperature) = 0;
    virtual void setMotorFaults_Zero_RxErrorCount(int motorFaults_Zero_RxErrorCount) = 0;
    virtual void setMotorFaults_Zero_TxErrorCount(int motorFaults_Zero_TxErrorCount) = 0;

    virtual void setMotorFaults_One_ErrorFlags_MotorOverSpeed(bool motorFaults_Zero_ErrorFlags_MotorOverSpeed) = 0;
    virtual void setMotorFaults_One_ErrorFlags_SoftwareOverCurrent(bool motorFaults_Zero_ErrorFlags_SoftwareOverCurrent) = 0;
    virtual void setMotorFaults_One_ErrorFlags_DcBusOverVoltage(bool motorFaults_Zero_ErrorFlags_DcBusOverVoltage) = 0;
    virtual void setMotorFaults_One_ErrorFlags_BadMotorPositionHallSequence(bool motorFaults_Zero_ErrorFlags_BadMotorPositionHallSequence) = 0;
    virtual void setMotorFaults_One_ErrorFlags_WatchdogCausedLastReset(bool motorFaults_Zero_ErrorFlags_WatchdogCausedLastReset) = 0;
    virtual void setMotorFaults_One_ErrorFlags_ConfigReadError(bool motorFaults_Zero_ErrorFlags_ConfigReadError) = 0;
    virtual void setMotorFaults_One_ErrorFlags_Rail15VUnderVoltageLockOut(bool motorFaults_Zero_ErrorFlags_Rail15VUnderVoltageLockOut) = 0;
    virtual void setMotorFaults_One_ErrorFlags_DesaturationFault(bool motorFaults_Zero_ErrorFlags_DesaturationFault) = 0;
    virtual void setMotorFaults_One_LimitFlags_OutputVoltagePwm(bool motorFaults_Zero_LimitFlags_OutputVoltagePwm) = 0;
    virtual void setMotorFaults_One_LimitFlags_MotorCurrent(bool motorFaults_Zero_LimitFlags_MotorCurrent) = 0;
    virtual void setMotorFaults_One_LimitFlags_Velocity(bool motorFaults_Zero_LimitFlags_Velocity) = 0;
    virtual void setMotorFaults_One_LimitFlags_BusCurrent(bool motorFaults_Zero_LimitFlags_BusCurrent) = 0;
    virtual void setMotorFaults_One_LimitFlags_BusVoltageUpper(bool motorFaults_Zero_LimitFlags_BusVoltageUpper) = 0;
    virtual void setMotorFaults_One_LimitFlags_BusVoltageLower(bool motorFaults_Zero_LimitFlags_BusVoltageLower) = 0;
    virtual void setMotorFaults_One_LimitFlags_IpmOrMotorTemperature(bool motorFaults_Zero_LimitFlags_IpmOrMotorTemperature) = 0;
    virtual void setMotorFaults_One_RxErrorCount(int motorFaults_Zero_RxErrorCount) = 0;
    virtual void setMotorFaults_One_TxErrorCount(int motorFaults_Zero_TxErrorCount) = 0;

signals:
    void motorFaults_Zero_ErrorFlags_MotorOverSpeedReceived(bool motorFaults_Zero_ErrorFlags_MotorOverSpeed);
    void motorFaults_Zero_ErrorFlags_SoftwareOverCurrentReceived(bool motorFaults_Zero_ErrorFlags_SoftwareOverCurrent);
    void motorFaults_Zero_ErrorFlags_DcBusOverVoltageReceived(bool motorFaults_Zero_ErrorFlags_DcBusOverVoltage);
    void motorFaults_Zero_ErrorFlags_BadMotorPositionHallSequenceReceived(bool motorFaults_Zero_ErrorFlags_BadMotorPositionHallSequence);
    void motorFaults_Zero_ErrorFlags_WatchdogCausedLastResetReceived(bool motorFaults_Zero_ErrorFlags_WatchdogCausedLastReset);
    void motorFaults_Zero_ErrorFlags_ConfigReadErrorReceived(bool motorFaults_Zero_ErrorFlags_ConfigReadError);
    void motorFaults_Zero_ErrorFlags_Rail15VUnderVoltageLockOutReceived(bool motorFaults_Zero_ErrorFlags_Rail15VUnderVoltageLockOut);
    void motorFaults_Zero_ErrorFlags_DesaturationFaultReceived(bool motorFaults_Zero_ErrorFlags_DesaturationFault);
    void motorFaults_Zero_LimitFlags_OutputVoltagePwmReceived(bool motorFaults_Zero_LimitFlags_OutputVoltagePwm);
    void motorFaults_Zero_LimitFlags_MotorCurrentReceived(bool motorFaults_Zero_LimitFlags_MotorCurrent);
    void motorFaults_Zero_LimitFlags_VelocityReceived(bool motorFaults_Zero_LimitFlags_Velocity);
    void motorFaults_Zero_LimitFlags_BusCurrentReceived(bool motorFaults_Zero_LimitFlags_BusCurrent);
    void motorFaults_Zero_LimitFlags_BusVoltageUpperReceived(bool motorFaults_Zero_LimitFlags_BusVoltageUpper);
    void motorFaults_Zero_LimitFlags_BusVoltageLowerReceived(bool motorFaults_Zero_LimitFlags_BusVoltageLower);
    void motorFaults_Zero_LimitFlags_IpmOrMotorTemperatureReceived(bool motorFaults_Zero_LimitFlags_IpmOrMotorTemperature);
    void motorFaults_Zero_RxErrorCountReceived(int motorFaults_Zero_RxErrorCount);
    void motorFaults_Zero_TxErrorCountReceived(int motorFaults_Zero_TxErrorCount);

    void motorFaults_One_ErrorFlags_MotorOverSpeedReceived(bool motorFaults_Zero_ErrorFlags_MotorOverSpeed);
    void motorFaults_One_ErrorFlags_SoftwareOverCurrentReceived(bool motorFaults_Zero_ErrorFlags_SoftwareOverCurrent);
    void motorFaults_One_ErrorFlags_DcBusOverVoltageReceived(bool motorFaults_Zero_ErrorFlags_DcBusOverVoltage);
    void motorFaults_One_ErrorFlags_BadMotorPositionHallSequenceReceived(bool motorFaults_Zero_ErrorFlags_BadMotorPositionHallSequence);
    void motorFaults_One_ErrorFlags_WatchdogCausedLastResetReceived(bool motorFaults_Zero_ErrorFlags_WatchdogCausedLastReset);
    void motorFaults_One_ErrorFlags_ConfigReadErrorReceived(bool motorFaults_Zero_ErrorFlags_ConfigReadError);
    void motorFaults_One_ErrorFlags_Rail15VUnderVoltageLockOutReceived(bool motorFaults_Zero_ErrorFlags_Rail15VUnderVoltageLockOut);
    void motorFaults_One_ErrorFlags_DesaturationFaultReceived(bool motorFaults_Zero_ErrorFlags_DesaturationFault);
    void motorFaults_One_LimitFlags_OutputVoltagePwmReceived(bool motorFaults_Zero_LimitFlags_OutputVoltagePwm);
    void motorFaults_One_LimitFlags_MotorCurrentReceived(bool motorFaults_Zero_LimitFlags_MotorCurrent);
    void motorFaults_One_LimitFlags_VelocityReceived(bool motorFaults_Zero_LimitFlags_Velocity);
    void motorFaults_One_LimitFlags_BusCurrentReceived(bool motorFaults_Zero_LimitFlags_BusCurrent);
    void motorFaults_One_LimitFlags_BusVoltageUpperReceived(bool motorFaults_Zero_LimitFlags_BusVoltageUpper);
    void motorFaults_One_LimitFlags_BusVoltageLowerReceived(bool motorFaults_Zero_LimitFlags_BusVoltageLower);
    void motorFaults_One_LimitFlags_IpmOrMotorTemperatureReceived(bool motorFaults_Zero_LimitFlags_IpmOrMotorTemperature);
    void motorFaults_One_RxErrorCountReceived(int motorFaults_Zero_RxErrorCount);
    void motorFaults_One_TxErrorCountReceived(int motorFaults_Zero_TxErrorCount);
};
