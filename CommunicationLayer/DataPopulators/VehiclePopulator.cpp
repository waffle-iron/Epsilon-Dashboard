/**
 *  Schulich Delta Android Telemetry
 *  Copyright (C) 2015 University of Calgary Solar Car Team
 *
 *  This file is part of Schulich Delta Android Telemetry
 *
 *  Schulich Delta Android Telemetry is free software:
 *  you can redistribute it and/or modify it under the terms
 *  of the GNU Affero General Public License as published by
 *  the Free Software Foundation, either version 3 of the
 *  License, or (at your option) any later version.
 *
 *  Schulich Delta Android Telemetry is distributed
 *  in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or
 *  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Affero
 *  General Public License for more details.
 *
 *  You should have received a copy of the GNU Affero General
 *  Public License along with Schulich Delta Android Telemetry.
 *  If not, see <http://www.gnu.org/licenses/>.
 *
 *  For further contact, email <software@calgarysolarcar.ca>
 */

#include <QJsonObject>

#include "VehiclePopulator.h"

#include "CommunicationLayer/JsonInterpreter/I_JsonInterpreter.h"
#include "CommunicationLayer/JsonInterpreter/JsonDefines.h"
#include "DataLayer/VehicleData/I_VehicleData.h"

VehiclePopulator::VehiclePopulator(I_JsonInterpreter& jsonInterpreter,
                                   I_VehicleData& vehicleData)
    : jsonInterpreter_(jsonInterpreter)
    , vehicleData_(vehicleData)
{
    connect(&jsonInterpreter_, SIGNAL(vehicleDataReceived(const QJsonObject&)),
            this, SLOT(populateData(const QJsonObject&)));
}

void VehiclePopulator::populateData(const QJsonObject& data)
{
    vehicleData_.setDriverSetSpeedMetersPerSecond(data[JsonFormat::DRIVER_SET_SPEED_METERS_PER_SECOND].toDouble());
    vehicleData_.setDriverSetCurrent(data[JsonFormat::DRIVER_SET_CURRENT].toDouble());
    vehicleData_.setVehicleVelocityMetersPerSecond(data[JsonFormat::VEHICLE_VELOCITY_METERS_PER_SECOND].toDouble());
    vehicleData_.setMotorVelocityRpm(data[JsonFormat::MOTOR_VELOCITY_RPM].toDouble());
    vehicleData_.setIpmHeatSinkTemp(data[JsonFormat::IPM_HEAT_SINK_TEMP].toDouble());
    vehicleData_.setDspBoardTemp(data[JsonFormat::DSP_BOARD_TEMP].toDouble()); 
    vehicleData_.setReceivedErrorCount(data[JsonFormat::RECEIVED_ERROR_COUNT].toDouble());
    vehicleData_.setTransmittedErrorCount(data[JsonFormat::TRANSMITTED_ERROR_COUNT].toDouble());
}
