#pragma once

#include "I_LightsData.h"

class LightsData : public I_LightsData
{
public:
    LightsData();
    virtual ~LightsData();

    bool lights_LowBeams() const;
    bool lights_HighBeams() const;
    bool lights_Brakes() const;
    bool lights_LeftSignal() const;
    bool lights_RightSignal() const;
    bool lights_BmsStrobeLight() const;

    void setLights_LowBeams(bool lights_LowBeams);
    void setLights_HighBeams(bool lights_HighBeams);
    void setLights_Brakes(bool lights_Brakes);
    void setLights_LeftSignal(bool lights_LeftSignal);
    void setLights_RightSignal(bool lights_RightSignal);
    void setLights_BmsStrobeLight(bool lights_BmsStrobeLight);

private:
    bool lights_LowBeams_;
    bool lights_HighBeams_;
    bool lights_Brakes_;
    bool lights_LeftSignal_;
    bool lights_RightSignal_;
    bool lights_BmsStrobeLight_;
};

