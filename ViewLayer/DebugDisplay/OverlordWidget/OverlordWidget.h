#pragma once
#include <QWidget>
#include <QMainWindow>
#include <QStackedWidget>

class I_BatteryUi;
class I_ControlUi;
class I_HomePageUi;
class I_MotorFaultUi;
class I_MotorUi;
class I_MpptUi;
class I_TabUi;

class OverlordWidget : public QWidget
{
    Q_OBJECT

public:
    explicit OverlordWidget( I_BatteryUi& batteryUi,
                             I_ControlUi& controlUi,
                             I_HomePageUi& homepageUi,
                             I_MotorFaultUi& motorFaultUi,
                             I_MotorUi& motorUi,
                             I_MpptUi& mpptUi,
                             I_TabUi& tabUi);
    ~OverlordWidget();
    QStackedWidget* menu_;
public slots:
    void handleBatteryButtonClicked();
    void handleControlButtonClicked();
    void handleHomepageButtonClicked();
    void handleMotorFaultButtonClicked();
    void handleMotorButtonClicked();
    void handleMPPTButtonClicked();
private:
    I_BatteryUi& batteryUi_;
    I_ControlUi& controlUi_;
    I_HomePageUi& homepageUi_;
    I_MotorFaultUi& motorFaultUi_;
    I_MotorUi& motorUi_;
    I_MpptUi& mpptUi_;
    I_TabUi& tabUi_;
};

