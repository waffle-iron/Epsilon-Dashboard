#include "CompactUI.h"
#include "ui_CompactUI.h"

CompactUI::CompactUI()
    :ui(new Ui::CompactUI)
{
    ui->setupUi(this);
}

CompactUI::~CompactUI()
{
    delete ui;
}

