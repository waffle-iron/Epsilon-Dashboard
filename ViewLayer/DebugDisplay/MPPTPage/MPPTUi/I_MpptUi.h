#pragma once
#include <QWidget>
#include <QLabel>

class I_MpptUi: public QWidget
{
public:
    virtual ~I_MpptUi() {}
    virtual QLabel& titleLabel() = 0;
};
