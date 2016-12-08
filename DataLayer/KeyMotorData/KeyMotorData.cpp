#include "KeyMotorData.h"
#include <QDebug>

KeyMotorData::KeyMotorData()
{
}

KeyMotorData::~KeyMotorData()
{
}

KeyMotor KeyMotorData::motorZero() const
{
    return motorZero_;
}
KeyMotor KeyMotorData::motorOne() const
{
    return motorOne_;
}
void KeyMotorData::setMotorZero(KeyMotor motorZero)
{
    motorZero_ = motorZero;
    emit motorZeroReceived(motorZero_);
}
void KeyMotorData::setMotorOne(KeyMotor motorOne)
{
    motorOne_ = motorOne;
    emit motorOneReceived(motorOne_);
}