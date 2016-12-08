#pragma once

#include "I_CMUData.h"

class CMUData : public I_CMUData
{
public:
    CMUData();
    virtual ~CMUData();

    CMU cmuZero() const;
    CMU cmuOne() const;
    CMU cmuTwo() const;
    CMU cmuThree() const;

    void setCmuZero(CMU cmuZero);
    void setCmuOne(CMU cmuOne);
    void setCmuTwo(CMU cmuTwo);
    void setCmuThree(CMU cmuThree);

private:
    CMU cmuZero_;
    CMU cmuOne_;
    CMU cmuTwo_;
    CMU cmuThree_;
};

