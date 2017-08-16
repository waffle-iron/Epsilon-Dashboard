#pragma once
#include <QWidget>
#include <QLabel>
#include <QProgressBar>

class I_ControlUi: public QWidget
{
public:
    virtual ~I_ControlUi() {}
    virtual QLabel& highHeadlightsLabel() =0;
    virtual QLabel& lowHeadlightsLabel() =0;
    virtual QLabel& leftSignaLabel() =0;
    virtual QLabel& rightSignalLabel() =0;
    virtual QLabel& hazardLabel() =0;
    virtual QLabel& interiorLabel() =0;
    virtual QLabel& pushToTalkLabel() =0;
    virtual QLabel& hornLabel() =0;
    virtual QLabel& auxLabel() =0;
    virtual QLabel& nextSongLabel() =0;
    virtual QLabel& prevSongLabel() =0;
    virtual QLabel& volumeUpLabel() =0;
    virtual QLabel& volumeDownLabel() =0;
    virtual QLabel& brakesLabel() =0;
    virtual QLabel& forwardLabel() =0;
    virtual QLabel& reverseLabel() =0;
    virtual QLabel& resetLabel() =0;
    virtual QProgressBar& accelerationProgressBar() =0;
    virtual QProgressBar& regenBrakingProgressBar() =0;
};
