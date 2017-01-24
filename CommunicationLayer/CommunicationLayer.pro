#-------------------------------------------------
#
#  Project created by QtCreator 2014-10-13T12:01:32
#
#  Schulich Delta Android Telemetry
#  Copyright (C) 2015 University of Calgary Solar Car Team
#
#  This file is part of Schulich Delta Android Telemetry
#
#  Schulich Delta Android Telemetry is free software:
#  you can redistribute it and/or modify it under the terms
#  of the GNU Affero General Public License as published by
#  the Free Software Foundation, either version 3 of the
#  License, or (at your option) any later version.
#
#  Schulich Delta Android Telemetry is distributed
#  in the hope that it will be useful, but WITHOUT ANY WARRANTY;
#  without even the implied warranty of MERCHANTABILITY or
#  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Affero
#  General Public License for more details.
#
#  You should have received a copy of the GNU Affero General
#  Public License along with Schulich Delta Android Telemetry.
#  If not, see <http://www.gnu.org/licenses/>.
#
#  For further contact, email <software@calgarysolarcar.ca>
#
#-------------------------------------------------

TEMPLATE = lib
CONFIG += staticlib

! include( ../common.pri ) {
    error( "Couldn't find the common.pri file!" )
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
   DataPopulators/BatteryPopulator.h \
   DataPopulators/FaultsPopulator.h \
   DataPopulators/PowerPopulator.h \
   DataPopulators/VehiclePopulator.h \
   JsonInterpreter/JsonDefines.h \
   JsonInterpreter/I_JsonInterpreter.h \
   JsonInterpreter/JsonInterpreter.h

SOURCES += \
   CommDeviceControl/CommDeviceManager.cpp \
   CommDeviceControl/ConnectionController.cpp \
   CommDeviceControl/UdpConnectionService.cpp \
   CommunicationContainer.cpp \
   DataPopulators/BatteryPopulator.cpp \
   DataPopulators/FaultsPopulator.cpp \
   DataPopulators/PowerPopulator.cpp \
   DataPopulators/VehiclePopulator.cpp \
   JsonInterpreter/JsonInterpreter.cpp
