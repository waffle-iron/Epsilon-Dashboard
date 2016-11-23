#pragma once

#include <QObject>

class I_KeyMotorData : public QObject
{
    Q_OBJECT

public:
    virtual ~I_KeyMotorData() {}

    virtual bool keyMotorZero_Alive() const = 0;
    virtual double keyMotorZero_SetCurrent() const = 0;
    virtual double keyMotorZero_SetVelocity() const = 0;
    virtual double keyMotorZero_BusCurrent() const = 0;
    virtual double keyMotorZero_BusVelocity() const = 0;
    virtual double keyMotorZero_VehicleVelocity() const = 0;

    virtual bool keyMotorOne_Alive() const = 0;
    virtual double keyMotorOne_SetCurrent() const = 0;
    virtual double keyMotorOne_SetVelocity() const = 0;
    virtual double keyMotorOne_BusCurrent() const = 0;
    virtual double keyMotorOne_BusVelocity() const = 0;
    virtual double keyMotorOne_VehicleVelocity() const = 0;

    virtual void setKeyMotorZero_Alive(bool keyMotorZero_Alive) = 0;
    virtual void setKeyMotorZero_SetCurrent(double keyMotorZero_SetCurrent) = 0;
    virtual void setKeyMotorZero_SetVelocity(double keyMotorZero_SetVelocity) = 0;
    virtual void setKeyMotorZero_BusCurrent(double keyMotorZero_BusCurrent) = 0;
    virtual void setKeyMotorZero_BusVelocity(double keyMotorZero_BusVelocity) = 0;
    virtual void setKeyMotorZero_VehicleVelocity(double keyMotorZero_VehicleVelocity) = 0;

    virtual void setKeyMotorOne_Alive(bool keyMotorOne_Alive) = 0;
    virtual void setKeyMotorOne_SetCurrent(double keyMotorOne_SetCurrent) = 0;
    virtual void setKeyMotorOne_SetVelocity(double keyMotorOne_SetVelocity) = 0;
    virtual void setKeyMotorOne_BusCurrent(double keyMotorOne_BusCurrent) = 0;
    virtual void setKeyMotorOne_BusVelocity(double keyMotorOne_BusVelocity) = 0;
    virtual void setKeyMotorOne_VehicleVelocity(double keyMotorOne_VehicleVelocity) = 0;

signals:
    void keyMotorZero_AliveReceived(bool keyMotorZero_Alive);
    void keyMotorZero_SetCurrentReceived(double keyMotorZero_SetCurrent);
    void keyMotorZero_SetVelocityReceived(double keyMotorZero_SetVelocity);
    void keyMotorZero_BusCurrentReceived(double keyMotorZero_BusCurrent);
    void keyMotorZero_BusVelocityReceived(double keyMotorZero_BusVelocity);
    void keyMotorZero_VehicleVelocityReceived(double keyMotorZero_VehicleVelocity);

    void keyMotorOne_AliveReceived(bool keyMotorOne_Alive);
    void keyMotorOne_SetCurrentReceived(double keyMotorOne_SetCurrent);
    void keyMotorOne_SetVelocityReceived(double keyMotorOne_SetVelocity);
    void keyMotorOne_BusCurrentReceived(double keyMotorOne_BusCurrent);
    void keyMotorOne_BusVelocityReceived(double keyMotorOne_BusVelocity);
    void keyMotorOne_VehicleVelocityReceived(double keyMotorOne_VehicleVelocity);
};
