#pragma once

#include <QScopedPointer>

class I_DisplayDashboardUI;
class DisplayDashboardView;
class PresenterContainer;

class ViewContainer
{
public:
    explicit ViewContainer(PresenterContainer& presenterContainer);
    ~ViewContainer();

private:
    I_DisplayDashboardUI* DisplayDashboardUI_;
    QScopedPointer<DisplayDashboardView> DisplayDashboardView_;
};
