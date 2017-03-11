#pragma once

#include <QObject>
#include <QString>

class I_BatteryFaultsData : public QObject
{
    Q_OBJECT

public:
    virtual ~I_BatteryFaultsData() {}

    virtual bool cellOverVoltage() const = 0;
    virtual bool cellUnderVoltage() const = 0;
    virtual bool cellOverTemperature() const = 0;
    virtual bool measurementUntrusted() const = 0;
    virtual bool cmuCommTimeout() const = 0;
    virtual bool bmuIsInSetupMode() const = 0;
    virtual bool cmuCanBusPowerStatus() const = 0;
    virtual bool packIsolationTestFailure() const = 0;
    virtual bool softwareOverCurrentMeasured() const = 0;
    virtual bool canSupplyIsLow() const = 0;
    virtual bool contactorIsStuck() const = 0;
    virtual bool cmuDetectedExtraCellPresent() const = 0;

    virtual void setCellOverVoltage(bool cellOverVoltage) = 0;
    virtual void setCellUnderVoltage(bool cellUnderVoltage) = 0;
    virtual void setCellOverTemperature(bool cellOverTemperature) = 0;
    virtual void setMeasurementUntrusted(bool measurementUntrusted) = 0;
    virtual void setCmuCommTimeout(bool cmuCommTimeout) = 0;
    virtual void setBmuIsInSetupMode(bool bmuIsInSetupMode) = 0;
    virtual void setCmuCanBusPowerStatus(bool cmuCanBusPowerStatus) = 0;
    virtual void setPackIsolationTestFailure(bool packIsolationTestFailure) = 0;
    virtual void setSoftwareOverCurrentMeasured(bool softwareOverCurrentMeasured) = 0;
    virtual void setCanSupplyIsLow(bool canSupplyIsLow) = 0;
    virtual void setContactorIsStuck(bool contactorIsStuck) = 0;
    virtual void setCmuDetectedExtraCellPresent(bool cmuDetectedExtraCellPresent) = 0;

signals:   
    void cellOverVoltageReceived(bool cellOverVoltage);
    void cellUnderVoltageReceived(bool cellUnderVoltage);
    void cellOverTemperatureReceived(bool cellOverTemperature);
    void measurementUntrustedReceived(bool measurementUntrusted);
    void cmuCommTimeoutReceived(bool cmuCommTimeout);
    void bmuIsInSetupModeReceived(bool bmuIsInSetupMode);
    void cmuCanBusPowerStatusReceived(bool cmuCanBusPowerStatus);
    void packIsolationTestFailureReceived(bool packIsolationTestFailure);
    void softwareOverCurrentMeasuredReceived(bool softwareOverCurrentMeasured);
    void canSupplyIsLowReceived(bool canSupplyIsLow);
    void contactorIsStuckReceived(bool contactorIsStuck);
    void cmuDetectedExtraCellPresentReceived(bool cmuDetectedExtraCellPresent);
};
