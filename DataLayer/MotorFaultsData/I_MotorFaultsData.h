#pragma once

#include <QObject>

#include "DataLayer/MotorFaultsData/ErrorFlags.h"
#include "DataLayer/MotorFaultsData/LimitFlags.h"

class I_MotorFaultsData : public QObject
{
    Q_OBJECT
public:
    virtual ~I_MotorFaultsData() {}

    /* FaultData Gets */
    virtual ErrorFlags motorOneErrorFlags() const = 0;
    virtual LimitFlags motorOneLimitFlags() const = 0;
    virtual ErrorFlags motorTwoErrorFlags() const = 0;
    virtual LimitFlags motorTwoLimitFlags() const = 0;

    /* FaultData Sets */
    virtual void setMotorOneErrorFlags(ErrorFlags errorFlags) = 0;
    virtual void setMotorOneLimitFlags(LimitFlags limitFlags) = 0;
    virtual void setMotorTwoErrorFlags(ErrorFlags errorFlags) = 0;
    virtual void setMotorTwoLimitFlags(LimitFlags limitFlags) = 0;

signals:
    void motorOneErrorFlagsReceived(ErrorFlags errorFlags);
    void motorOneLimitFlagsReceived(LimitFlags limitFlags);
    void motorTwoErrorFlagsReceived(ErrorFlags errorFlags);
    void motorTwoLimitFlagsReceived(LimitFlags limitFlags);
};
