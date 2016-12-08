#include "MotorFaultsPresenter.h"


MotorFaultsPresenter::MotorFaultsPresenter(const I_MotorFaultsData& motorFaultsData)
: motorFaultsData_ (motorFaultsData)
{
   relayMotorFaultsData();
}

void MotorFaultsPresenter::relayMotorFaultsData()
{
   connect(&motorFaultsData_, SIGNAL(motorOneErrorFlagsReceived(ErrorFlags)),
         this, SIGNAL(motorOneErrorFlagsReceived(ErrorFlags)));
   connect(&motorFaultsData_, SIGNAL(motorOneLimitFlagsReceived(LimitFlags)),
         this, SIGNAL(motorOneLimitFlagsReceived(LimitFlags)));
   connect(&motorFaultsData_, SIGNAL(motorTwoErrorFlagsReceived(ErrorFlags)),
         this, SIGNAL(motorTwoErrorFlagsReceived(ErrorFlags)));
   connect(&motorFaultsData_, SIGNAL(motorTwoLimitFlagsReceived(LimitFlags)),
         this, SIGNAL(motorTwoLimitFlagsReceived(LimitFlags)));
}
