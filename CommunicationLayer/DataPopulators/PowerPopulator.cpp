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

#include "PowerPopulator.h"

#include "CommunicationLayer/JsonInterpreter/I_JsonInterpreter.h"
#include "CommunicationLayer/JsonInterpreter/JsonDefines.h"
#include "DataLayer/PowerData/I_PowerData.h"

PowerPopulator::PowerPopulator(I_JsonInterpreter& jsonInterpreter,
                                   I_PowerData& powerData)
    : jsonInterpreter_(jsonInterpreter)
    , powerData_(powerData)
{
    connect(&jsonInterpreter_, SIGNAL(powerDataReceived(const QJsonObject&)),
            this, SLOT(populateData(const QJsonObject&)));
}

void PowerPopulator::populateData(const QJsonObject& data)
{
    powerData_.setBusCurrentA(data[JsonFormat::BUS_CURRENT_A].toDouble());
    powerData_.setBusVoltage(data[JsonFormat::BUS_VOLTAGE].toDouble());
    powerData_.setMotorVoltageReal(data[JsonFormat::MOTOR_VOLTAGE_REAL].toDouble());
    powerData_.setMotorCurrentReal(data[JsonFormat::MOTOR_CURRENT_REAL].toDouble());
    powerData_.setBackEmfImaginary(data[JsonFormat::BACK_EMF_IMAGINARY].toDouble());
    powerData_.setDcBusAmpHours(data[JsonFormat::DC_BUS_AMP_HOURS].toDouble());
}
