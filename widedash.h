#ifndef WIDEDASH_H
#define WIDEDASH_H

#include <QDialog>

namespace Ui {
class WideDash;
}

class WideDash : public QDialog
{
    Q_OBJECT

public:
    explicit WideDash(QWidget *parent = 0);
    ~WideDash();

private:
    Ui::WideDash *ui;
};

#endif // WIDEDASH_H
