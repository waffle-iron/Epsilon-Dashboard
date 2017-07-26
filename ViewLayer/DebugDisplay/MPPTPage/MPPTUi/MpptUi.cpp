#include"MpptUi.h"
#include "ui_MpptUi.h"

MpptUi::MpptUi() :
    ui_(new Ui::MpptUi)
{
    ui_->setupUi(this);
    ui_->Mppt0Widget->setContentsMargins(0,0,0,0);

}

MpptUi::~MpptUi()
{
    delete ui_;
}


