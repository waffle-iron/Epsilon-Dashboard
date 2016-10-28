#pragma once

#include <QApplication>
#include <QScopedPointer>

class CommunicationContainer;
class DataContainer;
class BusinessContainer;
class PresenterContainer;
class ViewContainer;

class Gen5Dashboard : public QApplication
{
public:
    Gen5Dashboard(int& argc, char** argv);
    ~Gen5Dashboard();

private:
    QScopedPointer<DataContainer> dataContainer_;
    QScopedPointer<CommunicationContainer> communicationContainer_;
    QScopedPointer<BusinessContainer> businessContainer_;
    QScopedPointer<PresenterContainer> presenterContainer_;
    QScopedPointer<ViewContainer> viewContainer_;
};
