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
    QWidget& aliveIndicator();
    QLabel& highHeadlightsLabel();
    QLabel& lowHeadlightsLabel();
    QLabel& leftSignalLabel();
    QLabel& rightSignalLabel();
    QLabel& hazardOnLabel();
    QLabel& interiorOnLabel();
    QLabel& pushToTalkOnLabel();
    QLabel& hornOnLabel();
    QLabel& auxOnLabel();
    QLabel& nextSongLabel();
    QLabel& prevSongLabel();
    QLabel& volumeUpLabel();
    QLabel& volumeDownLabel();
    QLabel& brakesOnLabel();
    QLabel& forwardOnLabel();
    QLabel& reverseOnLabel();
    QLabel& resetOnLabel();
    QProgressBar& accelerationProgressBar();
    QProgressBar& regenBrakingProgressBar();
private:
    Ui::ControlUi* ui_;
};
