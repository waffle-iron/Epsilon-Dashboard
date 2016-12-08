#include "MotorFaultsData.h"

MotorFaultsData::MotorFaultsData()
{
}

MotorFaultsData::~MotorFaultsData()
{
}

/* FaultData Gets */
ErrorFlags MotorFaultsData::motorOneErrorFlags() const
{
   return motorOneErrorFlags_;
}
LimitFlags MotorFaultsData::motorOneLimitFlags() const
{
   return motorOneLimitFlags_;
}
ErrorFlags MotorFaultsData::motorTwoErrorFlags() const
{
   return motorTwoErrorFlags_;
}
LimitFlags MotorFaultsData::motorTwoLimitFlags() const
{
   return motorTwoLimitFlags_;
}

/* FaultData Sets */
void MotorFaultsData::setMotorOneErrorFlags(ErrorFlags errorFlags)
{
   motorOneErrorFlags_ = errorFlags;
   emit motorOneErrorFlagsReceived(motorOneErrorFlags_);
}
void MotorFaultsData::setMotorOneLimitFlags(LimitFlags limitFlags)
{
   motorOneLimitFlags_ = limitFlags;
   emit motorOneLimitFlagsReceived(motorOneLimitFlags_);
}
void MotorFaultsData::setMotorTwoErrorFlags(ErrorFlags errorFlags)
{
   motorTwoErrorFlags_ = errorFlags;
   emit motorTwoErrorFlagsReceived(motorTwoErrorFlags_);
}
void MotorFaultsData::setMotorTwoLimitFlags(LimitFlags limitFlags)
{
   motorTwoLimitFlags_ = limitFlags;
   emit motorTwoLimitFlagsReceived(motorTwoLimitFlags_);
}
