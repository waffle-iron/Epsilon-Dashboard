#pragma once

#include <QObject>
#include "DataLayer/CMUData/CMU.h"

class I_CMUData : public QObject
{
    Q_OBJECT

public:
    virtual ~I_CMUData() {}

    virtual CMU cmuZero() const = 0;
    virtual CMU cmuOne() const = 0;
    virtual CMU cmuTwo() const = 0;
    virtual CMU cmuThree() const = 0;

    virtual void setCmuZero(CMU cmuZero) = 0;
    virtual void setCmuOne(CMU cmuOne) = 0;
    virtual void setCmuTwo(CMU cmuTwo) = 0;
    virtual void setCmuThree(CMU cmuThree) = 0;

signals:
    void cmuZeroReceived(CMU cmuZero);
    void cmuOneReceived(CMU cmuOne);
    void cmuTwoReceived(CMU cmuTwo);
    void cmuThreeReceived(CMU cmuThree);
    void cmuMaxCellTempReceived(double maxCellTemp);
    void cmuLowestCellVoltageReceived(double lowestCellVoltage);
    void cmuAverageCellTempReceived(double averageCellTemp);
    void cmuAverageVoltageReceived(double averageVoltage);
};
