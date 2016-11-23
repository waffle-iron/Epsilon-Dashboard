#pragma once

#include <QObject>

class I_LightsData : public QObject
{
    Q_OBJECT

public:
    virtual ~I_LightsData() {}

    virtual bool lights_LowBeams() const = 0;
    virtual bool lights_HighBeams() const = 0;
    virtual bool lights_Brakes() const = 0;
    virtual bool lights_LeftSignal() const = 0;
    virtual bool lights_RightSignal() const = 0;
    virtual bool lights_BmsStrobeLight() const = 0;

    virtual void setLights_LowBeams(bool lights_LowBeams) = 0;
    virtual void setLights_HighBeams(bool lights_HighBeams) = 0;
    virtual void setLights_Brakes(bool lights_Brakes) = 0;
    virtual void setLights_LeftSignal(bool lights_LeftSignal) = 0;
    virtual void setLights_RightSignal(bool lights_RightSignal) = 0;
    virtual void setLights_BmsStrobeLight(bool lights_BmsStrobeLight) = 0;

signals:
    void lights_LowBeamsReceived(bool lights_LowBeams);
    void lights_HighBeamsReceived(bool lights_HighBeams);
    void lights_BrakesReceived(bool lights_Brakes);
    void lights_LeftSignalReceived(bool lights_LeftSignal);
    void lights_RightSignalReceived(bool lights_RightSignal);
    void lights_BmsStrobeLightReceived(bool lights_BmsStrobeLight);
};
