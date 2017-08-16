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

QLabel& ControlUi::highHeadlightsLabel()
{
    return *ui_->high;
}

QLabel& ControlUi::lowHeadlightsLabel()
{
    return *ui_->low;
}

QLabel& ControlUi::leftSignalLabel()
{
    return *ui_->left;
}

QLabel& ControlUi::rightSignalLabel()
{
    return *ui_->right;
}

QLabel& ControlUi::hazardLabel()
{
    return *ui_->hazardOn;
}

QLabel& ControlUi::interiorLabel()
{
   return *ui_->interiorOn;
}

QLabel& ControlUi::pushToTalkLabel()
{
   return *ui_->pushToTalkOn;
}

QLabel& ControlUi::hornLabel()
{
    return *ui_->hornOn;
}

QLabel& ControlUi::auxLabel()
{
    return *ui_->auxOn;
}

QLabel& ControlUi::nextSongLabel()
{
    return *ui_->next;
}

QLabel& ControlUi::prevSongLabel()
{
    return *ui_->prev;
}

QLabel& ControlUi::volumeUpLabel()
{
    return *ui_->up;
}

QLabel& ControlUi::volumeDownLabel()
{
    return *ui_->down;
}

QLabel& ControlUi::brakesLabel()
{
    return *ui_->brakesOn;
}

QLabel& ControlUi::forwardLabel()
{
    return *ui_->forwardOn;
}

QLabel& ControlUi::reverseLabel()
{
    return *ui_->reverseOn;
}

QLabel& ControlUi::resetLabel()
{
    return *ui_->resetOn;
}

QProgressBar& ControlUi::accelerationProgressBar()
{
    return *ui_->accelerationBar;
}

QProgressBar& ControlUi::regenBrakingProgressBar()
{
    return *ui_->regenBrakingBar;
}
