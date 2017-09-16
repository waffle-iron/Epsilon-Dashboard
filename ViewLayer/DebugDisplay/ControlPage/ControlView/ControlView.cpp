
#include "ControlView.h"

namespace
{
    const QString DRIVER_CONTROL_ALIVE = "background-color:rgb(93, 234, 140); \
                              border-radius:8px; \
                              border: 1px solid white;";
    const QString DRIVER_CONTROL_DEAD = "background-color:rgb(147, 147, 147); \
                             border-radius:8px; \
                             border: 1px solid white;";
    const QString ORANGE = "color: orange;";

    const QString GREY = "color: grey;";
}

ControlView::ControlView(DriverControlsPresenter& driverControlsPresenter,
                         I_ControlUi& ui)
    : driverControlsPresenter_(driverControlsPresenter)
    , ui_(ui)
{
    connectDriverControls(driverControlsPresenter_);
}

ControlView::~ControlView()
{
}

void ControlView::connectDriverControls(DriverControlsPresenter& driverControlsPresenter)
{
    connect(&driverControlsPresenter, SIGNAL(aliveReceived(bool)),
            this, SLOT(aliveReceived(bool)));

    connect(&driverControlsPresenter, SIGNAL(lowHeadlightsReceived(bool)),
            this, SLOT(lowHeadlightsReceived(bool)));
    connect(&driverControlsPresenter, SIGNAL(highHeadlightsReceived(bool)),
            this, SLOT(highHeadlightsReceived(bool)));

    connect(&driverControlsPresenter, SIGNAL(leftSignalReceived(bool)),
            this, SLOT(leftSignalReceived(bool)));
    connect(&driverControlsPresenter, SIGNAL(rightSignalReceived(bool)),
            this, SLOT(rightsSignalReceived(bool)));
    connect(&driverControlsPresenter, SIGNAL(hazardReceived(bool)),
            this, SLOT(hazardReceived(bool)));

    connect(&driverControlsPresenter, SIGNAL(interiorReceived(bool)),
            this, SLOT(interiorReceived(bool)));
    connect(&driverControlsPresenter, SIGNAL(pushToTalkReceived(bool)),
            this, SLOT(pushToTalkReceived(bool)));
    connect(&driverControlsPresenter, SIGNAL(hornReceived(bool)),
            this, SLOT(hornReceived(bool)));

    connect(&driverControlsPresenter, SIGNAL(auxReceived(bool)),
            this, SLOT(auxReceived(bool)));
    connect(&driverControlsPresenter, SIGNAL(prevSongReceived(bool)),
            this, SLOT(prevSongReceived(bool)));
    connect(&driverControlsPresenter, SIGNAL(nextSongReceived(bool)),
            this, SLOT(nextSongReceived(bool)));
    connect(&driverControlsPresenter, SIGNAL(playPauseReceived(bool)),
            this, SLOT(playPauseReceived(bool)));
    connect(&driverControlsPresenter, SIGNAL(volumeUpReceived(bool)),
            this, SLOT(volumeUpReceived(bool)));
    connect(&driverControlsPresenter, SIGNAL(volumeDownReceived(bool)),
            this, SLOT(volumeDownReceived(bool)));

    connect(&driverControlsPresenter, SIGNAL(brakesReceived(bool)),
            this, SLOT(brakesReceived(bool)));
    connect(&driverControlsPresenter, SIGNAL(forwardReceived(bool)),
            this, SLOT(forwardReceived(bool)));
    connect(&driverControlsPresenter, SIGNAL(reverseReceived(bool)),
            this, SLOT(reverseReceived(bool)));

    connect(&driverControlsPresenter, SIGNAL(resetReceived(bool)),
            this, SLOT(resetReceived(bool)));

    connect(&driverControlsPresenter, SIGNAL(accelerationReceived(double)),
            this, SLOT(accelerationReceived(double)));
    connect(&driverControlsPresenter, SIGNAL(regenBrakingReceived(double)),
            this, SLOT(regenBrakingReceived(double)));
}

void ControlView::aliveReceived(bool alive)
{
    if (alive)
    {
        ui_.aliveIndicator().setStyleSheet(DRIVER_CONTROL_ALIVE);
    }
    else
    {
        ui_.aliveIndicator().setStyleSheet(DRIVER_CONTROL_DEAD);
    }
}

void ControlView::lowHeadlightsReceived(bool lowBeams)
{
    if (lowBeams)
    {
        ui_.lowHeadlightsLabel().setStyleSheet(ORANGE);
    }
    else
    {
        ui_.lowHeadlightsLabel().setStyleSheet(GREY);
    }
}

void ControlView::highHeadlightsReceived(bool highBeams)
{
    if (highBeams)
    {
        ui_.highHeadlightsLabel().setStyleSheet(ORANGE);
    }
    else
    {
        ui_.highHeadlightsLabel().setStyleSheet(GREY);
    }
}

void ControlView::leftSignalReceived(bool leftSignal)
{
    if (leftSignal)
    {
        ui_.leftSignalLabel().setStyleSheet(ORANGE);
    }
    else
    {
        ui_.leftSignalLabel().setStyleSheet(GREY);
    }
}

void ControlView::rightSignalReceived(bool rightSignal)
{
    if (rightSignal)
    {
        ui_.rightSignalLabel().setStyleSheet(ORANGE);
    }
    else
    {
        ui_.rightSignalLabel().setStyleSheet(GREY);
    }
}

void ControlView::hazardReceived(bool hazard)
{
    if (hazard)
    {
        ui_.hazardOnLabel().setStyleSheet(ORANGE);
    }
    else
    {
        ui_.hazardOnLabel().setStyleSheet(GREY);
    }
}

void ControlView::interiorReceived(bool interior)
{
    if (interior)
    {
        ui_.interiorOnLabel().setStyleSheet(ORANGE);
    }
    else
    {
        ui_.interiorOnLabel().setStyleSheet(GREY);
    }
}

void ControlView::pushToTalkReceived(bool pushToTalk)
{
    if (pushToTalk)
    {
        ui_.pushToTalkOnLabel().setStyleSheet(ORANGE);
    }
    else
    {
        ui_.pushToTalkOnLabel().setStyleSheet(GREY);
    }
}

void ControlView::hornReceived(bool horn)
{
    if (horn)
    {
        ui_.hornOnLabel().setStyleSheet(ORANGE);
    }
    else
    {
        ui_.hornOnLabel().setStyleSheet(GREY);
    }
}

void ControlView::auxReceived(bool aux)
{
    if (aux)
    {
        ui_.auxOnLabel().setStyleSheet(ORANGE);
    }
    else
    {
        ui_.auxOnLabel().setStyleSheet(GREY);
    }
}

void ControlView::prevSongReceived(bool prevSong)
{
    if (prevSong)
    {
        ui_.prevSongLabel().setStyleSheet(ORANGE);
    }
    else
    {
        ui_.prevSongLabel().setStyleSheet(GREY);
    }
}

void ControlView::nextSongReceived(bool nextSong)
{
    if (nextSong)
    {
        ui_.nextSongLabel().setStyleSheet(ORANGE);
    }
    else
    {
        ui_.nextSongLabel().setStyleSheet(GREY);
    }
}

void ControlView::playPauseReceived(bool playPause)
{
    if (playPause)
    {
        ui_.playPauseLabel().setStyleSheet(ORANGE);
    }
    else
    {
        ui_.playPauseLabel().setStyleSheet(GREY);
    }
}

void ControlView::volumeUpReceived(bool volumeUp)
{
    if (volumeUp)
    {
        ui_.volumeUpLabel().setStyleSheet(ORANGE);
    }
    else
    {
        ui_.volumeUpLabel().setStyleSheet(GREY);
    }
}

void ControlView::volumeDownReceived(bool volumeDown)
{
    if (volumeDown)
    {
        ui_.volumeDownLabel().setStyleSheet(ORANGE);
    }
    else
    {
        ui_.volumeDownLabel().setStyleSheet(GREY);
    }
}

void ControlView::brakesReceived(bool brakes)
{
    if (brakes)
    {
        ui_.brakesOnLabel().setStyleSheet(ORANGE);
    }
    else
    {
        ui_.brakesOnLabel().setStyleSheet(GREY);
    }
}

void ControlView::forwardReceived(bool forward)
{
    if (forward)
    {
        ui_.forwardOnLabel().setStyleSheet(ORANGE);
    }
    else
    {
        ui_.forwardOnLabel().setStyleSheet(GREY);
    }
}

void ControlView::reverseReceived(bool reverse)
{
    if (reverse)
    {
        ui_.reverseOnLabel().setStyleSheet(ORANGE);
    }
    else
    {
        ui_.reverseOnLabel().setStyleSheet(GREY);
    }
}

void ControlView::resetReceived(bool reset)
{
    if (reset)
    {
        ui_.resetOnLabel().setStyleSheet(ORANGE);
    }
    else
    {
        ui_.resetOnLabel().setStyleSheet(GREY);
    }
}

void ControlView::accelerationReceived(double acceleration)
{
    int accelerationPercentage = acceleration * 100;
    ui_.accelerationProgressBar().setValue(accelerationPercentage);
}

void ControlView::regenBrakingReceived(double regenBraking)
{
    int regenBrakingPercentage = regenBraking * 100;
    ui_.regenBrakingProgressBar().setValue(regenBrakingPercentage);
}
