#include "MpptData.h"
#include <QDebug>

MpptData::MpptData()
{
}

MpptData::~MpptData()
{
}

Mppt MpptData::mpptZero() const
{
    return mpptList[0];
}

Mppt MpptData::mpptOne() const
{
    return mpptList[1];
}

Mppt MpptData::mpptTwo() const
{
    return mpptList[2];
}


void MpptData::setMpptZero(Mppt mpptZero)
{
    mpptList[0] = mpptZero;
    emit mpptZeroReceived(mpptList[0]);
}

void MpptData::setMpptOne(Mppt mpptOne)
{
    mpptList[1] = mpptOne;
    emit mpptOneReceived(mpptList[1]);
}

void MpptData::setMpptTwo(Mppt mpptTwo)
{
    mpptList[2] = mpptTwo;
    emit mpptTwoReceived(mpptList[2]);
}
