
#include "ControlView.h"

namespace
{
    const QString MPPT_ALIVE = "background-color:rgb(93, 234, 140); \
                              border-radius:8px; \
                              border: 1px solid white;";
    const QString MPPT_DEAD = "background-color:rgb(147, 147, 147); \
                             border-radius:8px; \
                             border: 1px solid white;";
}

ControlView::ControlView(DriverControlsPresenter &driverControlsPresenter,
                         I_ControlUi &ui)
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
       ui_.aliveIndicator().setStyleSheet(MPPT_ALIVE);
   }
   else
   {
       ui_.aliveIndicator().setStyleSheet(MPPT_DEAD);
   }


}

void ControlView::lowHeadlightsReceived(bool lowBeams)
{
    if (lowBeams)
    {
        ui_.lowHeadlightsLabel().setStyleSheet("color: orange");
    }
    else
    {
        ui_.lowHeadlightsLabel().setStyleSheet("color: grey");
    }
}

void ControlView::highHeadlightsReceived(bool highBeams)
{
    if (highBeams)
    {
        ui_.highHeadlightsLabel().setStyleSheet("color: orange");
    }
    else
    {
        ui_.highHeadlightsLabel().setStyleSheet("color: grey");
    }
}

void ControlView::leftSignalReceived(bool leftSignal)
{
    if (leftSignal)
    {
        ui_.leftSignalLabel().setStyleSheet("color: orange");
    }
    else
    {
        ui_.leftSignalLabel().setStyleSheet("color: grey");
    }
}

void ControlView::rightSignalReceived(bool rightSignal)
{
    if (rightSignal)
    {
        ui_.rightSignalLabel().setStyleSheet("color: orange");
    }
    else
    {
        ui_.rightSignalLabel().setStyleSheet("color: grey");
    }
}

void ControlView::hazardReceived(bool hazard)
{
    if (hazard)
    {
        ui_.hazardOnLabel().setStyleSheet("color: orange");
    }
    else
    {
        ui_.hazardOnLabel().setStyleSheet("color: grey");
    }
}

void ControlView::interiorReceived(bool interior)
{
    if (interior)
    {
        ui_.interiorOnLabel().setStyleSheet("color: orange");
    }
    else
    {
        ui_.interiorOnLabel().setStyleSheet("color: grey");
    }
}

void ControlView::pushToTalkReceived(bool pushToTalk)
{
    if (pushToTalk)
    {
        ui_.pushToTalkOnLabel().setStyleSheet("color: orange");
    }
    else
    {
        ui_.pushToTalkOnLabel().setStyleSheet("color: grey");
    }
}

void ControlView::hornReceived(bool horn)
{
    if (horn)
    {
        ui_.hornOnLabel().setStyleSheet("color: orange");
    }
    else
    {
        ui_.hornOnLabel().setStyleSheet("color: grey");
    }
}

void ControlView::auxReceived(bool aux)
{
    if (aux)
    {
        ui_.auxOnLabel().setStyleSheet("color: orange");
    }
    else
    {
        ui_.auxOnLabel().setStyleSheet("color: grey");
    }
}

void ControlView::prevSongReceived(bool prevSong)
{
    if (prevSong)
    {
        ui_.prevSongLabel().setStyleSheet("color: orange");
    }
    else
    {
        ui_.prevSongLabel().setStyleSheet("color: grey");
    }
}

void ControlView::nextSongReceived(bool nextSong)
{
    if (nextSong)
    {
        ui_.nextSongLabel().setStyleSheet("color: orange");
    }
    else
    {
        ui_.nextSongLabel().setStyleSheet("color: grey");
    }
}

void ControlView::playPauseReceived(bool playPause)
{
    if (playPause)
    {
        ui_.playPauseLabel().setStyleSheet("color: orange");
    }
    else
    {
        ui_.playPauseLabel().setStyleSheet("color: grey");
    }
}

void ControlView::volumeUpReceived(bool volumeUp)
{
    if (volumeUp)
    {
        ui_.volumeUpLabel().setStyleSheet("color: orange");
    }
    else
    {
        ui_.volumeUpLabel().setStyleSheet("color: grey");
    }
}

void ControlView::volumeDownReceived(bool volumeDown)
{
    if (volumeDown)
    {
        ui_.volumeDownLabel().setStyleSheet("color: orange");
    }
    else
    {
        ui_.volumeDownLabel().setStyleSheet("color: grey");
    }
}

void ControlView::brakesReceived(bool brakes)
{
    if (brakes)
    {
        ui_.brakesOnLabel().setStyleSheet("color: orange");
    }
    else
    {
        ui_.brakesOnLabel().setStyleSheet("color: grey");
    }
}

void ControlView::forwardReceived(bool forward)
{
    if (forward)
    {
        ui_.forwardOnLabel().setStyleSheet("color: orange");
    }
    else
    {
        ui_.forwardOnLabel().setStyleSheet("color: grey");
    }
}

void ControlView::reverseReceived(bool reverse)
{
    if (reverse)
    {
        ui_.reverseOnLabel().setStyleSheet("color: orange");
    }
    else
    {
        ui_.reverseOnLabel().setStyleSheet("color: grey");
    }
}

void ControlView::resetReceived(bool reset)
{
    if (reset)
    {
        ui_.resetOnLabel().setStyleSheet("color: orange");
    }
    else
    {
        ui_.resetOnLabel().setStyleSheet("color: grey");
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
