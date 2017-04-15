#pragma once

#include "I_BatteryData.h"

class BatteryData : public I_BatteryData
{
public:
    BatteryData();
    virtual ~BatteryData();

    /* Data getter */
    bool alive() const;
    BmsRelayStatusFlags bmsRelayStatus() const;
    int populatedCells() const;
    double inputVoltage12() const;
    double fanVoltage() const;
    double packCurrent() const;
    double packVoltage() const;
    double packStateOfCharge() const;
    double packAmphours() const;
    double packDepthOfDischarge() const;
    int highTemperature() const;
    int highThermistorId() const;
    int lowTemperature() const;
    int lowThermistorId() const;
    int averageTemperature() const;
    int internalTemperature() const;
    int fanSpeed() const;
    int requestedFanSpeed() const;
    int lowCellVoltage() const;
    int lowCellVoltageId() const;
    int highCellVoltage() const;
    int highCellVoltageId() const;
    int averageCellVoltage() const;
    QString prechargeState() const;
    int auxVoltage() const;
    bool auxBmsAlive() const;
    double packNetPower() const;

    /* Data setter */
    void setAlive(bool alive);
    void setBmsRelayStatus(const BmsRelayStatusFlags &bmsRelayStatus);
    void setPopulatedCells(int populatedCells);
    void set12VInputVoltage(double inputVoltage12);
    void setFanVoltage(double fanVoltage);
    void setPackCurrent(double packCurrent);
    void setPackVoltage(double packVoltage);
    void setPackStateOfCharge(double packStateOfCharge);
    void setPackAmphours(double packAmphours);
    void setPackDepthOfDischarge(double packDepthOfDischarge);
    void setHighTemperature(int highTemperature);
    void setHighThermistorId(int highThermistorId);
    void setLowTemperature(int lowTemperature);
    void setLowThermistorId(int lowThermistorId);
    void setAverageTemperature(int averageTemperature);
    void setInternalTemperature(int internalTemperature);
    void setFanSpeed(int fanSpeed);
    void setRequestedFanSpeed(int requestedFanSpeed);
    void setLowCellVoltage(int lowCellVoltage);
    void setLowCellVoltageId(int lowCellVoltageId);
    void setHighCellVoltage(int highCellVoltage);
    void setHighCellVoltageId(int highCellVoltageId);
    void setAverageCellVoltage(int averageCellVoltage);
    void setPrechargeState(const QString &prechargeState);
    void setAuxVoltage(int auxVoltage);
    void setAuxBmsAlive(bool auxBmsAlive);

private:
    bool alive_;
    BmsRelayStatusFlags bmsRelayStatus_;
    int populatedCells_;
    double inputVoltage12_;
    double fanVoltage_;
    double packCurrent_;
    double packVoltage_;
    double packStateOfCharge_;
    double packAmphours_;
    double packDepthOfDischarge_;
    int highTemperature_;
    int highThermistorId_;
    int lowTemperature_;
    int lowThermistorId_;
    int averageTemperature_;
    int internalTemperature_;
    int fanSpeed_;
    int requestedFanSpeed_;
    int lowCellVoltage_;
    int lowCellVoltageId_;
    int highCellVoltage_;
    int highCellVoltageId_;
    int averageCellVoltage_;
    QString prechargeState_;
    int auxVoltage_;
    bool auxBmsAlive_;
    double packNetPower_; // calculated based on pack current and voltage
};

