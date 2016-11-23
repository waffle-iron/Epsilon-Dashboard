#include "MPPTData.h"
#include <QDebug>

MPPTData::MPPTData()
{
}

MPPTData::~MPPTData()
{
}
bool MPPTData::MPPT_Zero_Alive() const
{
    return MPPT_Zero_Alive_;
}
double MPPTData::MPPT_Zero_ArrayVoltage() const
{
    return MPPT_Zero_ArrayVoltage_;
}
double MPPTData::MPPT_Zero_ArrayCurrent() const
{
    return MPPT_Zero_ArrayCurrent_;
}
double MPPTData::MPPT_Zero_BatteryVoltage() const
{
    return MPPT_Zero_BatteryVoltage_;
}
double MPPTData::MPPT_Zero_Temperature() const
{
    return MPPT_Zero_Temperature_;
}
bool MPPTData::MPPT_One_Alive() const
{
    return MPPT_One_Alive_;
}
double MPPTData::MPPT_One_ArrayVoltage() const
{
    return MPPT_One_ArrayVoltage_;
}
double MPPTData::MPPT_One_ArrayCurrent() const
{
    return MPPT_One_ArrayCurrent_;
}
double MPPTData::MPPT_One_BatteryVoltage() const
{
    return MPPT_One_BatteryVoltage_;
}
double MPPTData::MPPT_One_Temperature() const
{
    return MPPT_One_Temperature_;
}
bool MPPTData::MPPT_Two_Alive() const
{
    return MPPT_Two_Alive_;
}
double MPPTData::MPPT_Two_ArrayVoltage() const
{
    return MPPT_Two_ArrayVoltage_;
}
double MPPTData::MPPT_Two_ArrayCurrent() const
{
    return MPPT_Two_ArrayCurrent_;
}
double MPPTData::MPPT_Two_BatteryVoltage() const
{
    return MPPT_Two_BatteryVoltage_;
}
double MPPTData::MPPT_Two_Temperature() const
{
    return MPPT_Two_Temperature_;
}

void MPPTData::setMPPT_Zero_Alive(bool MPPT_Zero_Alive)
{
    MPPT_Zero_Alive_ = MPPT_Zero_Alive;
    emit MPPT_Zero_AliveReceived(MPPT_Zero_Alive_);
}
void MPPTData::setMPPT_Zero_ArrayVoltage(double MPPT_Zero_ArrayVoltage)
{
    MPPT_Zero_ArrayVoltage_ = MPPT_Zero_ArrayVoltage;
    emit MPPT_Zero_ArrayVoltageReceived(MPPT_Zero_ArrayVoltage_);
}
void MPPTData::setMPPT_Zero_ArrayCurrent(double MPPT_Zero_ArrayCurrent)
{
    MPPT_Zero_ArrayCurrent_ = MPPT_Zero_ArrayCurrent;
    emit MPPT_Zero_ArrayCurrentReceived(MPPT_Zero_ArrayCurrent_);
}
void MPPTData::setMPPT_Zero_BatteryVoltage(double MPPT_Zero_BatteryVoltage)
{
    MPPT_Zero_BatteryVoltage_ = MPPT_Zero_BatteryVoltage;
    emit MPPT_Zero_BatteryVoltageReceived(MPPT_Zero_BatteryVoltage_);
}
void MPPTData::setMPPT_Zero_Temperature(double MPPT_Zero_Temperature)
{
    MPPT_Zero_Temperature_ = MPPT_Zero_Temperature;
    emit MPPT_Zero_TemperatureReceived(MPPT_Zero_Temperature_);
}
void MPPTData::setMPPT_One_Alive(bool MPPT_One_Alive)
{
    MPPT_One_Alive_ = MPPT_One_Alive;
    emit MPPT_One_AliveReceived(MPPT_One_Alive_);
}
void MPPTData::setMPPT_One_ArrayVoltage(double MPPT_One_ArrayVoltage)
{
    MPPT_One_ArrayVoltage_ = MPPT_One_ArrayVoltage;
    emit MPPT_One_ArrayVoltageReceived(MPPT_One_ArrayVoltage_);
}
void MPPTData::setMPPT_One_ArrayCurrent(double MPPT_One_ArrayCurrent)
{
    MPPT_One_ArrayCurrent_ = MPPT_One_ArrayCurrent;
    emit MPPT_One_ArrayCurrentReceived(MPPT_One_ArrayCurrent_);
}
void MPPTData::setMPPT_One_BatteryVoltage(double MPPT_One_BatteryVoltage)
{
    MPPT_One_BatteryVoltage_ = MPPT_One_BatteryVoltage;
    emit MPPT_One_BatteryVoltageReceived(MPPT_One_BatteryVoltage_);
}
void MPPTData::setMPPT_One_Temperature(double MPPT_One_Temperature)
{
    MPPT_One_Temperature_ = MPPT_One_Temperature;
    emit MPPT_One_TemperatureReceived(MPPT_One_Temperature_);
}
void MPPTData::setMPPT_Two_Alive(bool MPPT_Two_Alive)
{
    MPPT_Two_Alive_ = MPPT_Two_Alive;
    emit MPPT_Two_AliveReceived(MPPT_Two_Alive_);
}
void MPPTData::setMPPT_Two_ArrayVoltage(double MPPT_Two_ArrayVoltage)
{
    MPPT_Two_ArrayVoltage_ = MPPT_Two_ArrayVoltage;
    emit MPPT_Two_ArrayVoltageReceived(MPPT_Two_ArrayVoltage_);
}
void MPPTData::setMPPT_Two_ArrayCurrent(double MPPT_Two_ArrayCurrent)
{
    MPPT_Two_ArrayCurrent_ = MPPT_Two_ArrayCurrent;
    emit MPPT_Two_ArrayCurrentReceived(MPPT_Two_ArrayCurrent_);
}
void MPPTData::setMPPT_Two_BatteryVoltage(double MPPT_Two_BatteryVoltage)
{
    MPPT_Two_BatteryVoltage_ = MPPT_Two_BatteryVoltage;
    emit MPPT_Two_BatteryVoltageReceived(MPPT_Two_BatteryVoltage_);
}
void MPPTData::setMPPT_Two_Temperature(double MPPT_Two_Temperature)
{
    MPPT_Two_Temperature_ = MPPT_Two_Temperature;
    emit MPPT_Two_TemperatureReceived(MPPT_Two_Temperature_);
}
