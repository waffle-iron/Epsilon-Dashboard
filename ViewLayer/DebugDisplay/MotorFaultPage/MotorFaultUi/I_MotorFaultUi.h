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

};
