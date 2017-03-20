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

#include "BatteryFaultsPopulator.h"

#include "../BusinessLayer/DataPopulators/JsonDefines.h"

BatteryFaultsPopulator::BatteryFaultsPopulator(I_BatteryFaultsData& batteryFaultsData)
    : batteryFaultsData_(batteryFaultsData)
{
}

void BatteryFaultsPopulator::populateData(const QJsonObject& data)
{
    QJsonValue value = data.value(JsonFormat::BATTERYFAULTS);
    batteryFaultsData_.setCellOverVoltage(value.toObject().value(JsonFormat::BATTERYFAULTS_CELLOVERVOLTAGE).toBool());
    batteryFaultsData_.setCellUnderVoltage(value.toObject().value(JsonFormat::BATTERYFAULTS_CELLUNDERVOLTAGE).toBool());
    batteryFaultsData_.setCellOverTemperature(value.toObject().value(JsonFormat::BATTERYFAULTS_CELLOVERTEMP).toBool());
    batteryFaultsData_.setMeasurementUntrusted(value.toObject().value(JsonFormat::BATTERYFAULTS_MEASUREMENTUNTRUSTED).toBool());
    batteryFaultsData_.setCmuCommTimeout(value.toObject().value(JsonFormat::BATTERYFAULTS_CMUCOMMTIMEOUT).toBool());
    batteryFaultsData_.setBmuIsInSetupMode(value.toObject().value(JsonFormat::BATTERYFAULTS_BMUSETUPMODE).toBool());
    batteryFaultsData_.setCmuCanBusPowerStatus(value.toObject().value(JsonFormat::BATTERYFAULTS_CMUCANBUSPOWERSTATUS).toBool());
    batteryFaultsData_.setPackIsolationTestFailure(value.toObject().value(JsonFormat::BATTERYFAULTS_PACKISOLATIONFAILURE).toBool());
    batteryFaultsData_.setSoftwareOverCurrentMeasured(value.toObject().value(JsonFormat::BATTERYFAULTS_SOFTWAREOVERCURRENT).toBool());
    batteryFaultsData_.setCanSupplyIsLow(value.toObject().value(JsonFormat::BATTERYFAULTS_CAN12VSUPPLYLOW).toBool());
    batteryFaultsData_.setContactorIsStuck(value.toObject().value(JsonFormat::BATTERYFAULTS_CONTACTORSTUCK).toBool());
    batteryFaultsData_.setCmuDetectedExtraCellPresent(value.toObject().value(JsonFormat::BATTERYFAULTS_CMUDETECTEDEXTRACELL).toBool());
}
