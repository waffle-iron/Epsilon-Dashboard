#pragma once

#include "I_CMUData.h"

class CMUData : public I_CMUData
{
public:
    CMUData();
    virtual ~CMUData();

    double* CMU_Zero_Voltages() const;
    double CMU_Zero_PcbTemp() const;
    double* CMU_Zero_CellTemps() const;
    double* CMU_One_Voltages() const;
    double CMU_One_PcbTemp() const;
    double* CMU_One_CellTemps() const;
    double* CMU_Two_Voltages() const;
    double CMU_Two_PcbTemp() const;
    double* CMU_Two_CellTemps() const;
    double* CMU_Three_Voltages() const;
    double CMU_Three_PcbTemp() const;
    double* CMU_Three_CellTemps() const;

    void CMU_Zero_Voltages(double CMU_Zero_Voltages[]);
    void CMU_Zero_PcbTemp(double CMU_Zero_PcbTemp);
    void CMU_Zero_CellTemps(double CMU_Zero_CellTemps[]);
    void CMU_One_Voltages(double CMU_One_Voltages[]);
    void CMU_One_PcbTemp(double CMU_One_PcbTemp);
    void CMU_One_CellTemps(double CMU_One_CellTemps[]);
    void CMU_Two_Voltages(double CMU_Two_Voltages[]);
    void CMU_Two_PcbTemp(double CMU_Two_PcbTemp);
    void CMU_Two_CellTemps(double CMU_Two_CellTemps[]);
    void CMU_Three_Voltages(double CMU_Three_Voltages[]);
    void CMU_Three_PcbTemp(double CMU_Three_PcbTemp);
    void CMU_Three_CellTemps(double CMU_Three_CellTemps[]);


private:
    double[8] CMU_Zero_Voltages_;
    double CMU_Zero_PcbTemp_;
    double[15] CMU_Zero_CellTemps_;
    double[8] CMU_One_Voltages_;
    double CMU_One_PcbTemp_;
    double[15] CMU_One_CellTemps_;
    double[8] CMU_Two_Voltages_;
    double CMU_Two_PcbTemp_;
    double[15] CMU_Two_CellTemps_;
    double[8] CMU_Three_Voltages_;
    double CMU_Three_PcbTemp_;
    double[15] CMU_Three_CellTemps_;
};

