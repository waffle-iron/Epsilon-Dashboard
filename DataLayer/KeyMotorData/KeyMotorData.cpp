#include "KeyMotorData.h"
#include <QDebug>

KeyMotorData::KeyMotorData()
{
}

KeyMotorData::~KeyMotorData()
{
}


bool KeyMotorData::keyMotorZero_Alive() const
{
    return keyMotorZero_Alive_;
}
double KeyMotorData::keyMotorZero_SetCurrent() const
{
    return keyMotorZero_SetCurrent_;
}
double KeyMotorData::keyMotorZero_SetVelocity() const
{
    return keyMotorZero_SetVelocity_;
}
double KeyMotorData::keyMotorZero_BusCurrent() const
{
    return keyMotorZero_BusCurrent_;
}
double KeyMotorData::keyMotorZero_BusVelocity() const
{
    return keyMotorZero_BusVelocity_;
}
double KeyMotorData::keyMotorZero_VehicleVelocity() const
{
    return keyMotorZero_VehicleVelocity_;
}

bool KeyMotorData::keyMotorOne_Alive() const
{
    return keyMotorOne_Alive_;
}
double KeyMotorData::keyMotorOne_SetCurrent() const
{
    return keyMotorOne_SetCurrent_;
}
double KeyMotorData::keyMotorOne_SetVelocity() const
{
    return keyMotorOne_SetVelocity_;
}
double KeyMotorData::keyMotorOne_BusCurrent() const
{
    return keyMotorOne_BusCurrent_;
}
double KeyMotorData::keyMotorOne_BusVelocity() const
{
    return keyMotorOne_BusVelocity_;
}
double KeyMotorData::keyMotorOne_VehicleVelocity() const
{
    return keyMotorOne_VehicleVelocity_;
}

void KeyMotorData::setKeyMotorZero_Alive(bool keyMotorZero_Alive)
{
    keyMotorZero_Alive_ = keyMotorZero_Alive;
    emit keyMotorZero_AliveReceived(keyMotorZero_Alive_);
}
void KeyMotorData::setKeyMotorZero_SetCurrent(double keyMotorZero_SetCurrent)
{
    keyMotorZero_SetCurrent_ = keyMotorZero_SetCurrent;
    emit keyMotorZero_SetCurrentReceived(keyMotorZero_SetCurrent_);
}
void KeyMotorData::setKeyMotorZero_SetVelocity(double keyMotorZero_SetVelocity)
{
    keyMotorZero_SetVelocity_ = keyMotorZero_SetVelocity;
    emit keyMotorZero_SetVelocityReceived(keyMotorZero_SetVelocity_);
}
void KeyMotorData::setKeyMotorZero_BusCurrent(double keyMotorZero_BusCurrent)
{
    keyMotorZero_BusCurrent_ = keyMotorZero_BusCurrent;
    emit keyMotorZero_BusCurrentReceived(keyMotorZero_BusCurrent_);
}
void KeyMotorData::setKeyMotorZero_BusVelocity(double keyMotorZero_BusVelocity)
{
    keyMotorZero_BusVelocity_ = keyMotorZero_BusVelocity;
    emit keyMotorZero_BusVelocityReceived(keyMotorZero_BusVelocity_);
}
void KeyMotorData::setKeyMotorZero_VehicleVelocity(double keyMotorZero_VehicleVelocity)
{
    keyMotorZero_VehicleVelocity_ = keyMotorZero_VehicleVelocity;
    emit keyMotorZero_VehicleVelocityReceived(keyMotorZero_VehicleVelocity_);
}

void KeyMotorData::setKeyMotorOne_Alive(bool keyMotorOne_Alive)
{
    keyMotorOne_Alive_ = keyMotorOne_Alive;
    emit keyMotorOne_AliveReceived(keyMotorOne_Alive_);
}
void KeyMotorData::setKeyMotorOne_SetCurrent(double keyMotorOne_SetCurrent)
{
    keyMotorOne_SetCurrent_ = keyMotorOne_SetCurrent;
    emit keyMotorOne_SetCurrentReceived(keyMotorOne_SetCurrent_);
}
void KeyMotorData::setKeyMotorOne_SetVelocity(double keyMotorOne_SetVelocity)
{
    keyMotorOne_SetVelocity_ = keyMotorOne_SetVelocity;
    emit keyMotorOne_SetVelocityReceived(keyMotorOne_SetVelocity_);
}
void KeyMotorData::setKeyMotorOne_BusCurrent(double keyMotorOne_BusCurrent)
{
    keyMotorOne_BusCurrent_ = keyMotorOne_BusCurrent;
    emit keyMotorOne_BusCurrentReceived(keyMotorOne_BusCurrent_);
}
void KeyMotorData::setKeyMotorOne_BusVelocity(double keyMotorOne_BusVelocity)
{
    keyMotorOne_BusVelocity_ = keyMotorOne_BusVelocity;
    emit keyMotorOne_BusVelocityReceived(keyMotorOne_BusVelocity_);
}
void KeyMotorData::setKeyMotorOne_VehicleVelocity(double keyMotorOne_VehicleVelocity)
{
    keyMotorOne_VehicleVelocity_ = keyMotorOne_VehicleVelocity;
    emit keyMotorOne_VehicleVelocityReceived(keyMotorOne_VehicleVelocity_);
}
