#pragma once

#include <QScopedPointer>

class DisplayDashboardUI;
class DisplayDashboardView;
class PresenterContainer;

class ViewContainer
{
public:
    explicit ViewContainer(PresenterContainer& presenterContainer);
    ~ViewContainer();

private:
    DisplayDashboardUI* DisplayDashboardUI_;
    QScopedPointer<DisplayDashboardView> DisplayDashboardView_;
};
