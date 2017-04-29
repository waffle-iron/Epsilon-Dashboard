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
    return mpptList_.at(0);
}

Mppt MpptData::mpptOne() const
{
    return mpptList_.at(1);
}

Mppt MpptData::mpptTwo() const
{
    return mpptList_.at(2);
}


void MpptData::setMpptZero(Mppt mpptZero)
{
    mpptList_.append(mpptZero);
    emit mpptZeroReceived(mpptList_.at(0));
}

void MpptData::setMpptOne(Mppt mpptOne)
{
    mpptList_.append(mpptOne);
    emit mpptOneReceived(mpptList_.at(1));
}

void MpptData::setMpptTwo(Mppt mpptTwo)
{
    mpptList_.append(mpptTwo);
    emit mpptTwoReceived(mpptList_.at(2));
}
