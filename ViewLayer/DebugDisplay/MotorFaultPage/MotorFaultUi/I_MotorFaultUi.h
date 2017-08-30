#pragma once

#include <QLabel>

class I_MotorFaultUi: public QWidget
{
    Q_OBJECT
public:
    virtual ~I_MotorFaultUi() {}

    virtual QWidget& motor0ContentsWidget() = 0;
    virtual QWidget& motor1ContentsWidget() = 0;
    virtual QWidget& batteryContentsWidget() = 0;

    virtual QLabel& motor0Label() = 0;
    virtual QLabel& motor1Label() = 0;
    virtual QLabel& batteryLabel() = 0;

    virtual QLabel& showHistoryLabel() = 0;

};
