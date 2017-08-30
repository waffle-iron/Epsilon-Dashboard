#include "MotorFaultUi.h"
#include "ui_MotorFaultUi.h"
MotorFaultUi::MotorFaultUi():
    ui_(new Ui::MotorFaultUi)
{
    ui_->setupUi(this);
    QPixmap bkgnd(":/Resources/Background.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette background;
    background.setBrush(QPalette::Background, bkgnd);
    this->setPalette(background);
    addLabel();
}

MotorFaultUi::~MotorFaultUi()
{
    delete ui_;
}

QWidget& MotorFaultUi::motor1ContentsWidget()
{
    return *ui_->motor1ContentsWidget;
}

QWidget& MotorFaultUi::motor2ContentsWidget()
{
    return *ui_->motor2ContentsWidget;
}

QWidget& MotorFaultUi::batteryContentsWidget()
{
    return *ui_->batteryContentsWidget;
}

QLabel& MotorFaultUi::motor1Label()
{
    return *ui_->motor1Label;
}

QLabel& MotorFaultUi::motor2Label()
{
    return *ui_->motor2Label;
}

QLabel& MotorFaultUi::batteryLabel()
{
    return *ui_->batteryLabel;
}

QLabel& MotorFaultUi::showHistoryLabel()
{
    return *ui_->showHistoryLabel;
}

