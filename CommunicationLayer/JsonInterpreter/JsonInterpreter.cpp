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

#include <QDebug>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonParseError>

#include "JsonInterpreter.h"

#include "CommunicationLayer/CommDeviceControl/I_CommDevice.h"
#include "CommunicationLayer/JsonInterpreter/JsonDefines.h"

JsonInterpreter::JsonInterpreter(I_CommDevice& inputDevice)
{
    Q_UNUSED(inputDevice);
}

void JsonInterpreter::handleIncomingData(const QByteArray& data)
{
    QJsonParseError err;
    QJsonObject parsedData = QJsonDocument::fromJson(data, &err).object();
    if (err.error != QJsonParseError::NoError)
    {
        qDebug() << err.errorString();
        emit invalidDataReceived();
        return;
    }

    QString dataType = parsedData[JsonFormat::DATA_TYPE].toString();
    if(dataType == JsonFormat::BATTERY)
    {
        emit batteryDataReceived(parsedData);
    }
    else if(dataType == JsonFormat::FAULTS)
    {
        emit faultDataReceived(parsedData);
    }
    else if(dataType == JsonFormat::POWER)
    {
        emit powerDataReceived(parsedData);
    }
    else if(dataType == JsonFormat::VEHICLE)
    {
        emit vehicleDataReceived(parsedData);
    }
    else 
    {
        emit invalidDataReceived();
    }
}
