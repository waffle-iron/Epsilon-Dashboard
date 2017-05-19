#pragma once

#include "I_MpptData.h"

class MpptData : public I_MpptData
{
public:
    MpptData();
    virtual ~MpptData();

    Mppt getMppt(int i) const;

    void setMppt(int i, Mppt mppt);


private:
    QList<Mppt> mpptList_;
};

