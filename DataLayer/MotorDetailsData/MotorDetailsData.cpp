#include "MotorDetailsData.h"
#include <QDebug>

MotorDetailsData::MotorDetailsData()
{
}

MotorDetailsData::~MotorDetailsData()
{
}

double MotorDetailsData::motorDetails_Zero_PhaseCCurrent() const
{
    return motorDetails_Zero_PhaseCCurrent_;
}
double MotorDetailsData::motorDetails_Zero_PhaseBCurrent() const
{
    return motorDetails_Zero_PhaseBCurrent_;
}
double MotorDetailsData::motorDetails_Zero_MotorVoltageReal() const
{
    return motorDetails_Zero_MotorVoltageReal_;
}
double MotorDetailsData::motorDetails_Zero_MotorVoltageImaginary() const
{
    return motorDetails_Zero_MotorVoltageImaginary_;
}
double MotorDetailsData::motorDetails_Zero_MotorCurrentReal() const
{
    return motorDetails_Zero_MotorCurrentReal_;
}
double MotorDetailsData::motorDetails_Zero_MotorCurrentImaginary() const
{
    return motorDetails_Zero_MotorCurrentImaginary_;
}
double MotorDetailsData::motorDetails_Zero_BackEmfReal() const
{
    return motorDetails_Zero_BackEmfReal_;
}
double MotorDetailsData::motorDetails_Zero_VoltageRail15VSupply() const
{
    return motorDetails_Zero_VoltageRail15VSupply_;
}
double MotorDetailsData::motorDetails_Zero_VoltageRail3VSupply() const
{
    return motorDetails_Zero_VoltageRail3VSupply_;
}
double MotorDetailsData::motorDetails_Zero_VoltageRail1VSupply() const
{
    return motorDetails_Zero_VoltageRail1VSupply_;
}
double MotorDetailsData::motorDetails_Zero_HeatSinkTemp() const
{
    return motorDetails_Zero_HeatSinkTemp_;
}
double MotorDetailsData::motorDetails_Zero_MotorTemp() const
{
    return motorDetails_Zero_MotorTemp_;
}
double MotorDetailsData::motorDetails_Zero_DspBoardTemp() const
{
    return motorDetails_Zero_DspBoardTemp_;
}
double MotorDetailsData::motorDetails_Zero_DcBusAmpHours() const
{
    return motorDetails_Zero_DcBusAmpHours_;
}
double MotorDetailsData::motorDetails_Zero_Odometer() const
{
    return motorDetails_Zero_Odometer_;
}
double MotorDetailsData::motorDetails_Zero_SlipSpeed() const
{
    return motorDetails_Zero_SlipSpeed_;
}


double MotorDetailsData::motorDetails_One_PhaseCCurrent() const
{
    return motorDetails_One_PhaseCCurrent_;
}
double MotorDetailsData::motorDetails_One_PhaseBCurrent() const
{
    return motorDetails_One_PhaseBCurrent_;
}
double MotorDetailsData::motorDetails_One_MotorVoltageReal() const
{
    return motorDetails_One_MotorVoltageReal_;
}
double MotorDetailsData::motorDetails_One_MotorVoltageImaginary() const
{
    return motorDetails_One_MotorVoltageImaginary_;
}
double MotorDetailsData::motorDetails_One_MotorCurrentReal() const
{
    return motorDetails_One_MotorCurrentReal_;
}
double MotorDetailsData::motorDetails_One_MotorCurrentImaginary() const
{
    return motorDetails_One_MotorCurrentImaginary_;
}
double MotorDetailsData::motorDetails_One_BackEmfReal() const
{
    return motorDetails_One_BackEmfReal_;
}
double MotorDetailsData::motorDetails_One_VoltageRail15VSupply() const
{
    return motorDetails_One_VoltageRail15VSupply_;
}
double MotorDetailsData::motorDetails_One_VoltageRail3VSupply() const
{
    return motorDetails_One_VoltageRail3VSupply_;
}
double MotorDetailsData::motorDetails_One_VoltageRail1VSupply() const
{
    return motorDetails_One_VoltageRail1VSupply_;
}
double MotorDetailsData::motorDetails_One_HeatSinkTemp() const
{
    return motorDetails_One_HeatSinkTemp_;
}
double MotorDetailsData::motorDetails_One_MotorTemp() const
{
    return motorDetails_One_MotorTemp_;
}
double MotorDetailsData::motorDetails_One_DspBoardTemp() const
{
    return motorDetails_One_DspBoardTemp_;
}
double MotorDetailsData::motorDetails_One_DcBusAmpHours() const
{
    return motorDetails_One_DcBusAmpHours_;
}
double MotorDetailsData::motorDetails_One_Odometer() const
{
    return motorDetails_One_Odometer_;
}
double MotorDetailsData::motorDetails_One_SlipSpeed() const
{
    return motorDetails_One_SlipSpeed_;
}


void MotorDetailsData::setMotorDetails_Zero_PhaseCCurrent(double motorDetails_Zero_PhaseCCurrent)
{
    motorDetails_Zero_PhaseCCurrent_ = motorDetails_Zero_PhaseCCurrent;
    emit motorDetails_Zero_PhaseCCurrentReceived(motorDetails_Zero_PhaseCCurrent_);
}
void MotorDetailsData::setMotorDetails_Zero_PhaseBCurrent(double motorDetails_Zero_PhaseBCurrent)
{
    motorDetails_Zero_PhaseBCurrent_ = motorDetails_Zero_PhaseBCurrent;
    emit motorDetails_Zero_PhaseBCurrentReceived(motorDetails_Zero_PhaseBCurrent_);
}
void MotorDetailsData::setMotorDetails_Zero_MotorVoltageReal(double motorDetails_Zero_MotorVoltageReal)
{
    motorDetails_Zero_MotorVoltageReal_ = motorDetails_Zero_MotorVoltageReal;
    emit motorDetails_Zero_MotorVoltageRealReceived(motorDetails_Zero_MotorVoltageReal_);
}
void MotorDetailsData::setMotorDetails_Zero_MotorVoltageImaginary(double motorDetails_Zero_MotorVoltageImaginary)
{
    motorDetails_Zero_MotorVoltageImaginary_ = motorDetails_Zero_MotorVoltageImaginary;
    emit motorDetails_Zero_MotorVoltageImaginaryReceived(motorDetails_Zero_MotorVoltageImaginary_);
}
void MotorDetailsData::setMotorDetails_Zero_MotorCurrentReal(double motorDetails_Zero_MotorCurrentReal)
{
    motorDetails_Zero_MotorCurrentReal_ = motorDetails_Zero_MotorCurrentReal;
    emit motorDetails_Zero_MotorCurrentRealReceived(motorDetails_Zero_MotorCurrentReal_);
}
void MotorDetailsData::setMotorDetails_Zero_MotorCurrentImaginary(double motorDetails_Zero_MotorCurrentImaginary)
{
    motorDetails_Zero_MotorCurrentImaginary_ = motorDetails_Zero_MotorCurrentImaginary;
    emit motorDetails_Zero_MotorCurrentImaginaryReceived(motorDetails_Zero_MotorCurrentImaginary_);
}
void MotorDetailsData::setMotorDetails_Zero_BackEmfReal(double motorDetails_Zero_BackEmfReal)
{
    motorDetails_Zero_BackEmfReal_ = motorDetails_Zero_BackEmfReal;
    emit motorDetails_Zero_BackEmfRealReceived(motorDetails_Zero_BackEmfReal_);
}
void MotorDetailsData::setMotorDetails_Zero_VoltageRail15VSupply(double motorDetails_Zero_VoltageRail15VSupply)
{
    motorDetails_Zero_VoltageRail15VSupply_ = motorDetails_Zero_VoltageRail15VSupply;
    emit motorDetails_Zero_VoltageRail15VSupplyReceived(motorDetails_Zero_VoltageRail15VSupply_);
}
void MotorDetailsData::setMotorDetails_Zero_VoltageRail3VSupply(double motorDetails_Zero_VoltageRail3VSupply)
{
    motorDetails_Zero_VoltageRail3VSupply_ = motorDetails_Zero_VoltageRail3VSupply;
    emit motorDetails_Zero_VoltageRail3VSupplyReceived(motorDetails_Zero_VoltageRail3VSupply_);
}
void MotorDetailsData::setMotorDetails_Zero_VoltageRail1VSupply(double motorDetails_Zero_VoltageRail1VSupply)
{
    motorDetails_Zero_VoltageRail1VSupply_ = motorDetails_Zero_VoltageRail1VSupply;
    emit motorDetails_Zero_VoltageRail1VSupplyReceived(motorDetails_Zero_VoltageRail1VSupply_);
}
void MotorDetailsData::setMotorDetails_Zero_HeatSinkTemp(double motorDetails_Zero_HeatSinkTemp)
{
    motorDetails_Zero_HeatSinkTemp_ = motorDetails_Zero_HeatSinkTemp;
    emit motorDetails_Zero_HeatSinkTempReceived(motorDetails_Zero_HeatSinkTemp_);
}
void MotorDetailsData::setMotorDetails_Zero_MotorTemp(double motorDetails_Zero_MotorTemp)
{
    motorDetails_Zero_MotorTemp_ = motorDetails_Zero_MotorTemp;
    emit motorDetails_Zero_MotorTempReceived(motorDetails_Zero_MotorTemp_);
}
void MotorDetailsData::setMotorDetails_Zero_DspBoardTemp(double motorDetails_Zero_DspBoardTemp)
{
    motorDetails_Zero_DspBoardTemp_ = motorDetails_Zero_DspBoardTemp;
    emit motorDetails_Zero_DspBoardTempReceived(motorDetails_Zero_DspBoardTemp_);
}
void MotorDetailsData::setMotorDetails_Zero_DcBusAmpHours(double motorDetails_Zero_DcBusAmpHours)
{
    motorDetails_Zero_DcBusAmpHours_ = motorDetails_Zero_DcBusAmpHours;
    emit motorDetails_Zero_DcBusAmpHoursReceived(motorDetails_Zero_DcBusAmpHours_);
}
void MotorDetailsData::setMotorDetails_Zero_Odometer(double motorDetails_Zero_Odometer)
{
    motorDetails_Zero_Odometer_ = motorDetails_Zero_Odometer;
    emit motorDetails_Zero_OdometerReceived(motorDetails_Zero_Odometer_);
}
void MotorDetailsData::setMotorDetails_Zero_SlipSpeed(double motorDetails_Zero_SlipSpeed)
{
    motorDetails_Zero_SlipSpeed_ = motorDetails_Zero_SlipSpeed;
    emit motorDetails_Zero_SlipSpeedReceived(motorDetails_Zero_SlipSpeed_);
}


void MotorDetailsData::setMotorDetails_One_PhaseCCurrent(double motorDetails_One_PhaseCCurrent)
{
    motorDetails_One_PhaseCCurrent_ = motorDetails_One_PhaseCCurrent;
    emit motorDetails_One_PhaseCCurrentReceived(motorDetails_One_PhaseCCurrent_);
}
void MotorDetailsData::setMotorDetails_One_PhaseBCurrent(double motorDetails_One_PhaseBCurrent)
{
    motorDetails_One_PhaseBCurrent_ = motorDetails_One_PhaseBCurrent;
    emit motorDetails_One_PhaseBCurrentReceived(motorDetails_One_PhaseBCurrent_);
}
void MotorDetailsData::setMotorDetails_One_MotorVoltageReal(double motorDetails_One_MotorVoltageReal)
{
    motorDetails_One_MotorVoltageReal_ = motorDetails_One_MotorVoltageReal;
    emit motorDetails_One_MotorVoltageRealReceived(motorDetails_One_MotorVoltageReal_);
}
void MotorDetailsData::setMotorDetails_One_MotorVoltageImaginary(double motorDetails_One_MotorVoltageImaginary)
{
    motorDetails_One_MotorVoltageImaginary_ = motorDetails_One_MotorVoltageImaginary;
    emit motorDetails_One_MotorVoltageImaginaryReceived(motorDetails_One_MotorVoltageImaginary_);
}
void MotorDetailsData::setMotorDetails_One_MotorCurrentReal(double motorDetails_One_MotorCurrentReal)
{
    motorDetails_One_MotorCurrentReal_ = motorDetails_One_MotorCurrentReal;
    emit motorDetails_One_MotorCurrentRealReceived(motorDetails_One_MotorCurrentReal_);
}
void MotorDetailsData::setMotorDetails_One_MotorCurrentImaginary(double motorDetails_One_MotorCurrentImaginary)
{
    motorDetails_One_MotorCurrentImaginary_ = motorDetails_One_MotorCurrentImaginary;
    emit motorDetails_One_MotorCurrentImaginaryReceived(motorDetails_One_MotorCurrentImaginary_);
}
void MotorDetailsData::setMotorDetails_One_BackEmfReal(double motorDetails_One_BackEmfReal)
{
    motorDetails_One_BackEmfReal_ = motorDetails_One_BackEmfReal;
    emit motorDetails_One_BackEmfRealReceived(motorDetails_One_BackEmfReal_);
}
void MotorDetailsData::setMotorDetails_One_VoltageRail15VSupply(double motorDetails_One_VoltageRail15VSupply)
{
    motorDetails_One_VoltageRail15VSupply_ = motorDetails_One_VoltageRail15VSupply;
    emit motorDetails_One_VoltageRail15VSupplyReceived(motorDetails_One_VoltageRail15VSupply_);
}
void MotorDetailsData::setMotorDetails_One_VoltageRail3VSupply(double motorDetails_One_VoltageRail3VSupply)
{
    motorDetails_One_VoltageRail3VSupply_ = motorDetails_One_VoltageRail3VSupply;
    emit motorDetails_One_VoltageRail3VSupplyReceived(motorDetails_One_VoltageRail3VSupply_);
}
void MotorDetailsData::setMotorDetails_One_VoltageRail1VSupply(double motorDetails_One_VoltageRail1VSupply)
{
    motorDetails_One_VoltageRail1VSupply_ = motorDetails_One_VoltageRail1VSupply;
    emit motorDetails_One_VoltageRail1VSupplyReceived(motorDetails_One_VoltageRail1VSupply_);
}
void MotorDetailsData::setMotorDetails_One_HeatSinkTemp(double motorDetails_One_HeatSinkTemp)
{
    motorDetails_One_HeatSinkTemp_ = motorDetails_One_HeatSinkTemp;
    emit motorDetails_One_HeatSinkTempReceived(motorDetails_One_HeatSinkTemp_);
}
void MotorDetailsData::setMotorDetails_One_MotorTemp(double motorDetails_One_MotorTemp)
{
    motorDetails_One_MotorTemp_ = motorDetails_One_MotorTemp;
    emit motorDetails_One_MotorTempReceived(motorDetails_One_MotorTemp_);
}
void MotorDetailsData::setMotorDetails_One_DspBoardTemp(double motorDetails_One_DspBoardTemp)
{
    motorDetails_One_DspBoardTemp_ = motorDetails_One_DspBoardTemp;
    emit motorDetails_One_DspBoardTempReceived(motorDetails_One_DspBoardTemp_);
}
void MotorDetailsData::setMotorDetails_One_DcBusAmpHours(double motorDetails_One_DcBusAmpHours)
{
    motorDetails_One_DcBusAmpHours_ = motorDetails_One_DcBusAmpHours;
    emit motorDetails_One_DcBusAmpHoursReceived(motorDetails_One_DcBusAmpHours_);
}
void MotorDetailsData::setMotorDetails_One_Odometer(double motorDetails_One_Odometer)
{
    motorDetails_One_Odometer_ = motorDetails_One_Odometer;
    emit motorDetails_One_OdometerReceived(motorDetails_One_Odometer_);
}
void MotorDetailsData::setMotorDetails_One_SlipSpeed(double motorDetails_One_SlipSpeed)
{
    motorDetails_One_SlipSpeed_ = motorDetails_One_SlipSpeed;
    emit motorDetails_One_SlipSpeedReceived(motorDetails_One_SlipSpeed_);
}
