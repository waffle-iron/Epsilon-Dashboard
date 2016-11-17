#include <QJsonObject>

#include "FaultsPopulator.h"

#include "CommunicationLayer/JsonInterpreter/I_JsonInterpreter.h"
#include "CommunicationLayer/JsonInterpreter/JsonDefines.h"
#include "DataLayer/FaultsData/I_FaultsData.h"
#include "DataLayer/FaultsData/MotorFaults.h"
#include "DataLayer/FaultsData/LimitFlags.h"
#include "DataLayer/FaultsData/BatteryFaults.h"

FaultsPopulator::FaultsPopulator(I_JsonInterpreter& jsonInterpreter,
                                 I_FaultsData& faultsData)
    : jsonInterpreter_(jsonInterpreter)
    , faultsData_(faultsData)
{
    connect(&jsonInterpreter_, SIGNAL(packetDecoded(const FaultsMessage&)),
            this, SLOT(populateData(const QJsonObject&)));
}

void FaultsPopulator::populateData(const QJsonObject& data)
{
    faultsData_.setMotorOneFaults(getMotorFaults(JsonFormat::MOTOR_ONE_FAULTS, data));
    faultsData_.setMotorOneLimitFlags(getLimitFlags(JsonFormat::MOTOR_ONE_LIMIT_FLAGS, data));
    faultsData_.setMotorTwoFaults(getMotorFaults(JsonFormat::MOTOR_TWO_FAULTS, data));
    faultsData_.setMotorTwoLimitFlags(getLimitFlags(JsonFormat::MOTOR_TWO_LIMIT_FLAGS, data));
    faultsData_.setBatteryFaults(getBatteryFaults(data));
}

MotorFaults FaultsPopulator::getMotorFaults(const QString& motorNumber, const QJsonObject& data)
{
    MotorFaults motorFaults;
    motorFaults.setHardwareOverCurrent(data[motorNumber].toObject()[JsonFormat::HARDWARE_OVER_CURRENT].toBool());
    motorFaults.setSoftwareOverCurrent(data[motorNumber].toObject()[JsonFormat::SOFTWARE_OVER_CURRENT].toBool());
    motorFaults.setDcBusOverVoltage(data[motorNumber].toObject()[JsonFormat::DC_BUS_OVER_VOLTAGE].toBool());
    motorFaults.setBadMotorPositionHallSequence(data[motorNumber].toObject()[JsonFormat::BAD_MOTOR_POSITION_HALL_SEQUENCE].toBool());
    motorFaults.setWatchdogCausedLastReset(data[motorNumber].toObject()[JsonFormat::WATCHDOG_CAUSED_LAST_RESET].toBool());
    motorFaults.setConfigReadError(data[motorNumber].toObject()[JsonFormat::CONFIG_READ_ERROR].toBool());
    motorFaults.setRailUnderVoltageLockOut(data[motorNumber].toObject()[JsonFormat::RAIL_UNDER_VOLTAGE_LOCK_OUT].toBool());
    motorFaults.setDesaturationFault(data[motorNumber].toObject()[JsonFormat::DESATURATION_FAULT].toBool());
    return motorFaults;
}

LimitFlags FaultsPopulator::getLimitFlags(const QString& motorNumber, const QJsonObject& data)
{
    LimitFlags limitFlags;
    limitFlags.setOutputVoltagePwmLimit(data[motorNumber].toObject()[JsonFormat::OUTPUT_VOLTAGE_PWM_LIMIT].toBool());
    limitFlags.setMotorCurrentLimit(data[motorNumber].toObject()[JsonFormat::MOTOR_CURRENT_LIMIT].toBool());
    limitFlags.setVelocityLimit(data[motorNumber].toObject()[JsonFormat::VELOCITY_LIMIT].toBool());
    limitFlags.setBusCurrentLimit(data[motorNumber].toObject()[JsonFormat::BUS_CURRENT_LIMIT].toBool());
    limitFlags.setBusVoltageUpperLimit(data[motorNumber].toObject()[JsonFormat::BUS_VOLTAGE_UPPER_LIMIT].toBool());
    limitFlags.setBusVoltageLowerLimit(data[motorNumber].toObject()[JsonFormat::BUS_VOLTAGE_LOWER_LIMIT].toBool());
    limitFlags.setIpmOrMotorTelemetryLimit(data[motorNumber].toObject()[JsonFormat::IPM_OR_MOTOR_TELEMETRY_LIMIT].toBool());
    return limitFlags;
}

BatteryFaults FaultsPopulator::getBatteryFaults(const QJsonObject& data)
{
    BatteryFaults batteryFaults;
    batteryFaults.setCellOverVoltage(data[JsonFormat::CELL_OVER_VOLTAGE].toBool());
    batteryFaults.setCellUnderVoltage(data[JsonFormat::CELL_UNDER_VOLTAGE].toBool());
    batteryFaults.setCellOverTemperature(data[JsonFormat::CELL_OVER_TEMPERATURE].toBool());
    batteryFaults.setMeasurementUntrusted(data[JsonFormat::MEASUREMENT_UNTRUSTED].toBool());
    batteryFaults.setCmuCommTimeout(data[JsonFormat::CMU_COMM_TIMEOUT].toBool());
    batteryFaults.setVehicleCommTimeout(data[JsonFormat::VEHICLE_COMM_TIMEOUT].toBool());
    batteryFaults.setBmuIsInSetupMode(data[JsonFormat::BMU_IS_IN_SETUP_MODE].toBool());
    batteryFaults.setCmuCanBusPowerStatus(data[JsonFormat::CMU_CAN_BUS_POWER_STATUS].toBool());
    batteryFaults.setPackIsolationTestFailure(data[JsonFormat::PACK_ISOLATION_TEST_FAILURE].toBool());
    batteryFaults.setSoftwareOverCurrentMeasured(data[JsonFormat::SOFTWARE_OVER_CURRENT_MEASURED].toBool());
    batteryFaults.setCanSupplyIsLow(data[JsonFormat::CAN_SUPPLY_IS_LOW].toBool());
    batteryFaults.setContactorIsStuck(data[JsonFormat::CONTACTOR_IS_STUCK].toBool());
    batteryFaults.setCmuDetectedExtraCellPresent(data[JsonFormat::CMU_DETECTED_EXTRA_CELL_PRESENT].toBool());
    return batteryFaults;
}
