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
    QLabel& highHeadlightsLabel();
    QLabel& lowHeadlightsLabel();
    QLabel& leftSignalLabel();
    QLabel& rightSignalLabel();
    QLabel& hazardLabel();
    QLabel& interiorLabel();
    QLabel& pushToTalkLabel();
    QLabel& hornLabel();
    QLabel& auxLabel();
    QLabel& nextSongLabel();
    QLabel& prevSongLabel();
    QLabel& volumeUpLabel();
    QLabel& volumeDownLabel();
    QLabel& brakesLabel();
    QLabel& forwardLabel();
    QLabel& reverseLabel();
    QLabel& resetLabel();
    QProgressBar& accelerationProgressBar();
    QProgressBar& regenBrakingProgressBar();
private:
    Ui::ControlUi* ui_;
};
