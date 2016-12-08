#include "CMUData.h"
#include <QDebug>

CMUData::CMUData()
{
}

CMUData::~CMUData()
{
}

CMU CMUData::cmuZero() const
{
    return cmuZero_;
}
CMU CMUData::cmuOne() const
{
    return cmuOne_;
}
CMU CMUData::cmuTwo() const
{
    return cmuTwo_;
}
CMU CMUData::cmuThree() const
{
    return cmuThree_;
}

void CMUData::setCmuZero(CMU cmuZero)
{
    cmuZero_ = cmuZero;
    emit cmuZeroReceived(cmuZero_);
}
void CMUData::setCmuOne(CMU cmuOne)
{
    cmuOne_ = cmuOne;
    emit cmuOneReceived(cmuOne_);
}
void CMUData::setCmuTwo(CMU cmuTwo)
{
    cmuTwo_ = cmuTwo;
    emit cmuTwoReceived(cmuTwo_);
}
void CMUData::setCmuThree(CMU cmuThree)
{
    cmuThree_ = cmuThree;
    emit cmuThreeReceived(cmuThree_);
}
