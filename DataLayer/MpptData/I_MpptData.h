#pragma once

#include <QObject>
#include "Mppt.h"

class I_MpptData : public QObject
{
    Q_OBJECT

public:
    virtual ~I_MpptData() {}

    virtual Mppt getMppt(int i) const = 0;

    virtual void setMppt(int i, Mppt mppt) = 0;

signals:
    void mpptReceived(int i, Mppt mpptZero);
};
