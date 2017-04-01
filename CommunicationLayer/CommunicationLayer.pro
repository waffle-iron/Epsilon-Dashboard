TEMPLATE = lib
CONFIG += staticlib

! include(../common.pri){
    error("Could not find common.pri file!")
}

DESTDIR = ../../build/.lib

HEADERS += \
    CommDeviceControl/CommDefines.h \
    CommDeviceControl/CommDeviceManager.h \
    CommDeviceControl/ConnectionController.h \
    CommDeviceControl/I_CommDevice.h \
    CommDeviceControl/I_ConnectionService.h \
    CommDeviceControl/UdpConnectionService.h \
    CommunicationContainer.h \
    JsonReceiver/I_JsonReceiver.h \
    JsonReceiver/JsonReceiver.h \



SOURCES += \ 
    CommDeviceControl/CommDeviceManager.cpp \
    CommDeviceControl/ConnectionController.cpp \
    CommDeviceControl/UdpConnectionService.cpp \
    CommunicationContainer.cpp \
    JsonReceiver/JsonReceiver.cpp \



