#pragma once

#include <QObject>

class I_CMUData : public QObject
{
    Q_OBJECT

public:
    virtual ~I_CMUData() {}

    virtual double* CMU_Zero_Voltages() const = 0;
    virtual double CMU_Zero_PcbTemp() const = 0;
    virtual double* CMU_Zero_CellTemps() const = 0;
    virtual double* CMU_One_Voltages() const = 0;
    virtual double CMU_One_PcbTemp() const = 0;
    virtual double* CMU_One_CellTemps() const = 0;
    virtual double* CMU_Two_Voltages() const = 0;
    virtual double CMU_Two_PcbTemp() const = 0;
    virtual double* CMU_Two_CellTemps() const = 0;
    virtual double* CMU_Three_Voltages() const = 0;
    virtual double CMU_Three_PcbTemp() const = 0;
    virtual double* CMU_Three_CellTemps() const = 0;

    virtual void setCMU_Zero_Voltages(double CMU_Zero_Voltages[]) = 0;
    virtual void setCMU_Zero_PcbTemp(double CMU_Zero_PcbTemp) = 0;
    virtual void setCMU_Zero_CellTemps(double CMU_Zero_CellTemps[]) = 0;
    virtual void setCMU_One_Voltages(double CMU_One_Voltages[]) = 0;
    virtual void setCMU_One_PcbTemp(double CMU_One_PcbTemp) = 0;
    virtual void setCMU_One_CellTemps(double CMU_One_CellTemps[]) = 0;
    virtual void setCMU_Two_Voltages(double CMU_Two_Voltages[]) = 0;
    virtual void setCMU_Two_PcbTemp(double CMU_Two_PcbTemp) = 0;
    virtual void setCMU_Two_CellTemps(double CMU_Two_CellTemps[]) = 0;
    virtual void setCMU_Three_Voltages(double CMU_Three_Voltages[]) = 0;
    virtual void setCMU_Three_PcbTemp(double CMU_Three_PcbTemp) = 0;
    virtual void setCMU_Three_CellTemps(double CMU_Three_CellTemps[]) = 0;

signals:
    void CMU_Zero_VoltagesReceived(double CMU_Zero_Voltages[]);
    void CMU_Zero_PcbTempReceived(double CMU_Zero_PcbTemp);
    void CMU_Zero_CellTempsReceived(double CMU_Zero_CellTemps[]);
    void CMU_One_VoltagesReceived(double CMU_One_Voltages[]);
    void CMU_One_PcbTempReceived(double CMU_One_PcbTemp);
    void CMU_One_CellTempsReceived(double CMU_One_CellTemps[]);
    void CMU_Two_VoltagesReceived(double CMU_Two_Voltages[]);
    void CMU_Two_PcbTempReceived(double CMU_Two_PcbTemp);
    void CMU_Two_CellTempsReceived(double CMU_Two_CellTemps[]);
    void CMU_Three_VoltagesReceived(double CMU_Three_Voltages[]);
    void CMU_Three_PcbTempReceived(double CMU_Three_PcbTemp);
    void CMU_Three_CellTempsReceived(double CMU_Three_CellTemps[]);
};
