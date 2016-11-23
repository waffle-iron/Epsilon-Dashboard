#include "CMUData.h"
#include <QDebug>

CMUData::CMUData()
{
}

CMUData::~CMUData()
{
}

double* CMUData::CMU_Zero_Voltages() const
{
    return CMU_Zero_Voltages_;
}
double CMUData::CMU_Zero_PcbTemp() const
{
    return CMU_Zero_PcbTemp_;
}
double* CMUData::CMU_Zero_CellTemps() const
{
    return CMU_Zero_CellTemps_;
}
double* CMUData::CMU_One_Voltages() const
{
    return CMU_One_Voltages_;
}
double CMUData::CMU_One_PcbTemp() const
{
    return CMU_One_PcbTemp_;
}
double* CMUData::CMU_One_CellTemps() const
{
    return CMU_One_CellTemps_;
}
double* CMUData::CMU_Two_Voltages() const
{
    return CMU_Two_Voltages_;
}
double CMUData::CMU_Two_PcbTemp() const
{
    return CMU_Two_PcbTemp_;
}
double* CMUData::CMU_Two_CellTemps() const
{
    return CMU_Two_CellTemps_;
}
double* CMUData::CMU_Three_Voltages() const
{
    return CMU_Three_Voltages_;
}
double CMUData::CMU_Three_PcbTemp() const
{
    return CMU_Three_PcbTemp_;
}
double* CMUData::CMU_Three_CellTemps() const
{
    return CMU_Three_CellTemps_;
}

void CMUData::CMU_Zero_Voltages(double CMU_Zero_Voltages[])
{
    CMU_Zero_Voltages_ = CMU_Zero_Voltages;
    emit CMU_Zero_VoltagesReceived(CMU_Zero_Voltages_);
}
void CMUData::CMU_Zero_PcbTemp(double CMU_Zero_PcbTemp)
{
    CMU_Zero_PcbTemp_ = CMU_Zero_PcbTemp;
    emit CMU_Zero_PcbTempReceived(CMU_Zero_PcbTemp_);
}
void CMUData::CMU_Zero_CellTemps(double CMU_Zero_CellTemps[])
{
    CMU_Zero_CellTemps_ = CMU_Zero_CellTemps;
    emit CMU_Zero_CellTempsReceived(CMU_Zero_CellTemps_);
}
void CMUData::CMU_One_Voltages(double CMU_One_Voltages[])
{
    CMU_One_Voltages_ = CMU_One_Voltages;
    emit CMU_One_VoltagesReceived(CMU_One_Voltages_);
}
void CMUData::CMU_One_PcbTemp(double CMU_One_PcbTemp)
{
    CMU_One_PcbTemp_ = CMU_One_PcbTemp;
    emit CMU_One_PcbTempReceived(CMU_One_PcbTemp_);
}
void CMUData::CMU_One_CellTemps(double CMU_One_CellTemps[])
{
    CMU_One_CellTemps_ = CMU_One_CellTemps;
    emit CMU_One_CellTempsReceived(CMU_One_CellTemps_);
}
void CMUData::CMU_Two_Voltages(double CMU_Two_Voltages[])
{
    CMU_Two_Voltages_ = CMU_Two_Voltages;
    emit CMU_Two_VoltagesReceived(CMU_Two_Voltages_);
}
void CMUData::CMU_Two_PcbTemp(double CMU_Two_PcbTemp)
{
    CMU_Two_PcbTemp_ = CMU_Two_PcbTemp;
    emit CMU_Two_PcbTempReceived(CMU_Two_PcbTemp_);
}
void CMUData::CMU_Two_CellTemps(double CMU_Two_CellTemps[])
{
    CMU_Two_CellTemps_ = CMU_Two_CellTemps;
    emit CMU_Two_CellTempsReceived(CMU_Two_CellTemps_);
}
void CMUData::CMU_Three_Voltages(double CMU_Three_Voltages[])
{
    CMU_Three_Voltages_ = CMU_Three_Voltages;
    emit CMU_Three_VoltagesReceived(CMU_Three_Voltages_);
}
void CMUData::CMU_Three_PcbTemp(double CMU_Three_PcbTemp)
{
    CMU_Three_PcbTemp_ = CMU_Three_PcbTemp;
    emit CMU_Three_PcbTempReceived(CMU_Three_PcbTemp_);
}
void CMUData::CMU_Three_CellTemps(double CMU_Three_CellTemps[])
{
    CMU_Three_CellTemps_ = CMU_Three_CellTemps;
    emit CMU_Three_CellTempsReceived(CMU_Three_CellTemps_);
}
