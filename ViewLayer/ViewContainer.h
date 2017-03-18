#pragma once

#include <QScopedPointer>

class DisplayDashboardView;
class I_DisplayDashboardUI;
class I_RaceModeDashboardUI;
class PresenterContainer;


enum class Mode { RACE, DISPLAY };

class ViewContainer
{
public:
    explicit ViewContainer(PresenterContainer& presenterContainer, Mode mode);
    ~ViewContainer();

private:
    I_DisplayDashboardUI* DisplayDashboardUI_;
    I_RaceModeDashboardUI* RaceModeDashboardUI_;
    QScopedPointer<DisplayDashboardView> DisplayDashboardView_;
};
