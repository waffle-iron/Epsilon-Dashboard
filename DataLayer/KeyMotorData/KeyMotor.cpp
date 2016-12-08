#include "KeyMotor.h"

KeyMotor::KeyMotor()
{
}

KeyMotor::~KeyMotor()
{
}

bool KeyMotor::alive() const
{
	return alive_;
}
double KeyMotor::setCurrent() const
{
	return setCurrent_;
}
double KeyMotor::setVelocity() const
{
	return setVelocity_;
}
double KeyMotor::busCurrent() const
{
	return busCurrent_;
}
double KeyMotor::busVelocity() const
{
	return busVelocity_;
}
double KeyMotor::vehicleVelocity() const
{
	return vehicleVelocity_;
}

void KeyMotor::setAlive(bool alive)
{
	alive_ = alive;
}
void KeyMotor::setSetCurrent(double setCurrent)
{
	setCurrent_ = setCurrent;
}
void KeyMotor::setSetVelocity(double setVelocity)
{
	setVelocity_ = setVelocity;
}
void KeyMotor::setBusCurrent(double busCurrent)
{
	busCurrent_ = busCurrent;
}
void KeyMotor::setBusVelocity(double busVelocity)
{
	busVelocity_ = busVelocity;
}
void KeyMotor::setVehicleVelocity(double vehicleVelocity)
{
	vehicleVelocity_ = vehicleVelocity;
}
