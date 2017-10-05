#pragma once

#include <QWidget>
#include <QLabel>

class I_MotorUi: public QWidget
{
public:
    virtual ~I_MotorUi() {}
    virtual QLabel& setCurrentLeftLabel() = 0;
    virtual QLabel& setCurrenttAvgLabel() = 0;
    virtual QLabel& setCurrentRightLabel() = 0;
    virtual QLabel& setVelocityLeftLabel()= 0;
    virtual QLabel& setVelocityAvgLabel() = 0;
    virtual QLabel& setVelocityRightLabel() = 0;
    virtual QLabel& busCurrentLeftLabel() = 0;
    virtual QLabel& busCurrentAvgLabel() = 0;
    virtual QLabel& busCurrentRightLabel() = 0;
    virtual QLabel& busVelocityLeftLabel() = 0;
    virtual QLabel& busVelocityAvgLabel() = 0;
    virtual QLabel& busVelocityRightLabel() = 0;
    virtual QLabel& vehicleVelocityLeftLabel() = 0;
    virtual QLabel& vehicleVelocityAvgLabel() = 0;
    virtual QLabel& vehicleVelocityRightLabel() = 0;
    virtual QLabel& phaseCCurrentLeftLabe() = 0;
    virtual QLabel& phaseCCurrentAvgLabel()= 0;
    virtual QLabel& phaseCCurrentRightLabel() = 0;
    virtual QLabel& phaseBCurrentLeftLabel() = 0;
    virtual QLabel& phaseBCurrentAvgLabel() = 0;
    virtual QLabel& phaseBCurrentRIghtLabel() = 0;
    virtual QLabel& motorVoltageRealLeftLabel() = 0;
    virtual QLabel& motorVoltageRealAvgLabel() = 0;
    virtual QLabel& motorVoltageRealRightLabel()= 0;
    virtual QLabel& motorVoltageImaginaryLeftLabel() = 0;
    virtual QLabel& motorVoltagesImaginaryAvgLabel() = 0;
    virtual QLabel& motorVoltageImaginarRightLabel() = 0;
    virtual QLabel& motorCurrentRealLeftLabel() = 0;
    virtual QLabel& motorCurrentRealAvgLabel() = 0;
    virtual QLabel& motorCurrentRealLeftLabel() = 0;
    virtual QLabel& motorCurrentRealRightLabel() = 0;
    virtual QLabel& motorCurrentImaginaryLeftLabel() = 0;
    virtual QLabel& motorCurrentImaginaryAvgLabel() = 0;
    virtual QLabel& motorCurrentImaginaryRightLabel() = 0;
    virtual QLabel& backEmfRealLeftLabel() = 0;
    virtual QLabel& backEmfRealAvgLabel() = 0;
    virtual QLabel& backEmfRealRightLabel() = 0;
    virtual QLabel& voltageRail15VSupplyLeftLabel() = 0;
    virtual QLabel& voltageRail15VSupplyAvgLabel() = 0;
    virtual QLabel& voltageRail15VSupplyRightLabel() = 0;
    virtual QLabel& voltageRail3VSupplyLeftLabel() = 0;
    virtual QLabel& voltageRail3VSupplyLeftLabel() = 0;
    virtual QLabel& voltageRail3VSupplyLeftLabel() = 0;
    virtual QLabel& voltageRail1VSupplyLeftLabel() = 0;
    virtual QLabel& voltageRail1VSupplyLeftLabel() = 0;
    virtual QLabel& voltageRail1VSupplyLeftLabel() = 0;
    virtual QLabel& heatSinkTempLeftLabel() = 0;
    virtual QLabel& heatSinkTempAvgLabel() = 0;
    virtual QLabel& heatSinkTempRightLabel() = 0;
    virtual QLabel& motorTempLeftLabel() = 0;
    virtual QLabel& motorTempAvgLabel() = 0;
    virtual QLabel& motorTempRightLabel() = 0;
    virtual QLabel& dspBoardTempLeftLabel() = 0;
    virtual QLabel& dspBoardTempAvgLabel() = 0;
    virtual QLabel& dspBoardTempRightLabel() = 0;
    virtual QLabel& dcBusAmpHoursLeftLabel() = 0;
    virtual QLabel& dcBusAmpHoursAvgLabel() = 0;
    virtual QLabel& dcBusAmpHoursRightLabel() = 0;
    virtual QLabel& odometerLeftLabel() = 0;
    virtual QLabel& odometerAvgLabel() = 0;
    virtual QLabel& odometerRightLabel() = 0;
    virtual QLabel& slipSpeedLeftLabel() = 0;
    virtual QLabel& slipSpeedAvgLabel() = 0;
    virtual QLabel& slipSpeedRightLabel() = 0;
};
