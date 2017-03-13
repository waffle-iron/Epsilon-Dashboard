TEMPLATE = lib
CONFIG += staticlib

! include(../common.pri){
    error("Could not find common.pri file!")
}

DESTDIR = ../../build/.lib

HEADERS += \
    BatteryData/BatteryData.h \
    BatteryData/I_BatteryData.h \
    BatteryFaultsData/BatteryFaultsData.h \
    BatteryFaultsData/I_BatteryFaultsData.h \
    CmuData/CmuData.h \
    CmuData/I_CmuData.h \
    DriverControlsData/DriverControlsData.h \
    DriverControlsData/I_DriverControlsData.h \
    KeyMotorData/KeyMotorData.h \
    KeyMotorData/I_KeyMotorData.h \
    LightsData/LightsData.h \
    LightsData/I_LightsData.h \
    MpptData/MpptData.h \
    MpptData/I_MpptData.h \
    MotorDetailsData/MotorDetailsData.h \
    MotorDetailsData/I_MotorDetailsData.h \
    MotorFaultsData/MotorFaultsData.h \
    MotorFaultsData/I_MotorFaultsData.h \
    DataContainer.h \
    CmuData/Cmu.h \
    KeyMotorData/KeyMotor.h \
    MpptData/Mppt.h \
    MotorDetailsData/MotorDetails.h \
    MotorFaultsData/ErrorFlags.h \
    MotorFaultsData/LimitFlags.h

SOURCES += \ 
    BatteryData/BatteryData.cpp \
    BatteryFaultsData/BatteryFaultsData.cpp \
    CmuData/CmuData.cpp \
    CmuData/Cmu.cpp \
    DriverControlsData/DriverControlsData.cpp \
    KeyMotorData/KeyMotorData.cpp \
    KeyMotorData/KeyMotor.cpp \
    LightsData/LightsData.cpp \
    MpptData/MpptData.cpp \
    MpptData/Mppt.cpp \
    MotorDetailsData/MotorDetailsData.cpp \
    MotorDetailsData/MotorDetails.cpp \
    MotorFaultsData/MotorFaultsData.cpp \
    MotorFaultsData/ErrorFlags.cpp \
    MotorFaultsData/LimitFlags.cpp \
    DataContainer.cpp