#pragma once

#include "I_MPPTData.h"

class MPPTData : public I_MPPTData
{
public:
    MPPTData();
    virtual ~MPPTData();

    bool MPPT_Zero_Alive() const;
    double MPPT_Zero_ArrayVoltage() const;
    double MPPT_Zero_ArrayCurrent() const;
    double MPPT_Zero_BatteryVoltage() const;
    double MPPT_Zero_Temperature() const;
    bool MPPT_One_Alive() const;
    double MPPT_One_ArrayVoltage() const;
    double MPPT_One_ArrayCurrent() const;
    double MPPT_One_BatteryVoltage() const;
    double MPPT_One_Temperature() const;
    bool MPPT_Two_Alive() const;
    double MPPT_Two_ArrayVoltage() const;
    double MPPT_Two_ArrayCurrent() const;
    double MPPT_Two_BatteryVoltage() const;
    double MPPT_Two_Temperature() const;

    void setMPPT_Zero_Alive(bool MPPT_Zero_Alive);
    void setMPPT_Zero_ArrayVoltage(double MPPT_Zero_ArrayVoltage);
    void setMPPT_Zero_ArrayCurrent(double MPPT_Zero_ArrayCurrent);
    void setMPPT_Zero_BatteryVoltage(double MPPT_Zero_BatteryVoltage);
    void setMPPT_Zero_Temperature(double MPPT_Zero_Temperature);
    void setMPPT_One_Alive(bool MPPT_One_Alive);
    void setMPPT_One_ArrayVoltage(double MPPT_One_ArrayVoltage);
    void setMPPT_One_ArrayCurrent(double MPPT_One_ArrayCurrent);
    void setMPPT_One_BatteryVoltage(double MPPT_One_BatteryVoltage);
    void setMPPT_One_Temperature(double MPPT_One_Temperature);
    void setMPPT_Two_Alive(bool MPPT_Two_Alive);
    void setMPPT_Two_ArrayVoltage(double MPPT_Two_ArrayVoltage);
    void setMPPT_Two_ArrayCurrent(double MPPT_Two_ArrayCurrent);
    void setMPPT_Two_BatteryVoltage(double MPPT_Two_BatteryVoltage);
    void setMPPT_Two_Temperature(double MPPT_Two_Temperature);

private:
    bool MPPT_Zero_Alive_;
    double MPPT_Zero_ArrayVoltage_;
    double MPPT_Zero_ArrayCurrent_;
    double MPPT_Zero_BatteryVoltage_;
    double MPPT_Zero_Temperature_;
    bool MPPT_One_Alive_;
    double MPPT_One_ArrayVoltage_;
    double MPPT_One_ArrayCurrent_;
    double MPPT_One_BatteryVoltage_;
    double MPPT_One_Temperature_;
    bool MPPT_Two_Alive_;
    double MPPT_Two_ArrayVoltage_;
    double MPPT_Two_ArrayCurrent_;
    double MPPT_Two_BatteryVoltage_;
    double MPPT_Two_Temperature_;
};

