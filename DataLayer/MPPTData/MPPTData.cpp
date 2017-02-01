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
    return mpptList[0];
}

MPPT MPPTData::mpptOne() const
{
    return mpptList[1];
}

MPPT MPPTData::mpptTwo() const
{
    return mpptList[2];
}


void MPPTData::setMpptZero(MPPT mpptZero)
{
    mpptList[0] = mpptZero;
    emit mpptZeroReceived(mpptList[0]);
}

void MPPTData::setMpptOne(MPPT mpptOne)
{
    mpptList[1] = mpptOne;
    emit mpptOneReceived(mpptList[1]);
}

void MPPTData::setMpptTwo(MPPT mpptTwo)
{
    mpptList[2] = mpptTwo;
    emit mpptTwoReceived(mpptList[2]);
}
