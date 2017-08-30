#pragma once
#include <QWidget>
#include <QLabel>

class I_MotorFaultUi: public QWidget
{
public:
    virtual ~I_MotorFaultUi() {}

    virtual QWidget& motor1ContentsWidget() = 0;
    virtual QWidget& motor2ContentsWidget() = 0;
    virtual QWidget& batteryContentsWidget() = 0;

    virtual QLabel& motor1Label() = 0;
    virtual QLabel& motor2Label() = 0;
    virtual QLabel& batteryLabel() = 0;

    virtual QLabel& showHistoryLabel() = 0;

};
