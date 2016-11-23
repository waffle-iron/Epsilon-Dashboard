#include "LightsData.h"
#include <QDebug>

LightsData::LightsData()
{
}

LightsData::~LightsData()
{
}

bool LightsData::lights_LowBeams() const
{
    return lights_LowBeams_;
}
bool LightsData::lights_HighBeams() const
{
    return lights_HighBeams_;
}
bool LightsData::lights_Brakes() const
{
    return lights_Brakes_;
}
bool LightsData::lights_LeftSignal() const
{
    return lights_LeftSignal_;
}
bool LightsData::lights_RightSignal() const
{
    return lights_RightSignal_;
}
bool LightsData::lights_BmsStrobeLight() const
{
    return lights_BmsStrobeLight_;
}

void LightsData::setLights_LowBeams(bool lights_LowBeams)
{
    lights_LowBeams_ = lights_LowBeams;
    emit lights_LowBeamsReceived(lights_LowBeams_);
}
void LightsData::setLights_HighBeams(bool lights_HighBeams)
{
    lights_HighBeams_ = lights_HighBeams;
    emit lights_HighBeamsReceived(lights_HighBeams_);
}
void LightsData::setLights_Brakes(bool lights_Brakes)
{
    lights_Brakes_ = lights_Brakes;
    emit lights_BrakesReceived(lights_Brakes_);
}
void LightsData::setLights_LeftSignal(bool lights_LeftSignal)
{
    lights_LeftSignal_ = lights_LeftSignal;
    emit lights_LeftSignalReceived(lights_LeftSignal_);
}
void LightsData::setLights_RightSignal(bool lights_RightSignal)
{
    lights_RightSignal_ = lights_RightSignal;
    emit lights_RightSignalReceived(lights_RightSignal_);
}
void LightsData::setLights_BmsStrobeLight(bool lights_BmsStrobeLight)
{
    lights_BmsStrobeLight_ = lights_BmsStrobeLight;
    emit lights_BmsStrobeLightReceived(lights_BmsStrobeLight_);
}
