#pragma once

#include "I_MPPTData.h"

class MPPTData : public I_MPPTData
{
public:
    MPPTData();
    virtual ~MPPTData();

    MPPT mpptZero() const;
    MPPT mpptOne() const;
    MPPT mpptTwo() const;

    void setMpptZero(MPPT mpptZero);
    void setMpptOne(MPPT mpptZero);
    void setMpptTwo(MPPT mpptZero);

private:
    MPPT mpptList [3];
};

