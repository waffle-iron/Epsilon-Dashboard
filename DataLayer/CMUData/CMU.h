#pragma once

#include <QString>
#include <QList>

class CMU
{
public:
    CMU();

    virtual ~CMU();

    QList<double> voltages() const;
    double pcbTemp() const;
    QList<double> cellTemps() const;

    void setVoltages(QList<double> voltages);
    void setPcbTemp(double pcbTemp);
    void setCellTemps(QList<double> cellTemps);

private:
    QList<double> voltages_;
    double pcbTemp_;
    QList<double> cellTemps_;
};
