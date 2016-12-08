#include "MPPT.h"

MPPT::MPPT()
{
}

MPPT::~MPPT()
{
}

bool MPPT::alive() const
{
	return alive_;
}
double MPPT::arrayVoltage() const
{
	return arrayVoltage_;
}
double MPPT::arrayCurrent() const
{
	return arrayCurrent_;
}
double MPPT::batteryVoltage() const
{
	return batteryVoltage_;
}
double MPPT::temperature() const
{
	return temperature_;
}

void MPPT::setAlive(bool alive)
{
	alive_ = alive;
}
void MPPT::setArrayVoltage(double arrayVoltage)
{
	arrayVoltage_ = arrayVoltage;
}
void MPPT::setArrayCurrent(double arrayCurrent)
{
	arrayCurrent_ = arrayCurrent;
}
void MPPT::setBatteryVoltage(double batteryVoltage)
{
	batteryVoltage_ = batteryVoltage;
}
void MPPT::setTemperature(double temperature)
{
	temperature_ = temperature;
}