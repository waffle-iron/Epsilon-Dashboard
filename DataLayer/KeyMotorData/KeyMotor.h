#pragma once

#include <QString>

class KeyMotor
{
public:
    KeyMotor();

    virtual ~KeyMotor();

   	bool alive() const;
    double setCurrent() const;
    double setVelocity() const;
    double busCurrent() const;
    double busVelocity() const;
    double vehicleVelocity() const;

   	void setAlive(bool alive);
    void setSetCurrent(double setCurrent);
    void setSetVelocity(double setVelocity);
    void setBusCurrent(double busCurrent);
    void setBusVelocity(double busVelocity);
    void setVehicleVelocity(double vehicleVelocity);

private:
	bool alive_;
	double setCurrent_;
	double setVelocity_;
	double busCurrent_;
	double busVelocity_;
	double vehicleVelocity_;
};
