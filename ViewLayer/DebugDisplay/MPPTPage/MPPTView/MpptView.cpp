#include "MpptView.h"
#include <iostream>

MpptView::MpptView(MpptPresenter &mpptPresenter,
                   I_MpptUi &ui)
    : mpptPresenter_(mpptPresenter)
    , ui_(ui)
{
    connectMppt(mpptPresenter_);

    Mppt mppt0Test;
    mppt0Test.setAlive(false);
    mppt0Test.setArrayCurrent(10);
    mppt0Test.setArrayVoltage(10);
    mppt0Test.setBatteryVoltage(50);
    mppt0Test.setTemperature(100);

    mpptReceived(0, mppt0Test);
}

MpptView::~MpptView()
{
}

void MpptView::connectMppt(MpptPresenter& mpptPresenter)
{
    connect(&mpptPresenter, SIGNAL(mpptReceived(int,Mppt)),
            this, SLOT(mpptReceived(int,Mppt)));
    connect(&mpptPresenter, SIGNAL(mpptPowerReceived(double)),
            this, SLOT(mpptPowerReceived(double)));
}

void MpptView::mpptReceived(int i, Mppt mppt)
{
    double mpptZeroPower = 0;
    double mpptOnePower = 0;
    double mpptTwoPower = 0;

    if (i == 0)
    {
        if (mppt.alive())
        {
            ui_.mppt0AliveIndicator().setStyleSheet("background:green; \
                                                    border-radius:8px; \
                                                    border: 1px solid white;");
        }
        else
        {
            ui_.mppt0AliveIndicator().setStyleSheet("background:grey; \
                                                    border-radius:8px; \
                                                    border: 1px solid white;");
        }

        mpptZeroPower = mppt.arrayCurrent() * mppt.arrayVoltage();

        ui_.mppt0ArrayVoltage().setNum(mppt.arrayVoltage());
        ui_.mppt0ArrayCurrent().setNum(mppt.arrayCurrent());
        ui_.mppt0ArrayPower().setNum(mpptZeroPower);
        ui_.mppt0BatteryVoltage().setNum(mppt.batteryVoltage());
        ui_.mppt0Temperature().setNum(mppt.temperature());
    }
    else if (i == 1)
    {
        if (mppt.alive())
        {
            ui_.mppt1AliveIndicator().setStyleSheet("background:green; \
                                                    border-radius:8px; \
                                                    border: 1px solid white;");
        }
        else
        {
            ui_.mppt1AliveIndicator().setStyleSheet("background:grey; \
                                                    border-radius:8px; \
                                                    border: 1px solid white;");
        }

        mpptOnePower = mppt.arrayCurrent() * mppt.arrayVoltage();

        ui_.mppt1ArrayVoltage().setNum(mppt.arrayVoltage());
        ui_.mppt1ArrayCurrent().setNum(mppt.arrayCurrent());
        ui_.mppt1ArrayPower().setNum(mpptOnePower);
        ui_.mppt1BatteryVoltage().setNum(mppt.batteryVoltage());
        ui_.mppt1Temperature().setNum(mppt.temperature());
    }
    else if (i == 2)
    {
        if (mppt.alive())
        {
            ui_.mppt2AliveIndicator().setStyleSheet("background:green; \
                                                    border-radius:8px; \
                                                    border: 1px solid white;");
        }
        else
        {
            ui_.mppt2AliveIndicator().setStyleSheet("background:grey; \
                                                    border-radius:8px; \
                                                    border: 1px solid white;");
        }

        mpptTwoPower = mppt.arrayCurrent() * mppt.arrayVoltage();

        ui_.mppt2ArrayVoltage().setNum(mppt.arrayVoltage());
        ui_.mppt2ArrayCurrent().setNum(mppt.arrayCurrent());
        ui_.mppt2ArrayPower().setNum(mpptTwoPower);
        ui_.mppt2BatteryVoltage().setNum(mppt.batteryVoltage());
        ui_.mppt2Temperature().setNum(mppt.temperature());
    }

    ui_.totalArrayPower().setText(QString::number(mpptZeroPower + mpptOnePower + mpptTwoPower) + "<sub>W</sub>");
}
