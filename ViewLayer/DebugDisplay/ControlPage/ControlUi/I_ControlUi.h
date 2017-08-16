#pragma once
#include <QWidget>
#include <QLabel>
#include <QProgressBar>

class I_ControlUi: public QWidget
{
public:
    virtual ~I_ControlUi() {}
    virtual QLabel& headlightsHigh() =0;
    virtual QLabel& headlightsLow() =0;
    virtual QLabel& signalLeft() =0;
    virtual QLabel& signalRight() =0;
    virtual QLabel& hazard() =0;
    virtual QLabel& interior() =0;
    virtual QLabel& pushToTalk() =0;
    virtual QLabel& horn() =0;
    virtual QLabel& aux() =0;
    virtual QLabel& nextSong() =0;
    virtual QLabel& prevSong() =0;
    virtual QLabel& volumeUp() =0;
    virtual QLabel& volumeDown() =0;
    virtual QLabel& brakes() =0;
    virtual QLabel& forward() =0;
    virtual QLabel& reverse() =0;
    virtual QLabel& reset() =0;
    virtual QProgressBar& acceleration() =0;
    virtual QProgressBar& regenBraking() =0;
};
