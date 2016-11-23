#pragma once

#include "I_MotorDetailsData.h"

class MotorDetailsData : public I_MotorDetailsData
{
public:
    MotorDetailsData();
    virtual ~MotorDetailsData();

    double motorDetails_Zero_PhaseCCurrent() const;
    double motorDetails_Zero_PhaseBCurrent() const;
    double motorDetails_Zero_MotorVoltageReal() const;
    double motorDetails_Zero_MotorVoltageImaginary() const;
    double motorDetails_Zero_MotorCurrentReal() const;
    double motorDetails_Zero_MotorCurrentImaginary() const;
    double motorDetails_Zero_BackEmfReal() const;
    double motorDetails_Zero_VoltageRail15VSupply() const;
    double motorDetails_Zero_VoltageRail3VSupply() const;
    double motorDetails_Zero_VoltageRail1VSupply() const;
    double motorDetails_Zero_HeatSinkTemp() const;
    double motorDetails_Zero_MotorTemp() const;
    double motorDetails_Zero_DspBoardTemp() const;
    double motorDetails_Zero_DcBusAmpHours() const;
    double motorDetails_Zero_Odometer() const;
    double motorDetails_Zero_SlipSpeed() const;

    double motorDetails_One_PhaseCCurrent() const;
    double motorDetails_One_PhaseBCurrent() const;
    double motorDetails_One_MotorVoltageReal() const;
    double motorDetails_One_MotorVoltageImaginary() const;
    double motorDetails_One_MotorCurrentReal() const;
    double motorDetails_One_MotorCurrentImaginary() const;
    double motorDetails_One_BackEmfReal() const;
    double motorDetails_One_VoltageRail15VSupply() const;
    double motorDetails_One_VoltageRail3VSupply() const;
    double motorDetails_One_VoltageRail1VSupply() const;
    double motorDetails_One_HeatSinkTemp() const;
    double motorDetails_One_MotorTemp() const;
    double motorDetails_One_DspBoardTemp() const;
    double motorDetails_One_DcBusAmpHours() const;
    double motorDetails_One_Odometer() const;
    double motorDetails_One_SlipSpeed() const;

    void setMotorDetails_Zero_PhaseCCurrent(double motorDetails_Zero_PhaseCCurrent);
    void setMotorDetails_Zero_PhaseBCurrent(double motorDetails_Zero_PhaseBCurrent);
    void setMotorDetails_Zero_MotorVoltageReal(double motorDetails_Zero_MotorVoltageReal);
    void setMotorDetails_Zero_MotorVoltageImaginary(double motorDetails_Zero_MotorVoltageImaginary);
    void setMotorDetails_Zero_MotorCurrentReal(double motorDetails_Zero_MotorCurrentReal);
    void setMotorDetails_Zero_MotorCurrentImaginary(double motorDetails_Zero_MotorCurrentImaginary);
    void setMotorDetails_Zero_BackEmfReal(double motorDetails_Zero_BackEmfReal);
    void setMotorDetails_Zero_VoltageRail15VSupply(double motorDetails_Zero_VoltageRail15VSupply);
    void setMotorDetails_Zero_VoltageRail3VSupply(double motorDetails_Zero_VoltageRail3VSupply);
    void setMotorDetails_Zero_VoltageRail1VSupply(double motorDetails_Zero_VoltageRail1VSupply);
    void setMotorDetails_Zero_HeatSinkTemp(double motorDetails_Zero_HeatSinkTemp);
    void setMotorDetails_Zero_MotorTemp(double motorDetails_Zero_MotorTemp);
    void setMotorDetails_Zero_DspBoardTemp(double motorDetails_Zero_DspBoardTemp);
    void setMotorDetails_Zero_DcBusAmpHours(double motorDetails_Zero_DcBusAmpHours);
    void setMotorDetails_Zero_Odometer(double motorDetails_Zero_Odometer);
    void setMotorDetails_Zero_SlipSpeed(double motorDetails_Zero_SlipSpeed);

    void setMotorDetails_One_PhaseCCurrent(double motorDetails_One_PhaseCCurrent);
    void setMotorDetails_One_PhaseBCurrent(double motorDetails_One_PhaseBCurrent);
    void setMotorDetails_One_MotorVoltageReal(double motorDetails_One_MotorVoltageReal);
    void setMotorDetails_One_MotorVoltageImaginary(double motorDetails_One_MotorVoltageImaginary);
    void setMotorDetails_One_MotorCurrentReal(double motorDetails_One_MotorCurrentReal);
    void setMotorDetails_One_MotorCurrentImaginary(double motorDetails_One_MotorCurrentImaginary);
    void setMotorDetails_One_BackEmfReal(double motorDetails_One_BackEmfReal);
    void setMotorDetails_One_VoltageRail15VSupply(double motorDetails_One_VoltageRail15VSupply);
    void setMotorDetails_One_VoltageRail3VSupply(double motorDetails_One_VoltageRail3VSupply);
    void setMotorDetails_One_VoltageRail1VSupply(double motorDetails_One_VoltageRail1VSupply);
    void setMotorDetails_One_HeatSinkTemp(double motorDetails_One_HeatSinkTemp);
    void setMotorDetails_One_MotorTemp(double motorDetails_One_MotorTemp);
    void setMotorDetails_One_DspBoardTemp(double motorDetails_One_DspBoardTemp);
    void setMotorDetails_One_DcBusAmpHours(double motorDetails_One_DcBusAmpHours);
    void setMotorDetails_One_Odometer(double motorDetails_One_Odometer);
    void setMotorDetails_One_SlipSpeed(double motorDetails_One_SlipSpeed);

private:
    double motorDetails_Zero_PhaseCCurrent_;
    double motorDetails_Zero_PhaseBCurrent_;
    double motorDetails_Zero_MotorVoltageReal_;
    double motorDetails_Zero_MotorVoltageImaginary_;
    double motorDetails_Zero_MotorCurrentReal_;
    double motorDetails_Zero_MotorCurrentImaginary_;
    double motorDetails_Zero_BackEmfReal_;
    double motorDetails_Zero_VoltageRail15VSupply_;
    double motorDetails_Zero_VoltageRail3VSupply_;
    double motorDetails_Zero_VoltageRail1VSupply_;
    double motorDetails_Zero_HeatSinkTemp_;
    double motorDetails_Zero_MotorTemp_;
    double motorDetails_Zero_DspBoardTemp_;
    double motorDetails_Zero_DcBusAmpHours_;
    double motorDetails_Zero_Odometer_;
    double motorDetails_Zero_SlipSpeed_;
    
    double motorDetails_One_PhaseCCurrent_;
    double motorDetails_One_PhaseBCurrent_;
    double motorDetails_One_MotorVoltageReal_;
    double motorDetails_One_MotorVoltageImaginary_;
    double motorDetails_One_MotorCurrentReal_;
    double motorDetails_One_MotorCurrentImaginary_;
    double motorDetails_One_BackEmfReal_;
    double motorDetails_One_VoltageRail15VSupply_;
    double motorDetails_One_VoltageRail3VSupply_;
    double motorDetails_One_VoltageRail1VSupply_;
    double motorDetails_One_HeatSinkTemp_;
    double motorDetails_One_MotorTemp_;
    double motorDetails_One_DspBoardTemp_;
    double motorDetails_One_DcBusAmpHours_;
    double motorDetails_One_Odometer_;
    double motorDetails_One_SlipSpeed_;
};

