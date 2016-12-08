#include "MPPTData.h"
#include <QDebug>

MPPTData::MPPTData()
{
}

MPPTData::~MPPTData()
{
}

MPPT MPPTData::mpptZero() const
{
    return mpptZero_;
}

MPPT MPPTData::mpptOne() const
{
    return mpptOne_;
}

MPPT MPPTData::mpptTwo() const
{
    return mpptTwo_;
}


void MPPTData::setMpptZero(MPPT mpptZero)
{
    mpptZero_ = mpptZero;
    emit mpptZeroReceived(mpptZero_);
}

void MPPTData::setMpptOne(MPPT mpptOne)
{
    mpptOne_ = mpptOne;
    emit mpptOneReceived(mpptOne_);
}

void MPPTData::setMpptTwo(MPPT mpptTwo)
{
    mpptTwo_ = mpptTwo;
    emit mpptTwoReceived(mpptTwo_);
}
