#pragma once

#include "BmsRelayStatusFlags.h"

#include <QObject>
#include <QString>

class I_BatteryData : public QObject
{
    Q_OBJECT

public:
    virtual ~I_BatteryData() {}

    /* Data "Gets" */
    virtual bool alive() const = 0;
    virtual BmsRelayStatusFlags bmsRelayStatus() const = 0;
    virtual int PopulatedCells() const = 0;
    virtual double inputVoltage12V() const = 0;
    virtual double FanVoltage() const = 0;
    virtual double PackCurrent() const = 0;
    virtual double PackVoltage() const = 0;
    virtual double PackStateOfCharge() const = 0;
    virtual double PackAmphours() const = 0;
    virtual double PackDepthOfDischarge() const = 0;
    virtual int HighTemperature() const = 0;
    virtual int HighThermistorId() const = 0;
    virtual int LowTemperature() const = 0;
    virtual int LowThermistorId() const = 0;
    virtual int AverageTemperature() const = 0;
    virtual int InternalTemperature() const = 0;
    virtual int FanSpeed() const = 0;
    virtual int RequestedFanSpeed() const = 0;
    virtual int LowCellVoltage() const = 0;
    virtual int LowCellVoltageId() const = 0;
    virtual int HighCellVoltage() const = 0;
    virtual int HighCellVoltageId() const = 0;
    virtual int AverageCellVoltage() const = 0;
    virtual QString PrechargeState() const = 0;
    virtual int AuxVoltage() const = 0;
    virtual bool AuxBmsAlive() const = 0;

    /* Data "Sets" */
    virtual void setAlive(bool alive) = 0;
    virtual void setBmsRelayStatus(BmsRelayStatusFlags) = 0;
    virtual void setPopulatedCells(const int&) = 0;
    virtual void set12VInputVoltage(const double&) = 0;
    virtual void setFanVoltage(const double&) = 0;
    virtual void setPackCurrent(const double&) = 0;
    virtual void setPackVoltage(const double&) = 0;
    virtual void setPackStateOfCharge(const double&) = 0;
    virtual void setPackAmphours(const double&) = 0;
    virtual void setPackDepthOfDischarge(const double&) = 0;
    virtual void setHighTemperature(const int&) = 0;
    virtual void setHighThermistorId(const int&) = 0;
    virtual void setLowTemperature(const int&) = 0;
    virtual void setLowThermistorId(const int&) = 0;
    virtual void setAverageTemperature(const int&) = 0;
    virtual void setInternalTemperature(const int&) = 0;
    virtual void setFanSpeed(const int&) = 0;
    virtual void setRequestedFanSpeed(const int&) = 0;
    virtual void setLowCellVoltage(const int&) = 0;
    virtual void setLowCellVoltageId(const int&) = 0;
    virtual void setHighCellVoltage(const int&) = 0;
    virtual void setHighCellVoltageId(const int&) = 0;
    virtual void setAverageCellVoltage(const int&) = 0;
    virtual void setPrechargeState(const QString&) = 0;
    virtual void setAuxVoltage(const int&) = 0;
    virtual void setAuxBmsAlive(const bool&) = 0;

signals:
    void aliveReceived(const bool& alive);
    void bmsRelayStatusReceived(BmsRelayStatusFlags);
    void populatedCellsReceived(const int&);
    void inputVoltage12VReceived(const double&);
    void fanVoltageReceived(const double&);
    void packCurrentReceived(const double&);
    void packVoltageReceived(const double&);
    void packStateOfChargeReceived(const double&);
    void packAmphoursReceived(const double&);
    void packDepthOfDischargeReceived(const double&);
    void highTemperatureReceived(const int&);
    void highThermistorIdReceived(const int&);
    void lowTemperatureReceived(const int&);
    void lowThermistorIdReceived(const int&);
    void averageTemperatureReceived(const int&);
    void internalTemperatureReceived(const int&);
    void fanSpeedReceived(const int&);
    void requestedFanSpeedReceived(const int&);
    void lowCellVoltageReceived(const int&);
    void lowCellVoltageIdReceived(const int&);
    void highCellVoltageReceived(const int&);
    void highCellVoltageIdReceived(const int&);
    void averageCellVoltageReceived(const int&);
    void prechargeStateReceived(const int&);
    void auxVoltageReceived(const int&);
    void auxBmsAliveReceived(const bool&);
    void packNetPowerReceived(const double&);
};
