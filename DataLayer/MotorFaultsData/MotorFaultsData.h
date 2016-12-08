#pragma once

#include "I_MotorFaultsData.h"

class ErrorFlags;
class LimitFlags;

class MotorFaultsData : public I_MotorFaultsData
{
public:
	MotorFaultsData();
	virtual ~MotorFaultsData();

	/* FaultData Gets */
	ErrorFlags motorOneErrorFlags() const;
	LimitFlags motorOneLimitFlags() const;
	ErrorFlags motorTwoErrorFlags() const;
	LimitFlags motorTwoLimitFlags() const;

	/* FaultData Sets */
	void setMotorOneErrorFlags(ErrorFlags errorFlags);
	void setMotorOneLimitFlags(LimitFlags limitFlags);
	void setMotorTwoErrorFlags(ErrorFlags errorFlags);
	void setMotorTwoLimitFlags(LimitFlags limitFlags);

private:
	ErrorFlags motorOneErrorFlags_;
	LimitFlags motorOneLimitFlags_;
	ErrorFlags motorTwoErrorFlags_;
	LimitFlags motorTwoLimitFlags_;
};
