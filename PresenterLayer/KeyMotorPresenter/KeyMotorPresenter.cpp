#include "KeyMotorPresenter.h"
#include "../../DataLayer/KeyMotorData/I_KeyMotorData.h"

KeyMotorPresenter::KeyMotorPresenter(const I_KeyMotorData& keyMotorData)
    : keyMotorData_(keyMotorData)
{
    relayKeyMotorData();
}

void KeyMotorPresenter::relayKeyMotorData()
{
connect(&keyMotorData_, SIGNAL(motorZeroReceived(KeyMotor)),
	this, SIGNAL(motorZeroReceived(KeyMotor)));
connect(&keyMotorData_, SIGNAL(motorOneReceived(KeyMotor)),
	this, SIGNAL(motorOneReceived(KeyMotor)));
}
