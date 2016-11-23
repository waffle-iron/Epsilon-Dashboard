#pragma once

#include "I_DriverControlsData.h"

class DriverControlsData : public I_DriverControlsData
{
public:
    DriverControlsData();
    virtual ~DriverControlsData();

    bool driverControls_Alive() const;
    bool driverControls_HeadlightsOff() const;
    bool driverControls_HeadlightsLow() const;
    bool driverControls_HeadlightsHigh() const;
    bool driverControls_SignalRight() const;
    bool driverControls_SignalLeft() const;
    bool driverControls_Hazard() const;
    bool driverControls_Interior() const;
    bool driverControls_Aux() const;
    bool driverControls_VolumeUp() const;
    bool driverControls_VolumeDown() const;
    bool driverControls_NextSong() const;
    bool driverControls_PrevSong() const;
    double driverControls_Acceleration() const;
    double driverControls_RegenBraking() const;
    bool driverControls_Brakes() const;
    bool driverControls_Forward() const;
    bool driverControls_Reverse() const;
    bool driverControls_PushToTalk() const;
    bool driverControls_Horn() const;
    bool driverControls_Reset() const;

    void setDriverControls_Alive(bool driverControls_Alive);
    void setDriverControls_HeadlightsOff(bool driverControls_HeadlightsOff);
    void setDriverControls_HeadlightsLow(bool driverControls_HeadlightsLow);
    void setDriverControls_HeadlightsHigh(bool driverControls_HeadlightsHigh);
    void setDriverControls_SignalRight(bool driverControls_SignalRight);
    void setDriverControls_SignalLeft(bool driverControls_SignalLeft);
    void setDriverControls_Hazard(bool driverControls_Hazard);
    void setDriverControls_Interior(bool driverControls_Interior);
    void setDriverControls_Aux(bool driverControls_Aux);
    void setDriverControls_VolumeUp(bool driverControls_VolumeUp);
    void setDriverControls_VolumeDown(bool driverControls_VolumeDown);
    void setDriverControls_NextSong(bool driverControls_NextSong);
    void setDriverControls_PrevSong(bool driverControls_PrevSong);
    void setDriverControls_Acceleration(double driverControls_Acceleration);
    void setDriverControls_RegenBraking(double driverControls_RegenBraking);
    void setDriverControls_Brakes(bool driverControls_Brakes);
    void setDriverControls_Forward(bool driverControls_Forward);
    void setDriverControls_Reverse(bool driverControls_Reverse);
    void setDriverControls_PushToTalk(bool driverControls_PushToTalk);
    void setDriverControls_Horn(bool driverControls_Horn);
    void setDriverControls_Reset(bool driverControls_Reset);

private:
    bool driverControls_Alive_;
    bool driverControls_HeadlightsOff_;
    bool driverControls_HeadlightsLow_;
    bool driverControls_HeadlightsHigh_;
    bool driverControls_SignalRight_;
    bool driverControls_SignalLeft_;
    bool driverControls_Hazard_;
    bool driverControls_Interior_;
    bool driverControls_Aux_;
    bool driverControls_VolumeUp_;
    bool driverControls_VolumeDown_;
    bool driverControls_NextSong_;
    bool driverControls_PrevSong_;
    double driverControls_Acceleration_;
    double driverControls_RegenBraking_;
    bool driverControls_Brakes_;
    bool driverControls_Forward_;
    bool driverControls_Reverse_;
    bool driverControls_PushToTalk_;
    bool driverControls_Horn_;
    bool driverControls_Reset_;
};

