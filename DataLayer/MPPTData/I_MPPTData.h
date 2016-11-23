#pragma once

#include <QObject>

class I_MPPTData : public QObject
{
    Q_OBJECT

public:
    virtual ~I_MPPTData() {}

    virtual bool MPPT_Zero_Alive() const = 0;
    virtual double MPPT_Zero_ArrayVoltage() const = 0;
    virtual double MPPT_Zero_ArrayCurrent() const = 0;
    virtual double MPPT_Zero_BatteryVoltage() const = 0;
    virtual double MPPT_Zero_Temperature() const = 0;
    virtual bool MPPT_One_Alive() const = 0;
    virtual double MPPT_One_ArrayVoltage() const = 0;
    virtual double MPPT_One_ArrayCurrent() const = 0;
    virtual double MPPT_One_BatteryVoltage() const = 0;
    virtual double MPPT_One_Temperature() const = 0;
    virtual bool MPPT_Two_Alive() const = 0;
    virtual double MPPT_Two_ArrayVoltage() const = 0;
    virtual double MPPT_Two_ArrayCurrent() const = 0;
    virtual double MPPT_Two_BatteryVoltage() const = 0;
    virtual double MPPT_Two_Temperature() const = 0;

    virtual void setMPPT_Zero_Alive(bool MPPT_Zero_Alive) = 0;
    virtual void setMPPT_Zero_ArrayVoltage(double MPPT_Zero_ArrayVoltage) = 0;
    virtual void setMPPT_Zero_ArrayCurrent(double MPPT_Zero_ArrayCurrent) = 0;
    virtual void setMPPT_Zero_BatteryVoltage(double MPPT_Zero_BatteryVoltage) = 0;
    virtual void setMPPT_Zero_Temperature(double MPPT_Zero_Temperature) = 0;
    virtual void setMPPT_One_Alive(bool MPPT_One_Alive) = 0;
    virtual void setMPPT_One_ArrayVoltage(double MPPT_One_ArrayVoltage) = 0;
    virtual void setMPPT_One_ArrayCurrent(double MPPT_One_ArrayCurrent) = 0;
    virtual void setMPPT_One_BatteryVoltage(double MPPT_One_BatteryVoltage) = 0;
    virtual void setMPPT_One_Temperature(double MPPT_One_Temperature) = 0;
    virtual void setMPPT_Two_Alive(bool MPPT_Two_Alive) = 0;
    virtual void setMPPT_Two_ArrayVoltage(double MPPT_Two_ArrayVoltage) = 0;
    virtual void setMPPT_Two_ArrayCurrent(double MPPT_Two_ArrayCurrent) = 0;
    virtual void setMPPT_Two_BatteryVoltage(double MPPT_Two_BatteryVoltage) = 0;
    virtual void setMPPT_Two_Temperature(double MPPT_Two_Temperature) = 0;

signals:
    void MPPT_Zero_AliveReceived(bool MPPT_Zero_Alive);
    void MPPT_Zero_ArrayVoltageReceived(double MPPT_Zero_ArrayVoltage);
    void MPPT_Zero_ArrayCurrentReceived(double MPPT_Zero_ArrayCurrent);
    void MPPT_Zero_BatteryVoltageReceived(double MPPT_Zero_BatteryVoltage);
    void MPPT_Zero_TemperatureReceived(double MPPT_Zero_Temperature);
    void MPPT_One_AliveReceived(bool MPPT_One_Alive);
    void MPPT_One_ArrayVoltageReceived(double MPPT_One_ArrayVoltage);
    void MPPT_One_ArrayCurrentReceived(double MPPT_One_ArrayCurrent);
    void MPPT_One_BatteryVoltageReceived(double MPPT_One_BatteryVoltage);
    void MPPT_One_TemperatureReceived(double MPPT_One_Temperature);
    void MPPT_Two_AliveReceived(bool MPPT_Two_Alive);
    void MPPT_Two_ArrayVoltageReceived(double MPPT_Two_ArrayVoltage);
    void MPPT_Two_ArrayCurrentReceived(double MPPT_Two_ArrayCurrent);
    void MPPT_Two_BatteryVoltageReceived(double MPPT_Two_BatteryVoltage);
    void MPPT_Two_TemperatureReceived(double MPPT_Two_Temperature);
};
