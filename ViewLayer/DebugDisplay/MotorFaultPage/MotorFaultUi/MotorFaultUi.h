#pragma once
#include "I_MotorFaultUi.h"
namespace Ui
{
    class MotorFaultUi;
}
class MotorFaultUi : public I_MotorFaultUi
{
    Q_OBJECT
public:
    explicit MotorFaultUi();
    ~MotorFaultUi();

    QWidget& motor1ContentsWidget();

    QWidget& motor1ContentsWidget();
    QWidget& motor2ContentsWidget();
    QWidget& batteryContentsWidget();

    QLabel& motor1Label();
    QLabel& motor2Label();
    QLabel& batteryLabel();

    QLabel& showHistoryLabel();

private:
    Ui::MotorFaultUi* ui_;
};
