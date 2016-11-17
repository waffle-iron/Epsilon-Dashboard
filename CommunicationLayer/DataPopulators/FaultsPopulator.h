#pragma once

#include <QObject>

class I_JsonInterpreter;
class I_FaultsData;
class MotorFaults;
class LimitFlags;
class BatteryFaults;

class FaultsPopulator : public QObject
{
    Q_OBJECT
public:
    FaultsPopulator(I_JsonInterpreter& jsonInterpreter,
                    I_FaultsData& faultsData);
    virtual ~FaultsPopulator() {}

public slots:
    void populateData(const QJsonObject&);

private:
    I_JsonInterpreter& jsonInterpreter_;
    I_FaultsData& faultsData_; 
    MotorFaults getMotorFaults(const QString& motorNumber, const QJsonObject& data);
    LimitFlags getLimitFlags(const QString& motorNumber, const QJsonObject& data);
    BatteryFaults getBatteryFaults(const QJsonObject& data);
};
