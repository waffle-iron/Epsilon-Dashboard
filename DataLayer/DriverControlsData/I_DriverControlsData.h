#pragma once

#include <QObject>

class I_DriverControlsData : public QObject
{
    Q_OBJECT

public:
    virtual ~I_DriverControlsData() {}

    virtual bool driverControls_Alive() const = 0;
    virtual bool driverControls_HeadlightsOff() const = 0;
    virtual bool driverControls_HeadlightsLow() const = 0;
    virtual bool driverControls_HeadlightsHigh() const = 0;
    virtual bool driverControls_SignalRight() const = 0;
    virtual bool driverControls_SignalLeft() const = 0;
    virtual bool driverControls_Hazard() const = 0;
    virtual bool driverControls_Interior() const = 0;
    virtual bool driverControls_Aux() const = 0;
    virtual bool driverControls_VolumeUp() const = 0;
    virtual bool driverControls_VolumeDown() const = 0;
    virtual bool driverControls_NextSong() const = 0;
    virtual bool driverControls_PrevSong() const = 0;
    virtual double driverControls_Acceleration() const = 0;
    virtual double driverControls_RegenBraking() const = 0;
    virtual bool driverControls_Brakes() const = 0;
    virtual bool driverControls_Forward() const = 0;
    virtual bool driverControls_Reverse() const = 0;
    virtual bool driverControls_PushToTalk() const = 0;
    virtual bool driverControls_Horn() const = 0;
    virtual bool driverControls_Reset() const = 0;

    virtual void setDriverControls_Alive(bool driverControls_Alive) = 0;
    virtual void setDriverControls_HeadlightsOff(bool driverControls_HeadlightsOff) = 0;
    virtual void setDriverControls_HeadlightsLow(bool driverControls_HeadlightsLow) = 0;
    virtual void setDriverControls_HeadlightsHigh(bool driverControls_HeadlightsHigh) = 0;
    virtual void setDriverControls_SignalRight(bool driverControls_SignalRight) = 0;
    virtual void setDriverControls_SignalLeft(bool driverControls_SignalLeft) = 0;
    virtual void setDriverControls_Hazard(bool driverControls_Hazard) = 0;
    virtual void setDriverControls_Interior(bool driverControls_Interior) = 0;
    virtual void setDriverControls_Aux(bool driverControls_Aux) = 0;
    virtual void setDriverControls_VolumeUp(bool driverControls_VolumeUp) = 0;
    virtual void setDriverControls_VolumeDown(bool driverControls_VolumeDown) = 0;
    virtual void setDriverControls_NextSong(bool driverControls_NextSong) = 0;
    virtual void setDriverControls_PrevSong(bool driverControls_PrevSong) = 0;
    virtual void setDriverControls_Acceleration(double driverControls_Acceleration) = 0;
    virtual void setDriverControls_RegenBraking(double driverControls_RegenBraking) = 0;
    virtual void setDriverControls_Brakes(bool driverControls_Brakes) = 0;
    virtual void setDriverControls_Forward(bool driverControls_Forward) = 0;
    virtual void setDriverControls_Reverse(bool driverControls_Reverse) = 0;
    virtual void setDriverControls_PushToTalk(bool driverControls_PushToTalk) = 0;
    virtual void setDriverControls_Horn(bool driverControls_Horn) = 0;
    virtual void setDriverControls_Reset(bool driverControls_Reset) = 0;

signals:
    void driverControls_AliveReceived(bool driverControls_Alive);
    void driverControls_HeadlightsOffReceived(bool driverControls_HeadlightsOff);
    void driverControls_HeadlightsLowReceived(bool driverControls_HeadlightsLow);
    void driverControls_HeadlightsHighReceived(bool driverControls_HeadlightsHigh);
    void driverControls_SignalRightReceived(bool driverControls_SignalRight);
    void driverControls_SignalLeftReceived(bool driverControls_SignalLeft);
    void driverControls_HazardReceived(bool driverControls_Hazard);
    void driverControls_InteriorReceived(bool driverControls_Interior);
    void driverControls_AuxReceived(bool driverControls_Aux);
    void driverControls_VolumeUpReceived(bool driverControls_VolumeUp);
    void driverControls_VolumeDownReceived(bool driverControls_VolumeDown);
    void driverControls_NextSongReceived(bool driverControls_NextSong);
    void driverControls_PrevSongReceived(bool driverControls_PrevSong);
    void driverControls_AccelerationReceived(double driverControls_Acceleration);
    void driverControls_RegenBrakingReceived(double driverControls_RegenBraking);
    void driverControls_BrakesReceived(bool driverControls_Brakes);
    void driverControls_ForwardReceived(bool driverControls_Forward);
    void driverControls_ReverseReceived(bool driverControls_Reverse);
    void driverControls_PushToTalkReceived(bool driverControls_PushToTalk);
    void driverControls_HornReceived(bool driverControls_Horn);
    void driverControls_ResetReceived(bool driverControls_Reset);
};
