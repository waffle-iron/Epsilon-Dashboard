TEMPLATE = lib
CONFIG += staticlib

! include(../common.pri){
    error("Could not find common.pri file!")
}

DESTDIR = ../../build/.lib

HEADERS += \
    ViewContainer.h \
    DisplayDashboardView/DisplayDashboardView.h \
    DisplayDashboardUI/DisplayDashboardUI.h \
    DisplayDashboardUI/I_DisplayDashboardUI.h \
    DisplayDashboardUI/I_RaceModeDashboardUI.h \
    DisplayDashboardUI/RaceModeDashboardUI.h \
    HomePageUi/HomePageUi.h\
    HomePageUi/I_HomePageUi.h\
    ViewContainer.h \
    BatteryUi/BatteryUi.h \
    ControlUi/ControlUi.h \
    MotorFaultUi/MotorFaultUi.h \
    OverlordWidget/OverlordWidget.h \
    MotorUi/MotorUi.h \
    MotorUi/I_MotorUi.h \
    BatteryUi/I_BatteryUi.h \
    ControlUi/I_ControlUi.h \
    MotorFaultUi/I_MotorFaultUi.h \
    TabUi/TabUi.h \
    TabUi/I_TabUi.h \
    MPPTUi/MpptUi.h \
    MPPTUi/I_MpptUi.h

SOURCES += \ 
    ViewContainer.cpp \
    DisplayDashboardUI/DisplayDashboardUI.cpp \
    DisplayDashboardView/DisplayDashboardView.cpp \
    DisplayDashboardUI/RaceModeDashboardUI.cpp \
    HomePageUi/HomePageUi.cpp\
    ViewContainer.cpp \
    BatteryUi/BatteryUi.cpp \
    ControlUi/ControlUi.cpp \
    MotorFaultUi/MotorFaultUi.cpp \
    OverlordWidget/OverlordWidget.cpp \
    MotorUi/MotorUi.cpp \
    TabUi/TabUi.cpp \
    MPPTUi/MpptUi.cpp

FORMS += \
    DisplayDashboardUI.ui \
    RaceModeDashboardUI.ui \
    HomePageUi.ui \
    BatteryUi.ui \
    ControlUi.ui \
    MotorUi.ui \
    MotorFaultUi.ui \
    TabUi.ui \
    MpptUi.ui
