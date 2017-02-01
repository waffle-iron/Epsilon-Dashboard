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
    return cmuList[0];
}
CMU CMUData::cmuOne() const
{
    return cmuList[1];
}
CMU CMUData::cmuTwo() const
{
    return cmuList[2];
}
CMU CMUData::cmuThree() const
{
    return cmuList[3];
}

void CMUData::setCmuZero(CMU cmuZero)
{
    cmuList[0] = cmuZero;
    emit cmuZeroReceived(cmuList[0]);
    emit cmuMaxCellTempReceived(findMaxCellTemp());
    emit cmuLowestCellVoltageReceived(findLowestVoltage());
    emit cmuAverageCellTempReceived(findAverageCellTemp());
    emit cmuAverageVoltageReceived(findAverageVoltage());
}
void CMUData::setCmuOne(CMU cmuOne)
{
    cmuList[1] = cmuOne;
    emit cmuOneReceived(cmuList[1]);
    emit cmuMaxCellTempReceived(findMaxCellTemp());
    emit cmuLowestCellVoltageReceived(findLowestVoltage());
    emit cmuAverageCellTempReceived(findAverageCellTemp());
    emit cmuAverageVoltageReceived(findAverageVoltage());
}
void CMUData::setCmuTwo(CMU cmuTwo)
{
    cmuList[2] = cmuTwo;
    emit cmuTwoReceived(cmuList[2]);
    emit cmuMaxCellTempReceived(findMaxCellTemp());
    emit cmuLowestCellVoltageReceived(findLowestVoltage());
    emit cmuAverageCellTempReceived(findAverageCellTemp());
    emit cmuAverageVoltageReceived(findAverageVoltage());
}
void CMUData::setCmuThree(CMU cmuThree)
{
    cmuList[3] = cmuThree;
    emit cmuThreeReceived(cmuList[3]);
    emit cmuMaxCellTempReceived(findMaxCellTemp());
    emit cmuLowestCellVoltageReceived(findLowestVoltage());
    emit cmuAverageCellTempReceived(findAverageCellTemp());
    emit cmuAverageVoltageReceived(findAverageVoltage());
}

double CMUData::findMaxCellTemp()
{
    QList<double> allCellTemps;
    double maxCellTemp;
    allCellTemps.append(cmuList[0].cellTemps());
    allCellTemps.append(cmuList[1].cellTemps());
    allCellTemps.append(cmuList[2].cellTemps());
    allCellTemps.append(cmuList[3].cellTemps());
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
    allVoltages.append(cmuList[0].voltages());
    allVoltages.append(cmuList[1].voltages());
    allVoltages.append(cmuList[2].voltages());
    allVoltages.append(cmuList[3].voltages());
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
    allCellTemps.append(cmuList[0].cellTemps());
    allCellTemps.append(cmuList[1].cellTemps());
    allCellTemps.append(cmuList[2].cellTemps());
    allCellTemps.append(cmuList[3].cellTemps());

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
    allVoltages.append(cmuList[0].voltages());
    allVoltages.append(cmuList[1].voltages());
    allVoltages.append(cmuList[2].voltages());
    allVoltages.append(cmuList[3].voltages());

    foreach (const double voltage, allVoltages)
    {
        sumVoltages += voltage;
        voltagesCount++;
    }

    return sumVoltages / voltagesCount;
}