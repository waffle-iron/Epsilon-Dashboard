#pragma once
#include "../../DataLayer/MPPTData/I_MPPTData.h"
#include <QObject>
class I_MPPTData;

class MPPTPresenter : public QObject
{
    Q_OBJECT
public:
    explicit MPPTPresenter(const I_MPPTData& mpptData);

private:
    void relayMPPTData();

    const I_MPPTData& mpptData_;

signals:
    void mpptZeroReceived(MPPT mpptZero);
    void mpptOneReceived(MPPT mpptOne);
    void mpptTwoReceived(MPPT mpptTwo);
};
