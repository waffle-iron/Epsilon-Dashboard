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
    DisplayDashboardUI/I_DisplayDashboardUI.h

SOURCES += \ 
    ViewContainer.cpp \
    DisplayDashboardUI/DisplayDashboardUI.cpp \
    DisplayDashboardView/DisplayDashboardView.cpp

FORMS += \
    DisplayDashboardUI.ui
