#include"MpptUi.h"
#include "ui_MpptUi.h"

MpptUi::MpptUi() :
    ui_(new Ui::MpptUi)
{
    ui_->setupUi(this);
}
MpptUi::~MpptUi()
{
    delete ui_;
}
QLabel& MpptUi::titleLabel()
{
    return *ui_->title;
}
