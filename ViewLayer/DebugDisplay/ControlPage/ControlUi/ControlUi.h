#pragma once
#include "I_ControlUi.h"
namespace Ui
{
    class ControlUi;
}

class ControlUi : public I_ControlUi
{
    Q_OBJECT
public:
    explicit ControlUi();
    ~ControlUi();
    QLabel& headlightsHigh();
    QLabel& headlightsLow();
    QLabel& signalLeft();
    QLabel& signalRight();
    QLabel& hazard();
    QLabel& interior();
    QLabel& pushToTalk();
    QLabel& horn();
    QLabel& aux();
    QLabel& nextSong();
    QLabel& prevSong();
    QLabel& volumeUp();
    QLabel& volumeDown();
    QLabel& brakes();
    QLabel& forward();
    QLabel& reverse();
    QLabel& reset();
    QProgressBar& acceleration();
    QProgressBar& regenBraking();
private:
    Ui::ControlUi* ui_;
};
