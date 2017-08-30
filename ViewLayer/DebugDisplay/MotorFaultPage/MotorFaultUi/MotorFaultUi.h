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

    QWidget& motor0ContentsWidget();
    QWidget& motor1ContentsWidget();
    QWidget& batteryContentsWidget();

    QLabel& motor0Label();
    QLabel& motor1Label();
    QLabel& batteryLabel();

    QLabel& showHistoryLabel();

private:
    Ui::MotorFaultUi* ui_;
};
