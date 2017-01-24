#pragma once

#include <QObject>
#include "DataLayer/MotorFaultsData/I_MotorFaultsData.h"

class I_MotorFaultsData;

class MotorFaultsPresenter : public QObject
{
    Q_OBJECT
public:
    explicit MotorFaultsPresenter(const I_MotorFaultsData& motorFaultsData);

private:
    void relayMotorFaultsData();

    const I_MotorFaultsData& motorFaultsData_;

signals:
    void motorOneErrorFlagsReceived(ErrorFlags errorFlags);
    void motorOneLimitFlagsReceived(LimitFlags limitFlags);
    void motorTwoErrorFlagsReceived(ErrorFlags errorFlags);
    void motorTwoLimitFlagsReceived(LimitFlags limitFlags);
};
