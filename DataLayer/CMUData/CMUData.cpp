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
    emit cmuMaxCellTempReceived(findMaxCellTemp());
    emit cmuLowestCellVoltageReceived(findLowestVoltage());
    emit cmuAverageCellTempReceived(findAverageCellTemp());
    emit cmuAverageVoltageReceived(findAverageVoltage());
}
void CMUData::setCmuOne(CMU cmuOne)
{
    cmuOne_ = cmuOne;
    emit cmuOneReceived(cmuOne_);
    emit cmuMaxCellTempReceived(findMaxCellTemp());
    emit cmuLowestCellVoltageReceived(findLowestVoltage());
    emit cmuAverageCellTempReceived(findAverageCellTemp());
    emit cmuAverageVoltageReceived(findAverageVoltage());
}
void CMUData::setCmuTwo(CMU cmuTwo)
{
    cmuTwo_ = cmuTwo;
    emit cmuTwoReceived(cmuTwo_);
    emit cmuMaxCellTempReceived(findMaxCellTemp());
    emit cmuLowestCellVoltageReceived(findLowestVoltage());
    emit cmuAverageCellTempReceived(findAverageCellTemp());
    emit cmuAverageVoltageReceived(findAverageVoltage());
}
void CMUData::setCmuThree(CMU cmuThree)
{
    cmuThree_ = cmuThree;
    emit cmuThreeReceived(cmuThree_);
    emit cmuMaxCellTempReceived(findMaxCellTemp());
    emit cmuLowestCellVoltageReceived(findLowestVoltage());
    emit cmuAverageCellTempReceived(findAverageCellTemp());
    emit cmuAverageVoltageReceived(findAverageVoltage());
}

double CMUData::findMaxCellTemp()
{
    QList<double> allCellTemps;
    double maxCellTemp;
    allCellTemps.append(cmuZero_.cellTemps());
    allCellTemps.append(cmuOne_.cellTemps());
    allCellTemps.append(cmuTwo_.cellTemps());
    allCellTemps.append(cmuThree_.cellTemps());
    maxCellTemp = allCellTemps.at(0);

    foreach (const double cellTemp, allCellTemps)
    {
        if (cellTemp > maxCellTemp)
        {
            maxCellTemp = cellTemp;
        }
    }

    return maxCellTemp;
}
double CMUData::findLowestVoltage()
{
    QList<double> allVoltages;
    double minVoltage;
    allVoltages.append(cmuZero_.voltages());
    allVoltages.append(cmuOne_.voltages());
    allVoltages.append(cmuTwo_.voltages());
    allVoltages.append(cmuThree_.voltages());
    minVoltage = allVoltages.at(0);

    foreach (const double voltage, allVoltages)
    {
        if (voltage < minVoltage)
        {
            minVoltage = voltage;
        }
    }

    return minVoltage;
}
double CMUData::findAverageCellTemp()
{
    QList<double> allCellTemps;
    double sumCellTemps = 0;
    int cellTempsCount = 0;
    allCellTemps.append(cmuZero_.cellTemps());
    allCellTemps.append(cmuOne_.cellTemps());
    allCellTemps.append(cmuTwo_.cellTemps());
    allCellTemps.append(cmuThree_.cellTemps());

    foreach (const double cellTemp, allCellTemps)
    {
        sumCellTemps += cellTemp;
        cellTempsCount++;
    }

    return sumCellTemps / cellTempsCount;
}
double CMUData::findAverageVoltage()
{
    QList<double> allVoltages;
    double sumVoltages = 0;
    int voltagesCount = 0;
    allVoltages.append(cmuZero_.voltages());
    allVoltages.append(cmuOne_.voltages());
    allVoltages.append(cmuTwo_.voltages());
    allVoltages.append(cmuThree_.voltages());

    foreach (const double voltage, allVoltages)
    {
        sumVoltages += voltage;
        voltagesCount++;
    }

    return sumVoltages / voltagesCount;
}