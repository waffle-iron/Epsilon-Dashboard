#include "MotorUi.h"
#include "ui_MotorUi.h"
MotorUi::MotorUi():
    ui_(new Ui::MotorUi)
{
    ui_->setupUi(this);
    QPixmap bkgnd(":/Resources/Background.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette background;
    background.setBrush(QPalette::Background, bkgnd);
    this->setPalette(background);
}

MotorUi::~MotorUi()
{
    delete ui_;
}
