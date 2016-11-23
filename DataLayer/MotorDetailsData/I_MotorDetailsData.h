#pragma once

#include <QObject>

class I_MotorDetailsData : public QObject
{
    Q_OBJECT

public:
    virtual ~I_MotorDetailsData() {}

    virtual double motorDetails_Zero_PhaseCCurrent() const = 0;
    virtual double motorDetails_Zero_PhaseBCurrent() const = 0;
    virtual double motorDetails_Zero_MotorVoltageReal() const = 0;
    virtual double motorDetails_Zero_MotorVoltageImaginary() const = 0;
    virtual double motorDetails_Zero_MotorCurrentReal() const = 0;
    virtual double motorDetails_Zero_MotorCurrentImaginary() const = 0;
    virtual double motorDetails_Zero_BackEmfReal() const = 0;
    virtual double motorDetails_Zero_VoltageRail15VSupply() const = 0;
    virtual double motorDetails_Zero_VoltageRail3VSupply() const = 0;
    virtual double motorDetails_Zero_VoltageRail1VSupply() const = 0;
    virtual double motorDetails_Zero_HeatSinkTemp() const = 0;
    virtual double motorDetails_Zero_MotorTemp() const = 0;
    virtual double motorDetails_Zero_DspBoardTemp() const = 0;
    virtual double motorDetails_Zero_DcBusAmpHours() const = 0;
    virtual double motorDetails_Zero_Odometer() const = 0;
    virtual double motorDetails_Zero_SlipSpeed() const = 0;

    virtual double motorDetails_One_PhaseCCurrent() const = 0;
    virtual double motorDetails_One_PhaseBCurrent() const = 0;
    virtual double motorDetails_One_MotorVoltageReal() const = 0;
    virtual double motorDetails_One_MotorVoltageImaginary() const = 0;
    virtual double motorDetails_One_MotorCurrentReal() const = 0;
    virtual double motorDetails_One_MotorCurrentImaginary() const = 0;
    virtual double motorDetails_One_BackEmfReal() const = 0;
    virtual double motorDetails_One_VoltageRail15VSupply() const = 0;
    virtual double motorDetails_One_VoltageRail3VSupply() const = 0;
    virtual double motorDetails_One_VoltageRail1VSupply() const = 0;
    virtual double motorDetails_One_HeatSinkTemp() const = 0;
    virtual double motorDetails_One_MotorTemp() const = 0;
    virtual double motorDetails_One_DspBoardTemp() const = 0;
    virtual double motorDetails_One_DcBusAmpHours() const = 0;
    virtual double motorDetails_One_Odometer() const = 0;
    virtual double motorDetails_One_SlipSpeed() const = 0;

    virtual void setMotorDetails_Zero_PhaseCCurrent(double motorDetails_Zero_PhaseCCurrent) = 0;
    virtual void setMotorDetails_Zero_PhaseBCurrent(double motorDetails_Zero_PhaseBCurrent) = 0;
    virtual void setMotorDetails_Zero_MotorVoltageReal(double motorDetails_Zero_MotorVoltageReal) = 0;
    virtual void setMotorDetails_Zero_MotorVoltageImaginary(double motorDetails_Zero_MotorVoltageImaginary) = 0;
    virtual void setMotorDetails_Zero_MotorCurrentReal(double motorDetails_Zero_MotorCurrentReal) = 0;
    virtual void setMotorDetails_Zero_MotorCurrentImaginary(double motorDetails_Zero_MotorCurrentImaginary) = 0;
    virtual void setMotorDetails_Zero_BackEmfReal(double motorDetails_Zero_BackEmfReal) = 0;
    virtual void setMotorDetails_Zero_VoltageRail15VSupply(double motorDetails_Zero_VoltageRail15VSupply) = 0;
    virtual void setMotorDetails_Zero_VoltageRail3VSupply(double motorDetails_Zero_VoltageRail3VSupply) = 0;
    virtual void setMotorDetails_Zero_VoltageRail1VSupply(double motorDetails_Zero_VoltageRail1VSupply) = 0;
    virtual void setMotorDetails_Zero_HeatSinkTemp(double motorDetails_Zero_HeatSinkTemp) = 0;
    virtual void setMotorDetails_Zero_MotorTemp(double motorDetails_Zero_MotorTemp) = 0;
    virtual void setMotorDetails_Zero_DspBoardTemp(double motorDetails_Zero_DspBoardTemp) = 0;
    virtual void setMotorDetails_Zero_DcBusAmpHours(double motorDetails_Zero_DcBusAmpHours) = 0;
    virtual void setMotorDetails_Zero_Odometer(double motorDetails_Zero_Odometer) = 0;
    virtual void setMotorDetails_Zero_SlipSpeed(double motorDetails_Zero_SlipSpeed) = 0;

    virtual void setMotorDetails_One_PhaseCCurrent(double motorDetails_One_PhaseCCurrent) = 0;
    virtual void setMotorDetails_One_PhaseBCurrent(double motorDetails_One_PhaseBCurrent) = 0;
    virtual void setMotorDetails_One_MotorVoltageReal(double motorDetails_One_MotorVoltageReal) = 0;
    virtual void setMotorDetails_One_MotorVoltageImaginary(double motorDetails_One_MotorVoltageImaginary) = 0;
    virtual void setMotorDetails_One_MotorCurrentReal(double motorDetails_One_MotorCurrentReal) = 0;
    virtual void setMotorDetails_One_MotorCurrentImaginary(double motorDetails_One_MotorCurrentImaginary) = 0;
    virtual void setMotorDetails_One_BackEmfReal(double motorDetails_One_BackEmfReal) = 0;
    virtual void setMotorDetails_One_VoltageRail15VSupply(double motorDetails_One_VoltageRail15VSupply) = 0;
    virtual void setMotorDetails_One_VoltageRail3VSupply(double motorDetails_One_VoltageRail3VSupply) = 0;
    virtual void setMotorDetails_One_VoltageRail1VSupply(double motorDetails_One_VoltageRail1VSupply) = 0;
    virtual void setMotorDetails_One_HeatSinkTemp(double motorDetails_One_HeatSinkTemp) = 0;
    virtual void setMotorDetails_One_MotorTemp(double motorDetails_One_MotorTemp) = 0;
    virtual void setMotorDetails_One_DspBoardTemp(double motorDetails_One_DspBoardTemp) = 0;
    virtual void setMotorDetails_One_DcBusAmpHours(double motorDetails_One_DcBusAmpHours) = 0;
    virtual void setMotorDetails_One_Odometer(double motorDetails_One_Odometer) = 0;
    virtual void setMotorDetails_One_SlipSpeed(double motorDetails_One_SlipSpeed) = 0;

signals:
    void motorDetails_Zero_PhaseCCurrentReceived(double motorDetails_Zero_PhaseCCurrent);
    void motorDetails_Zero_PhaseBCurrentReceived(double motorDetails_Zero_PhaseBCurrent);
    void motorDetails_Zero_MotorVoltageRealReceived(double motorDetails_Zero_MotorVoltageReal);
    void motorDetails_Zero_MotorVoltageImaginaryReceived(double motorDetails_Zero_MotorVoltageImaginary);
    void motorDetails_Zero_MotorCurrentRealReceived(double motorDetails_Zero_MotorCurrentReal);
    void motorDetails_Zero_MotorCurrentImaginaryReceived(double motorDetails_Zero_MotorCurrentImaginary);
    void motorDetails_Zero_BackEmfRealReceived(double motorDetails_Zero_BackEmfReal);
    void motorDetails_Zero_VoltageRail15VSupplyReceived(double motorDetails_Zero_VoltageRail15VSupply);
    void motorDetails_Zero_VoltageRail3VSupplyReceived(double motorDetails_Zero_VoltageRail3VSupply);
    void motorDetails_Zero_VoltageRail1VSupplyReceived(double motorDetails_Zero_VoltageRail1VSupply);
    void motorDetails_Zero_HeatSinkTempReceived(double motorDetails_Zero_HeatSinkTemp);
    void motorDetails_Zero_MotorTempReceived(double motorDetails_Zero_MotorTemp);
    void motorDetails_Zero_DspBoardTempReceived(double motorDetails_Zero_DspBoardTemp);
    void motorDetails_Zero_DcBusAmpHoursReceived(double motorDetails_Zero_DcBusAmpHours);
    void motorDetails_Zero_OdometerReceived(double motorDetails_Zero_Odometer);
    void motorDetails_Zero_SlipSpeedReceived(double motorDetails_Zero_SlipSpeed);

    void motorDetails_One_PhaseCCurrentReceived(double motorDetails_One_PhaseCCurrent);
    void motorDetails_One_PhaseBCurrentReceived(double motorDetails_One_PhaseBCurrent);
    void motorDetails_One_MotorVoltageRealReceived(double motorDetails_One_MotorVoltageReal);
    void motorDetails_One_MotorVoltageImaginaryReceived(double motorDetails_One_MotorVoltageImaginary);
    void motorDetails_One_MotorCurrentRealReceived(double motorDetails_One_MotorCurrentReal);
    void motorDetails_One_MotorCurrentImaginaryReceived(double motorDetails_One_MotorCurrentImaginary);
    void motorDetails_One_BackEmfRealReceived(double motorDetails_One_BackEmfReal);
    void motorDetails_One_VoltageRail15VSupplyReceived(double motorDetails_One_VoltageRail15VSupply);
    void motorDetails_One_VoltageRail3VSupplyReceived(double motorDetails_One_VoltageRail3VSupply);
    void motorDetails_One_VoltageRail1VSupplyReceived(double motorDetails_One_VoltageRail1VSupply);
    void motorDetails_One_HeatSinkTempReceived(double motorDetails_One_HeatSinkTemp);
    void motorDetails_One_MotorTempReceived(double motorDetails_One_MotorTemp);
    void motorDetails_One_DspBoardTempReceived(double motorDetails_One_DspBoardTemp);
    void motorDetails_One_DcBusAmpHoursReceived(double motorDetails_One_DcBusAmpHours);
    void motorDetails_One_OdometerReceived(double motorDetails_One_Odometer);
    void motorDetails_One_SlipSpeedReceived(double motorDetails_One_SlipSpeed);
};
