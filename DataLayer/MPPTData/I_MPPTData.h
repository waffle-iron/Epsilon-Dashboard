#pragma once

#include <QObject>
#include "DataLayer/MPPTData/MPPT.h"

class I_MPPTData : public QObject
{
    Q_OBJECT

public:
    virtual ~I_MPPTData() {}

    virtual MPPT mpptZero() const = 0;
    virtual MPPT mpptOne() const = 0;
    virtual MPPT mpptTwo() const = 0;

    virtual void setMpptZero(MPPT mpptZero) = 0;
    virtual void setMpptOne(MPPT mpptOne) = 0;
    virtual void setMpptTwo(MPPT mpptTwo) = 0;

signals:
    void mpptZeroReceived(MPPT mpptZero);
    void mpptOneReceived(MPPT mpptOne);
    void mpptTwoReceived(MPPT mpptTwo);
};
