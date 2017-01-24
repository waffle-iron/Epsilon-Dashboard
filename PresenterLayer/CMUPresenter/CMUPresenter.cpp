#include "CMUPresenter.h"

CMUPresenter::CMUPresenter(const I_CMUData& cmuData)
    : cmuData_(cmuData)
{
    relayCMUData();
}

void CMUPresenter::relayCMUData()
{
    connect(&cmuData_, SIGNAL(cmuZeroReceived(CMU)),
            this, SIGNAL(cmuZeroReceived(CMU)));
    connect(&cmuData_, SIGNAL(cmuOneReceived(CMU)),
            this, SIGNAL(cmuOneReceived(CMU)));
    connect(&cmuData_, SIGNAL(cmuTwoReceived(CMU)),
            this, SIGNAL(cmuTwoReceived(CMU)));
    connect(&cmuData_, SIGNAL(cmuThreeReceived(CMU)),
            this, SIGNAL(cmuThreeReceived(CMU)));
    connect(&cmuData_, SIGNAL(cmuMaxCellTempReceived(double)),
            this, SIGNAL(cmuMaxCellTempReceived(double)));
    connect(&cmuData_, SIGNAL(cmuLowestCellVoltageReceived(double)),
            this, SIGNAL(cmuLowestCellVoltageReceived(double)));
    connect(&cmuData_, SIGNAL(cmuAverageCellTempReceived(double)),
            this, SIGNAL(cmuAverageCellTempReceived(double)));
    connect(&cmuData_, SIGNAL(cmuAverageVoltageReceived(double)),
            this, SIGNAL(cmuAverageVoltageReceived(double)));
}
