#include "ControlUi.h"
#include "ui_ControlUi.h"

ControlUi::ControlUi() :
    ui_(new Ui::ControlUi)
{
    ui_->setupUi(this);
    QPixmap bkgnd(":/Resources/Background.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette background;
    background.setBrush(QPalette::Background, bkgnd);
    this->setPalette(background);
}

ControlUi::~ControlUi()
{
    delete ui_;
}

QLabel& ControlUi::headlightsHigh()
{
    return *ui_->high;
}

QLabel& ControlUi::headlightsLow()
{
    return *ui_->low;
}

QLabel& ControlUi::signalLeft()
{
    return *ui_->left;
}

QLabel& ControlUi::signalRight()
{
    return *ui_->right;
}

QLabel& ControlUi::hazard()
{
    return *ui_->hazardOn;
}

QLabel& ControlUi::interior()
{
   return *ui_->interiorOn;
}

QLabel& ControlUi::pushToTalk()
{
   return *ui_->pushToTalkOn;
}

QLabel& ControlUi::horn()
{
    return *ui_->hornOn;
}

QLabel& ControlUi::aux()
{
    return *ui_->auxOn;
}

QLabel& ControlUi::nextSong()
{
    return *ui_->next;
}

QLabel& ControlUi::prevSong()
{
    return *ui_->prev;
}

QLabel& ControlUi::volumeUp()
{
    return *ui_->up;
}

QLabel& ControlUi::volumeDown()
{
    return *ui_->down;
}

QLabel& ControlUi::brakes()
{
    return *ui_->brakesOn;
}

QLabel& ControlUi::forward()
{
    return *ui_->forwardOn;
}

QLabel& ControlUi::reverse()
{
    return *ui_->reverseOn;
}

QLabel& ControlUi::reset()
{
    return *ui_->resetOn;
}

QProgressBar& ControlUi::acceleration()
{
    return *ui_->accelerationBar;
}

QProgressBar& ControlUi::regenBraking()
{
    return *ui_->regenBrakingBar;
}
