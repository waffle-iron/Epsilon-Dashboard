#include "widedash.h"
#include "ui_widedash.h"

WideDash::WideDash(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WideDash)
{
    ui->setupUi(this);
}

WideDash::~WideDash()
{
    delete ui;
}
