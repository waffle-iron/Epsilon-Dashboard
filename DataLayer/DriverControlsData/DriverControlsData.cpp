#include "KeyMotorData.h"
#include <QDebug>

KeyMotorData::KeyMotorData()
{
}

KeyMotorData::~KeyMotorData()
{
}

bool DriverControlsData::driverControls_Alive() const
{
    driverControls_Alive_;
}
bool DriverControlsData::driverControls_HeadlightsOff() const
{
    driverControls_HeadlightsOff_;
}
bool DriverControlsData::driverControls_HeadlightsLow() const
{
    driverControls_HeadlightsLow_;
}
bool DriverControlsData::driverControls_HeadlightsHigh() const
{
    driverControls_HeadlightsHigh_;
}
bool DriverControlsData::driverControls_SignalRight() const
{
    driverControls_SignalRight_;
}
bool DriverControlsData::driverControls_SignalLeft() const
{
    driverControls_SignalLeft_;
}
bool DriverControlsData::driverControls_Hazard() const
{
    driverControls_Hazard_;
}
bool DriverControlsData::driverControls_Interior() const
{
    driverControls_Interior_;
}
bool DriverControlsData::driverControls_Aux() const
{
    driverControls_Aux_;
}
bool DriverControlsData::driverControls_VolumeUp() const
{
    driverControls_VolumeUp_;
}
bool DriverControlsData::driverControls_VolumeDown() const
{
    driverControls_VolumeDown_;
}
bool DriverControlsData::driverControls_NextSong() const
{
    driverControls_NextSong_;
}
bool DriverControlsData::driverControls_PrevSong() const
{
    driverControls_PrevSong_;
}
double DriverControlsData::driverControls_Acceleration() const
{
    driverControls_Acceleration_;
}
double DriverControlsData::driverControls_RegenBraking() const
{
    driverControls_RegenBraking_;
}
bool DriverControlsData::driverControls_Brakes() const
{
    driverControls_Brakes_;
}
bool DriverControlsData::driverControls_Forward() const
{
    driverControls_Forward_;
}
bool DriverControlsData::driverControls_Reverse() const
{
    driverControls_Reverse_;
}
bool DriverControlsData::driverControls_PushToTalk() const
{
    driverControls_PushToTalk_;
}
bool DriverControlsData::driverControls_Horn() const
{
    driverControls_Horn_;
}
bool DriverControlsData::driverControls_Reset() const
{
    driverControls_Reset_;
}

void driverControlsData::setDriverControls_Alive(bool driverControls_Alive)
{
    driverControls_Alive_ = driverControls_Alive;
    emit driverControls_AliveReceived(driverControls_Alive_);
}
void DriverControlsData::setDriverControls_HeadlightsOff(bool driverControls_HeadlightsOff)
{
    driverControls_HeadlightsOff_ = driverControls_HeadlightsOff;
    emit driverControls_HeadlightsOffReceived(driverControls_HeadlightsOff_);
}
void DriverControlsData::setDriverControls_HeadlightsLow(bool driverControls_HeadlightsLow)
{
    driverControls_HeadlightsLow_ = driverControls_HeadlightsLow;
    emit driverControls_HeadlightsLowReceived(driverControls_HeadlightsLow_);
}
void DriverControlsData::setDriverControls_HeadlightsHigh(bool driverControls_HeadlightsHigh)
{
    driverControls_HeadlightsHigh_ = driverControls_HeadlightsHigh;
    emit driverControls_HeadlightsHighReceived(driverControls_HeadlightsHigh_);
}
void DriverControlsData::setDriverControls_SignalRight(bool driverControls_SignalRight)
{
    driverControls_SignalRight_ = driverControls_SignalRight;
    emit driverControls_SignalRightReceived(driverControls_SignalRight_);
}
void DriverControlsData::setDriverControls_SignalLeft(bool driverControls_SignalLeft)
{
    driverControls_SignalLeft_ = driverControls_SignalLeft;
    emit driverControls_SignalLeftReceived(driverControls_SignalLeft_);
}
void DriverControlsData::setDriverControls_Hazard(bool driverControls_Hazard)
{
    driverControls_Hazard_ = driverControls_Hazard;
    emit driverControls_HazardReceived(driverControls_Hazard_);
}
void DriverControlsData::setDriverControls_Interior(bool driverControls_Interior)
{
    driverControls_Interior_ = driverControls_Interior;
    emit driverControls_InteriorReceived(driverControls_Interior_);
}
void DriverControlsData::setDriverControls_Aux(bool driverControls_Aux)
{
    driverControls_Aux_ = driverControls_Aux;
    emit driverControls_AuxReceived(driverControls_Aux_);
}
void DriverControlsData::setDriverControls_VolumeUp(bool driverControls_VolumeUp)
{
    driverControls_VolumeUp_ = driverControls_VolumeUp;
    emit driverControls_VolumeUpReceived(driverControls_VolumeUp_);
}
void DriverControlsData::setDriverControls_VolumeDown(bool driverControls_VolumeDown)
{
    driverControls_VolumeDown_ = driverControls_VolumeDown;
    emit driverControls_VolumeDownReceived(driverControls_VolumeDown_);
}
void DriverControlsData::setDriverControls_NextSong(bool driverControls_NextSong)
{
    driverControls_NextSong_ = driverControls_NextSong;
    emit driverControls_NextSongReceived(driverControls_NextSong_);
}
void DriverControlsData::setDriverControls_PrevSong(bool driverControls_PrevSong)
{
    driverControls_PrevSong_ = driverControls_PrevSong;
    emit driverControls_PrevSongReceived(driverControls_PrevSong_);
}
void DriverControlsData::setDriverControls_Acceleration(double driverControls_Acceleration)
{
    driverControls_Acceleration_ = driverControls_Acceleration;
    emit driverControls_AccelerationReceived(driverControls_Acceleration_);
}
void DriverControlsData::setDriverControls_RegenBraking(double driverControls_RegenBraking)
{
    driverControls_RegenBraking_ = driverControls_RegenBraking;
    emit driverControls_RegenBrakingReceived(driverControls_RegenBraking_);
}
void DriverControlsData::setDriverControls_Brakes(bool driverControls_Brakes)
{
    driverControls_Brakes_ = driverControls_Brakes;
    emit driverControls_BrakesReceived(driverControls_Brakes_);
}
void DriverControlsData::setDriverControls_Forward(bool driverControls_Forward)
{
    driverControls_Forward_ = driverControls_Forward;
    emit driverControls_ForwardReceived(driverControls_Forward_);
}
void DriverControlsData::setDriverControls_Reverse(bool driverControls_Reverse)
{
    driverControls_Reverse_ = driverControls_Reverse;
    emit driverControls_ReverseReceived(driverControls_Reverse_);
}
void DriverControlsData::setDriverControls_PushToTalk(bool driverControls_PushToTalk)
{
    driverControls_PushToTalk_ = driverControls_PushToTalk;
    emit driverControls_PushToTalkReceived(driverControls_PushToTalk_);
}
void DriverControlsData::setDriverControls_Horn(bool driverControls_Horn)
{
    driverControls_Horn_ = driverControls_Horn;
    emit driverControls_HornReceived(driverControls_Horn_);
}
void DriverControlsData::setDriverControls_Reset(bool driverControls_Reset)
{
    driverControls_Reset_ = driverControls_Reset;
    emit driverControls_ResetReceived(driverControls_Reset_);
}
