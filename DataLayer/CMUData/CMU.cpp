#include "CMU.h"

CMU::CMU()
{
}

CMU::~CMU()
{
}

QList<double> CMU::voltages() const
{
   return voltages_;
}
double CMU::pcbTemp() const
{
   return pcbTemp_;
}
QList<double> CMU::cellTemps() const
{
	return cellTemps_;
}

void CMU::setVoltages(QList<double> voltages)
{
   voltages_ = voltages;
}
void CMU::setPcbTemp(double pcbTemp)
{
   pcbTemp_ = pcbTemp;
}
void CMU::setCellTemps(QList<double> cellTemps)
{
	cellTemps_ = cellTemps;
}