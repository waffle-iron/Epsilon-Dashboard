#include "MPPTPresenter.h"

MPPTPresenter::MPPTPresenter(const I_MPPTData& mpptData)
    : mpptData_(mpptData)
{
    relayMPPTData();
}

void MPPTPresenter::relayMPPTData()
{
    connect(&mpptData_, SIGNAL(mpptZeroReceived(MPPT)),
            this, SIGNAL(mpptZeroReceived(MPPT)));
    connect(&mpptData_, SIGNAL(mpptOneReceived(MPPT)),
            this, SIGNAL(mpptOneReceived(MPPT)));
    connect(&mpptData_, SIGNAL(mpptTwoReceived(MPPT)),
            this, SIGNAL(mpptTwoReceived(MPPT)));
    connect(&mpptData_, SIGNAL(mpptPowerReceived(double)),
            this, SIGNAL(mpptPowerReceived(double)));
}
