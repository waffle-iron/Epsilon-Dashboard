TEMPLATE = lib
CONFIG += staticlib

! include(../common.pri){
    error("Could not find common.pri file!")
}

DESTDIR = ../../build/.lib

HEADERS += \
    ViewContainer.h \
    DisplayDashboard/DisplayDashboardView/DisplayDashboardView.h \
    DisplayDashboard/DisplayDashboardUI/DisplayDashboardUI.h \
    DisplayDashboard/DisplayDashboardUI/I_DisplayDashboardUI.h \
    DisplayDashboard/DisplayDashboardUI/I_RaceModeDashboardUI.h \
    DisplayDashboard/DisplayDashboardUI/RaceModeDashboardUI.h \
    DebugDisplay/HomePage/HomePageUi/HomePageUi.h\
    DebugDisplay/HomePage/HomePageUi/I_HomePageUi.h\
    DebugDisplay/BatteryPage/BatteryUi/BatteryUi.h \
    DebugDisplay/BatteryPage/BatteryUi/I_BatteryUi.h \
    DebugDisplay/ControlPage/ControlUi/ControlUi.h \
    DebugDisplay/ControlPage/ControlUi/I_ControlUi.h \
    DebugDisplay/MotorFaultPage/MotorFaultUi/MotorFaultUi.h \
    DebugDisplay/MotorFaultPage/MotorFaultUi/I_MotorFaultUi.h \
    DebugDisplay/OverlordWidget/OverlordWidget.h \
    DebugDisplay/MotorPage/MotorUi/MotorUi.h \
    DebugDisplay/MotorPage/MotorUi/I_MotorUi.h \     
    DebugDisplay/Tab/TabUi/TabUi.h \
    DebugDisplay/Tab/TabUi/I_TabUi.h \
    DebugDisplay/MPPTPage/MPPTUi/MpptUi.h \
    DebugDisplay/MPPTPage/MPPTUi/I_MpptUi.h \
    DebugDisplay/MPPTPage/MPPTView/MpptView.h

SOURCES += \ 
    ViewContainer.cpp \
    DisplayDashboard/DisplayDashboardUI/DisplayDashboardUI.cpp \
    DisplayDashboard/DisplayDashboardView/DisplayDashboardView.cpp \
    DisplayDashboard/DisplayDashboardUI/RaceModeDashboardUI.cpp \
    DebugDisplay/HomePage/HomePageUi/HomePageUi.cpp\
    DebugDisplay/BatteryPage/BatteryUi/BatteryUi.cpp \
    DebugDisplay/ControlPage/ControlUi/ControlUi.cpp \
    DebugDisplay/MotorFaultPage/MotorFaultUi/MotorFaultUi.cpp \
    DebugDisplay/OverlordWidget/OverlordWidget.cpp \
    DebugDisplay/MotorPage/MotorUi/MotorUi.cpp \
    DebugDisplay/Tab/TabUi/TabUi.cpp \
    DebugDisplay/MPPTPage/MPPTUi/MpptUi.cpp \
    DebugDisplay/MPPTPage/MPPTView/MpptView.cpp

FORMS += \
    DisplayDashboard/DisplayDashboardUI.ui \
    DisplayDashboard/RaceModeDashboardUI.ui \
    DebugDisplay/HomePage/HomePageUi/HomePageUi.ui \
    DebugDisplay/BatteryPage/BatteryUi/BatteryUi.ui \
    DebugDisplay/ControlPage/ControlUi/ControlUi.ui \
    DebugDisplay/MotorPage/MotorUi/MotorUi.ui \
    DebugDisplay/MotorFaultPage/MotorFaultUi/MotorFaultUi.ui \
    DebugDisplay/Tab/TabUi/TabUi.ui \
    DebugDisplay/MPPTPage/MPPTUi/MpptUi.ui
