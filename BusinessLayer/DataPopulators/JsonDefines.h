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

#include <QString>
//TODO finish by adding voltages with all the numbers in them... ask managers how they want it formatted
namespace JsonFormat
{
const int DECIMAL_PRECISION = 2;
const QString DATA_TYPE = "datatype";

const QString PACKETTITLE = "PacketTitle";
const QString TIMESTAMP = "TimeStamp";

const QString KEYMOTOR_ZERO_ALIVE = "Alive";
const QString KEYMOTOR_ZERO_SETCURRENT = "SetCurrent";
const QString KEYMOTOR_ZERO_SETVELOCITY = "SetVelocity";
const QString KEYMOTOR_ZERO_BUSCURRENT = "BusCurrent";
const QString KEYMOTOR_ZERO_BUSVOLTAGE = "BusVoltage";
const QString KEYMOTOR_ZERO_VEHICLEVELOCITY = "VehicleVelocity";



const QString KEYMOTOR_ONE_ALIVE = "Alive";
const QString KEYMOTOR_ONE_SETCURRENT = "SetCurrent";
const QString KEYMOTOR_ONE_SETVELOCITY = "SetVelocity";
const QString KEYMOTOR_ONE_BUSCURRENT = "BusCurrent";
const QString KEYMOTOR_ONE_BUSVOLTAGE = "BusVoltage";
const QString KEYMOTOR_ONE_VEHICLEVELOCITY = "VehicleVelocity";



const QString MOTORDETAILS_ZERO_PHASECCURRENT = "PhaseCCurrent";
const QString MOTORDETAILS_ZERO_PHASEBCURRENT = "PhaseBCurrent";
const QString MOTORDETAILS_ZERO_MOTORVOLTAGEREAL = "MotorVoltageReal";
const QString MOTORDETAILS_ZERO_MOTORVOLTAGEIMAGINARY = "MotorVoltageImaginary";
const QString MOTORDETAILS_ZERO_MOTORCURRENTREAL = "MotorCurrentReal";
const QString MOTORDETAILS_ZERO_MOTORCURRENTIMAGINARY = "MotorCurrentImaginary";
const QString MOTORDETAILS_ZERO_BACKEMFREAL = "BackEmfReal";
const QString MOTORDETAILS_ZERO_VOLTAGERAIL15VSUPPLY = "VoltageRail15VSupply";
const QString MOTORDETAILS_ZERO_VOLTAGERAIL3VSUPPLY = "VoltageRail3VSupply";
const QString MOTORDETAILS_ZERO_VOLTAGERAIL1VSUPPLY = "VoltageRail1VSupply";
const QString MOTORDETAILS_ZERO_HEATSINKTEMP = "HeatSinkTemp";
const QString MOTORDETAILS_ZERO_MOTORTEMP = "MotorTemp";
const QString MOTORDETAILS_ZERO_DSPBOARDTEMP = "DspBoardTemp";
const QString MOTORDETAILS_ZERO_DCBUSAMPHOURS = "DcBusAmpHours";
const QString MOTORDETAILS_ZERO_ODOMETER = "Odometer";
const QString MOTORDETAILS_ZERO_SLIPSPEED = "SlipSpeed";



const QString MOTORDETAILS_ONE_PHASECCURRENT = "PhaseCCurrent";
const QString MOTORDETAILS_ONE_PHASEBCURRENT = "PhaseBCurrent";
const QString MOTORDETAILS_ONE_MOTORVOLTAGEREAL = "MotorVoltageReal";
const QString MOTORDETAILS_ONE_MOTORVOLTAGEIMAGINARY = "MotorVoltageImaginary";
const QString MOTORDETAILS_ONE_MOTORCURRENTREAL = "MotorCurrentReal";
const QString MOTORDETAILS_ONE_MOTORCURRENTIMAGINARY = "MotorCurrentImaginary";
const QString MOTORDETAILS_ONE_BACKEMFREAL = "BackEmfReal";
const QString MOTORDETAILS_ONE_VOLTAGERAIL15VSUPPLY = "VoltageRail15VSupply";
const QString MOTORDETAILS_ONE_VOLTAGERAIL3VSUPPLY = "VoltageRail3VSupply";
const QString MOTORDETAILS_ONE_VOLTAGERAIL1VSUPPLY = "VoltageRail1VSupply";
const QString MOTORDETAILS_ONE_HEATSINKTEMP = "HeatSinkTemp";
const QString MOTORDETAILS_ONE_MOTORTEMP = "MotorTemp";
const QString MOTORDETAILS_ONE_DSPBOARDTEMP = "DspBoardTemp";
const QString MOTORDETAILS_ONE_DCBUSAMPHOURS = "DcBusAmpHours";
const QString MOTORDETAILS_ONE_ODOMETER = "Odometer";
const QString MOTORDETAILS_ONE_SLIPSPEED = "SlipSpeed";



const QString DRIVERCONTROL_ALIVE = "Alive";
const QString DRIVERCONTROL_HEADLIGHTSOFF = "HeadlightsOff";
const QString DRIVERCONTROL_HEADLIGHTSLOW = "HeadlightsLow";
const QString DRIVERCONTROL_HEADLIGHTSHIGH = "HeadlightsHigh";
const QString DRIVERCONTROL_SIGNALRIGHT = "SignalRight";
const QString DRIVERCONTROL_SIGNALLEFT = "SignalLeft";
const QString DRIVERCONTROL_HAZARD = "Hazard";
const QString DRIVERCONTROL_INTERIOR = "Interior";
const QString DRIVERCONTROL_AUX = "Aux";
const QString DRIVERCONTROL_VOLUMEUP = "VolumeUp";
const QString DRIVERCONTROL_VOLUMEDOWN = "VolumeDown";
const QString DRIVERCONTROL_NEXTSONG = "NextSong";
const QString DRIVERCONTROL_PREVSONG = "PrevSong";
const QString DRIVERCONTROL_ACCELERATION = "Acceleration";
const QString DRIVERCONTROL_REGENBRAKING = "RegenBraking";
const QString DRIVERCONTROL_BRAKES = "Brakes";
const QString DRIVERCONTROL_FORWARD = "Forward";
const QString DRIVERCONTROL_REVERSE = "Reverse";
const QString DRIVERCONTROL_PUSHTOTALK = "PushToTalk";
const QString DRIVERCONTROL_HORN = "Horn";
const QString DRIVERCONTROL_RESET = "Reset";



const QString MOTORFAULTS_ZERO_ERRORFLAGS_MOTOROVERSPEED = "MotorOverSpeed";
const QString MOTORFAULTS_ZERO_ERRORFLAGS_SOFTWAREOVERCURRENT = "SoftwareOverCurrent";
const QString MOTORFAULTS_ZERO_ERRORFLAGS_DCBUSOVERVOLTAGE = "DcBusOverVoltage";
const QString MOTORFAULTS_ZERO_ERRORFLAGS_BADMOTORPOSITIONHALLSEQUENCE = "BadMotorPositionHallSequence";
const QString MOTORFAULTS_ZERO_ERRORFLAGS_WATCHDOGCAUSEDLASTRESET = "WatchdogCausedLastReset";
const QString MOTORFAULTS_ZERO_ERRORFLAGS_CONFIGREADERROR = "ConfigReadError";
const QString MOTORFAULTS_ZERO_ERRORFLAGS_RAIL15VUNDERVOLTAGELOCKOUT = "Rail15VUnderVoltageLockOut";
const QString MOTORFAULTS_ZERO_ERRORFLAGS_DESATURATIONFAULT = "DesaturationFault";

const QString MOTORFAULTS_ZERO_LIMITFLAGS_OUTPUTVOLTAGEPWM = "OutputVoltagePwm";
const QString MOTORFAULTS_ZERO_LIMITFLAGS_MOTORCURRENT = "MotorCurrent";
const QString MOTORFAULTS_ZERO_LIMITFLAGS_VELOCITY = "Velocity";
const QString MOTORFAULTS_ZERO_LIMITFLAGS_BUSCURRENT = "BusCurrent";
const QString MOTORFAULTS_ZERO_LIMITFLAGS_BUSVOLTAGEUPPER = "BusVoltageUpper";
const QString MOTORFAULTS_ZERO_LIMITFLAGS_BUSVOLTAGELOWER = "BusVoltageLower";
const QString MOTORFAULTS_ZERO_LIMITFLAGS_IPMORMOTORTEMPERATURE = "IpmOrMotorTemperature";

const QString MOTORFAULTS_ZERO_RXERRORCOUNT = "RxErrorCount";
const QString MOTORFAULTS_ZERO_TXERRORCOUNT = "TxErrorCount";



const QString MOTORFAULTS_ONE_ERRORFLAGS_MOTOROVERSPEED = "MotorOverSpeed";
const QString MOTORFAULTS_ONE_ERRORFLAGS_SOFTWAREOVERCURRENT = "SoftwareOverCurrent";
const QString MOTORFAULTS_ONE_ERRORFLAGS_DCBUSOVERVOLTAGE = "DcBusOverVoltage";
const QString MOTORFAULTS_ONE_ERRORFLAGS_BADMOTORPOSITIONHALLSEQUENCE = "BadMotorPositionHallSequence";
const QString MOTORFAULTS_ONE_ERRORFLAGS_WATCHDOGCAUSEDLASTRESET = "WatchdogCausedLastReset";
const QString MOTORFAULTS_ONE_ERRORFLAGS_CONFIGREADERROR = "ConfigReadError";
const QString MOTORFAULTS_ONE_ERRORFLAGS_RAIL15VUNDERVOLTAGELOCKOUT = "Rail15VUnderVoltageLockOut";
const QString MOTORFAULTS_ONE_ERRORFLAGS_DESATURATIONFAULT = "DesaturationFault";

const QString MOTORFAULTS_ONE_LIMITFLAGS_OUTPUTVOLTAGEPWM = "OutputVoltagePwm";
const QString MOTORFAULTS_ONE_LIMITFLAGS_MOTORCURRENT = "MotorCurrent";
const QString MOTORFAULTS_ONE_LIMITFLAGS_VELOCITY = "Velocity";
const QString MOTORFAULTS_ONE_LIMITFLAGS_BUSCURRENT = "BusCurrent";
const QString MOTORFAULTS_ONE_LIMITFLAGS_BUSVOLTAGEUPPER = "BusVoltageUpper";
const QString MOTORFAULTS_ONE_LIMITFLAGS_BUSVOLTAGELOWER = "BusVoltageLower";
const QString MOTORFAULTS_ONE_LIMITFLAGS_IPMORMOTORTEMPERATURE = "IpmOrMotorTemperature";

const QString MOTORFAULTS_ONE_RXERRORCOUNT = "RxErrorCount";
const QString MOTORFAULTS_ONE_TXERRORCOUNT = "TxErrorCount";



const QString BATTERYFAULTS_CELLOVERVOLTAGE = "CellOverVoltage";
const QString BATTERYFAULTS_CELLUNDERVOLTAGE = "CellUnderVoltage";
const QString BATTERYFAULTS_CELLOVERTEMP = "CellOverTemp";
const QString BATTERYFAULTS_MEASUREMENTUNTRUSTED = "MeasurementUntrusted";
const QString BATTERYFAULTS_CMUCOMMTIMEOUT = "CMUCommTimeout";
const QString BATTERYFAULTS_BMUSETUPMODE = "BMUSetupMode";
const QString BATTERYFAULTS_CMUCANBUSPOWERSTATUS = "CMUCANBusPowerStatus";
const QString BATTERYFAULTS_PACKISOLATIONFAILURE = "PackIsolationFailure";
const QString BATTERYFAULTS_SOFTWAREOVERCURRENT = "SoftwareOverCurrent";
const QString BATTERYFAULTS_CAN12VSUPPLYLOW = "CAN12VSupplyLow";
const QString BATTERYFAULTS_CONTACTORSTUCK = "ContactorStuck";
const QString BATTERYFAULTS_CMUDETECTEDEXTRACELL = "CMUDetectedExtraCell";



const QString BATTERY_ALIVE = "Alive";
const QString BATTERY_PACKSOCAMPHOURS = "PackSocAmpHours";
const QString BATTERY_PACKSOCPERCENTAGE = "PackSocPercentage";
const QString BATTERY_PACKBALANCESOCAMPHOURS = "PackBalanceSocAmpHours";
const QString BATTERY_PACKBALANCESOCPERCENTAGE = "PackBalanceSocPercentage";
const QString BATTERY_CHARGINGCELLVOLTAGEERROR = "ChargingCellVoltageError";
const QString BATTERY_CELLTEMPMARGIN = "CellTempMargin";
const QString BATTERY_DISCHARGINGCELLVOLTAGEERROR = "DischargingCellVoltageError";
const QString BATTERY_TOTALPACKCAPACITY = "TotalPackCapacity";
const QString BATTERY_PRECHARGECONTACTOR0DRIVERSTATUS = "PrechargeContactor0DriverStatus";
const QString BATTERY_PRECHARGECONTACTOR1DRIVERSTATUS = "PrechargeContactor1DriverStatus";
const QString BATTERY_PRECHARGECONTACTOR2DRIVERSTATUS = "PrechargeContactor2DriverStatus";
const QString BATTERY_PRECHARGECONTACTOR0DRIVERERROR = "PrechargeContactor0DriverError";
const QString BATTERY_PRECHARGECONTACTOR1DRIVERERROR = "PrechargeContactor1DriverError";
const QString BATTERY_PRECHARGECONTACTOR2DRIVERERROR = "PrechargeContactor2DriverError";
const QString BATTERY_CONTACTORSUPPLYOK = "ContactorSupplyOk";
const QString BATTERY_PRECHARGESTATE = "PrechargeState";
const QString BATTERY_PRECHARGETIMERELAPSED = "PrechargeTimerElapsed";
const QString BATTERY_PRECHARGETIMERCOUNT = "PrechargeTimerCount";

const QString BATTERY_LOWESTCELLVOLTAGE_VOLTAGE = "Voltage";
const QString BATTERY_LOWESTCELLVOLTAGE_CMUNUMBER = "CmuNumber";
const QString BATTERY_LOWESTCELLVOLTAGE_CELLNUMBER = "CellNumber";
const QString BATTERY_LOWESTCELLTEMP_TEMPERATURE = "Temperature";
const QString BATTERY_LOWESTCELLTEMP_CMUNUMBER = "CmuNumber";
const QString BATTERY_LOWESTCELLTEMP_CELLNUMBER = "CellNumber";

const QString BATTERY_HIGHESTCELLVOLTAGE_VOLTAGE = "Voltage";
const QString BATTERY_HIGHESTCELLVOLTAGE_CMUNUMBER = "CmuNumber";
const QString BATTERY_HIGHESTCELLVOLTAGE_CELLNUMBER = "CellNumber";
const QString BATTERY_HIGHESTCELLTEMP_TEMPERATURE = "Temperature";
const QString BATTERY_HIGHESTCELLTEMP_CMUNUMBER = "CmuNumber";
const QString BATTERY_HIGHESTCELLTEMP_CELLNUMBER = "CellNumber";

const QString BATTERY_VOLTAGE = "Voltage";
const QString BATTERY_CURRENT = "Current";
const QString BATTERY_FAN0SPEED = "Fan0Speed";
const QString BATTERY_FAN1SPEED = "Fan1Speed";
const QString BATTERY_FANCONTACTORSCURRENT = "FanContactorsCurrent";
const QString BATTERY_CMUCURRENT = "CmuCurrent";

const QString CMU_ZERO_VOLTAGES[] = {"One","Two","Three","Four","Five","Six","Seven","Eight"};
const QString CMU_ZERO_PCBTEMP = "PcbTemp";
const QString CMU_ZERO_CELLTEMPS[] = {"One","Two","Three","Four","Five","Six","Seven","Eight",
									"Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen"};
const QString CMU_ONE_VOLTAGES[] = {"One","Two","Three","Four","Five","Six","Seven","Eight"};
const QString CMU_ONE_PCBTEMP = "PcbTemp";
const QString CMU_ONE_CELLTEMPS[] = {"One","Two","Three","Four","Five","Six","Seven","Eight",
									"Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen"};
const QString CMU_TWO_VOLTAGES[] = {"One","Two","Three","Four","Five","Six","Seven","Eight"};
const QString CMU_TWO_PCBTEMP = "PcbTemp";
const QString CMU_TWO_CELLTEMPS[] = {"One","Two","Three","Four","Five","Six","Seven","Eight",
									"Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen"};
const QString CMU_THREE_VOLTAGES[] = {"One","Two","Three","Four","Five","Six","Seven","Eight"};
const QString CMU_THREE_PCBTEMP = "PcbTemp";
const QString CMU_THREE_CELLTEMPS[] = {"One","Two","Three","Four","Five","Six","Seven","Eight",
									"Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen"};

const QString MPPT_ZERO_ALIVE = "Alive";
const QString MPPT_ZERO_ARRAYVOLTAGE = "ArrayVoltage";
const QString MPPT_ZERO_ARRAYCURRENT = "ArrayCurrent";
const QString MPPT_ZERO_BATTERYVOLTAGE = "BatteryVoltage";
const QString MPPT_ZERO_TEMPERATURE = "Temperature";

const QString MPPT_ONE_ALIVE = "Alive";
const QString MPPT_ONE_ARRAYVOLTAGE = "ArrayVoltage";
const QString MPPT_ONE_ARRAYCURRENT = "ArrayCurrent";
const QString MPPT_ONE_BATTERYVOLTAGE = "BatteryVoltage";
const QString MPPT_ONE_TEMPERATURE = "Temperature";

const QString MPPT_TWO_ALIVE = "Alive";
const QString MPPT_TWO_ARRAYVOLTAGE = "ArrayVoltage";
const QString MPPT_TWO_ARRAYCURRENT = "ArrayCurrent";
const QString MPPT_TWO_BATTERYVOLTAGE = "BatteryVoltage";
const QString MPPT_TWO_TEMPERATURE = "Temperature";

																										
const QString LIGHTS_LOWBEAMS = "LowBeams";
const QString LIGHTS_HIGHBEAMS = "HighBeams";
const QString LIGHTS_BRAKES = "Brakes";
const QString LIGHTS_LEFTSIGNAL = "LeftSignal";
const QString LIGHTS_RIGHTSIGNAL = "RightSignal";
const QString LIGHTS_BMSSTROBELIGHT = "BmsStrobeLight";
}
