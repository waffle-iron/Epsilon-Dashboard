#pragma once

#include <QScopedPointer>

class BusinessContainer;
class CommunicationContainer;
class DataContainer;

class BatteryPresenter;
class BatteryFaultsPresenter;
class CMUPresenter;
class DriverControlsPresenter;
class KeyMotorPresenter;
class LightsPresenter;
class MPPTPresenter;
class MotorDetailsPresenter;
class MotorFaultsPresenter;

class PresenterContainer
{
public:
    PresenterContainer(DataContainer& dataContainer);
    ~PresenterContainer();
    BatteryPresenter& batteryPresenter();
    BatteryFaultsPresenter& batteryFaultsPresenter();
    CMUPresenter& cmuPresenter();
    DriverControlsPresenter& driverControlsPresenter();
    KeyMotorPresenter& keyMotorPresenter();
    LightsPresenter& lightsPresenter();
    MPPTPresenter& mpptPresenter();
    MotorDetailsPresenter& motorDetailsPresenter();
    MotorFaultsPresenter& motorFaultsPresenter();


private:
    QScopedPointer<BatteryPresenter> batteryPresenter_;
    QScopedPointer<BatteryFaultsPresenter> batteryFaultsPresenter_;
    QScopedPointer<CMUPresenter> cmuPresenter_;
    QScopedPointer<DriverControlsPresenter> driverControlsPresenter_;
    QScopedPointer<KeyMotorPresenter> keyMotorPresenter_;
    QScopedPointer<LightsPresenter> lightsPresenter_;
    QScopedPointer<MPPTPresenter> mpptPresenter_;
    QScopedPointer<MotorDetailsPresenter> motorDetailsPresenter_;
    QScopedPointer<MotorFaultsPresenter> motorFaultsPresenter_;
};
