#pragma once

#include "I_KeyMotorData.h"

class KeyMotorData : public I_KeyMotorData
{
public:
    KeyMotorData();
    virtual ~KeyMotorData();

    bool keyMotorZero_Alive() const;
    double keyMotorZero_SetCurrent() const;
    double keyMotorZero_SetVelocity() const;
    double keyMotorZero_BusCurrent() const;
    double keyMotorZero_BusVelocity() const;
    double keyMotorZero_VehicleVelocity() const;

    bool keyMotorOne_Alive() const;
    double keyMotorOne_SetCurrent() const;
    double keyMotorOne_SetVelocity() const;
    double keyMotorOne_BusCurrent() const;
    double keyMotorOne_BusVelocity() const;
    double keyMotorOne_VehicleVelocity() const;

    void setKeyMotorZero_Alive(bool keyMotorZero_Alive);
    void setKeyMotorZero_SetCurrent(double keyMotorZero_SetCurrent);
    void setKeyMotorZero_SetVelocity(double keyMotorZero_SetVelocity);
    void setKeyMotorZero_BusCurrent(double keyMotorZero_BusCurrent);
    void setKeyMotorZero_BusVelocity(double keyMotorZero_BusVelocity);
    void setKeyMotorZero_VehicleVelocity(double keyMotorZero_VehicleVelocity);

    void setKeyMotorOne_Alive(bool keyMotorOne_Alive);
    void setKeyMotorOne_SetCurrent(double keyMotorOne_SetCurrent);
    void setKeyMotorOne_SetVelocity(double keyMotorOne_SetVelocity);
    void setKeyMotorOne_BusCurrent(double keyMotorOne_BusCurrent);
    void setKeyMotorOne_BusVelocity(double keyMotorOne_BusVelocity);
    void setKeyMotorOne_VehicleVelocity(double keyMotorOne_VehicleVelocity);

private:
    bool keyMotorZero_Alive_;
    double keyMotorZero_SetCurrent_;
    double keyMotorZero_SetVelocity_;
    double keyMotorZero_BusCurrent_;
    double keyMotorZero_BusVelocity_;
    double keyMotorZero_VehicleVelocity_;

    bool keyMotorOne_Alive_;
    double keyMotorOne_SetCurrent_;
    double keyMotorOne_SetVelocity_;
    double keyMotorOne_BusCurrent_;
    double keyMotorOne_BusVelocity_;
    double keyMotorOne_VehicleVelocity_;
};

