#include "MpptData.h"
#include <QDebug>

MpptData::MpptData()
{
        mpptList_.reserve(3);
}

MpptData::~MpptData()
{
}

Mppt MpptData::getMppt(int i) const
{
    return mpptList_.at(i);
}

void MpptData::setMppt(int i, Mppt mppt)
{
    mpptList_.replace(i, mppt);
    emit mpptReceived(i, mpptList_.at(i));
}
