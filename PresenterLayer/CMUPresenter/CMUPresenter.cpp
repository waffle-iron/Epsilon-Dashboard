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
}
