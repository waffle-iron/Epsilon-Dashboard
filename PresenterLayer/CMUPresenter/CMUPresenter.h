#pragma once
#include "../../DataLayer/CMUData/I_CMUData.h"
#include <QObject>
class I_CMUData;

class CMUPresenter : public QObject
{
    Q_OBJECT
public:
    explicit CMUPresenter(const I_CMUData& cmuData);

private:
    void relayCMUData();

    const I_CMUData& cmuData_;

signals:
    void cmuZeroReceived(CMU cmuZero);
    void cmuOneReceived(CMU cmuOne);
    void cmuTwoReceived(CMU cmuTwo);
    void cmuThreeReceived(CMU cmuThree);
};
