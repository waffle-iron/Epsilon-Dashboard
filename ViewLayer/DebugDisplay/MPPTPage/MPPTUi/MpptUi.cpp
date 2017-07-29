#include"MpptUi.h"
#include "ui_MpptUi.h"
#include <QGraphicsOpacityEffect>

MpptUi::MpptUi() :
    ui_(new Ui::MpptUi)
{
    ui_->setupUi(this);

    QPalette pal = this->palette();
    pal.setColor(QPalette::Window, Qt::black);
    this->setPalette(pal);
    //Setting the opacity

    QGraphicsOpacityEffect *opacity0 = new QGraphicsOpacityEffect;
    QGraphicsOpacityEffect *opacity1 = new QGraphicsOpacityEffect;
    QGraphicsOpacityEffect *opacity2 = new QGraphicsOpacityEffect;
    opacity0->setOpacity(0.95);
    opacity1->setOpacity(0.95);
    opacity2->setOpacity(0.95);
    ui_->MPPT0->setGraphicsEffect(opacity0);
    ui_->MPPT1->setGraphicsEffect(opacity1);
    ui_->MPPT2->setGraphicsEffect(opacity2);
}

MpptUi::~MpptUi()
{
    delete ui_;
}


