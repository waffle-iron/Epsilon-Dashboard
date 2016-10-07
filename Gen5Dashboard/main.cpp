#include "Gen5Dashboard.h"
#include <QApplication>

int main(int argc, char *argv[])
{
   QScopedPointer<Gen5Dashboard> app;
   app.reset(new Gen5Dashboard(argc, argv));
   return app->exec();
}
