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
#include <QJsonArray>

#include "KeyMotorPopulator.h"

#include "CommunicationLayer/JsonReceiver/I_JsonReceiver.h"
#include "BusinessLayer/DataPopulators/JsonDefines.h"
#include "DataLayer/KeyMotorData/I_KeyMotorData.h"

BatteryPopulator::BatteryPopulator(I_JsonReceiver& jsonReceiver,
                                   I_BatteryData& batteryData)
    : jsonReceiver_(jsonReceiver)
    , keyMotorData_(batteryData)
{
    connect(&jsonReceiver_, SIGNAL(dataReceived(const QJsonObject&)),
            this, SLOT(populateData(const QJsonObject&)));
}

void keyMotorPopulator::populateData(const QJsonObject& data)
{
    batteryData_.setBatteryVoltage(data[JsonFormat::BATTERY_VOLTAGE].toDouble());
    batteryData_.setBatteryCurrent(data[JsonFormat::BATTERY_CURRENT].toDouble());
    
    batteryData_.setMod0PcbTemperature(data[JsonFormat::MOD_0].toObject()[JsonFormat::PCB_TEMPERATURE].toDouble());
    batteryData_.setMod0CellTemperature(data[JsonFormat::MOD_0].toObject()[JsonFormat::CELL_TEMPERATURE].toDouble());
    QJsonArray jsonMod0CellVoltages = data[JsonFormat::MOD_0].toObject()[JsonFormat::CELL_VOLTAGES].toArray();
    QList<double> mod0CellVoltages;
    foreach(const QJsonValue& value, jsonMod0CellVoltages)
    {
        mod0CellVoltages.append(value.toDouble());
    }
    batteryData_.setMod0CellVoltages(mod0CellVoltages);

    batteryData_.setMod1PcbTemperature(data[JsonFormat::MOD_1].toObject()[JsonFormat::PCB_TEMPERATURE].toDouble());
    batteryData_.setMod1CellTemperature(data[JsonFormat::MOD_1].toObject()[JsonFormat::CELL_TEMPERATURE].toDouble());
    QJsonArray jsonMod1CellVoltages = data[JsonFormat::MOD_1].toObject()[JsonFormat::CELL_VOLTAGES].toArray();
    QList<double> mod1CellVoltages;
    foreach(const QJsonValue& value, jsonMod1CellVoltages)
    {
        mod1CellVoltages.append(value.toDouble());
    }
    batteryData_.setMod1CellVoltages(mod1CellVoltages);

    batteryData_.setMod2PcbTemperature(data[JsonFormat::MOD_2].toObject()[JsonFormat::PCB_TEMPERATURE].toDouble());
    batteryData_.setMod2CellTemperature(data[JsonFormat::MOD_2].toObject()[JsonFormat::CELL_TEMPERATURE].toDouble());
    QJsonArray jsonMod2CellVoltages = data[JsonFormat::MOD_2].toObject()[JsonFormat::CELL_VOLTAGES].toArray();
    QList<double> mod2CellVoltages;
    foreach(const QJsonValue& value, jsonMod2CellVoltages)
    {
        mod2CellVoltages.append(value.toDouble());
    }
    batteryData_.setMod2CellVoltages(mod2CellVoltages);

    batteryData_.setMod3PcbTemperature(data[JsonFormat::MOD_3].toObject()[JsonFormat::PCB_TEMPERATURE].toDouble());
    batteryData_.setMod3CellTemperature(data[JsonFormat::MOD_3].toObject()[JsonFormat::CELL_TEMPERATURE].toDouble());
    QJsonArray jsonMod3CellVoltages = data[JsonFormat::MOD_3].toObject()[JsonFormat::CELL_VOLTAGES].toArray();
    QList<double> mod3CellVoltages;
    foreach(const QJsonValue& value, jsonMod3CellVoltages)
    {
        mod3CellVoltages.append(value.toDouble());
    }
    batteryData_.setMod3CellVoltages(mod3CellVoltages);
}
