#include "MpptView.h"
#include <iostream>

MpptView::MpptView(MpptPresenter &mpptPresenter,
                   I_MpptUi &ui)
    : mpptPresenter_(mpptPresenter)
    , ui_(ui)
{
    connectMppt(mpptPresenter_);
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
            ui_.MPPT0AliveIndicator().setStyleSheet("background:green; \
                                                    border-radius:8px; \
                                                    border: 1px solid white;");
        }
        else
        {
            ui_.MPPT0AliveIndicator().setStyleSheet("background:grey; \
                                                    border-radius:8px; \
                                                    border: 1px solid white;");
        }

        mpptZeroPower = mppt.arrayCurrent() * mppt.arrayVoltage();

        ui_.MPPT0ArrayVoltage().setNum(mppt.arrayVoltage());
        ui_.MPPT0ArrayCurrent().setNum(mppt.arrayCurrent());
        ui_.MPPT0ArrayPower().setNum(mpptZeroPower);
        ui_.MPPT0BatteryVoltage().setNum(mppt.batteryVoltage());
        ui_.MPPT0Temperature().setNum(mppt.temperature());
    }
    else if (i == 1)
    {
        if (mppt.alive())
        {
            ui_.MPPT1AliveIndicator().setStyleSheet("background:green; \
                                                    border-radius:8px; \
                                                    border: 1px solid white;");
        }
        else
        {
            ui_.MPPT1AliveIndicator().setStyleSheet("background:grey; \
                                                    border-radius:8px; \
                                                    border: 1px solid white;");
        }

        mpptOnePower = mppt.arrayCurrent() * mppt.arrayVoltage();

        ui_.MPPT1ArrayVoltage().setNum(mppt.arrayVoltage());
        ui_.MPPT1ArrayCurrent().setNum(mppt.arrayCurrent());
        ui_.MPPT1ArrayPower().setNum(mpptOnePower);
        ui_.MPPT1BatteryVoltage().setNum(mppt.batteryVoltage());
        ui_.MPPT1Temperature().setNum(mppt.temperature());
    }
    else if (i == 2)
    {
        if (mppt.alive())
        {
            ui_.MPPT2AliveIndicator().setStyleSheet("background:green; \
                                                    border-radius:8px; \
                                                    border: 1px solid white;");
        }
        else
        {
            ui_.MPPT2AliveIndicator().setStyleSheet("background:grey; \
                                                    border-radius:8px; \
                                                    border: 1px solid white;");
        }

        mpptTwoPower = mppt.arrayCurrent() * mppt.arrayVoltage();

        ui_.MPPT2ArrayVoltage().setNum(mppt.arrayVoltage());
        ui_.MPPT2ArrayCurrent().setNum(mppt.arrayCurrent());
        ui_.MPPT2ArrayPower().setNum(mpptTwoPower);
        ui_.MPPT2BatteryVoltage().setNum(mppt.batteryVoltage());
        ui_.MPPT2Temperature().setNum(mppt.temperature());
    }

    ui_.TotalArrayPower().setNum(mpptZeroPower + mpptOnePower + mpptTwoPower);
}
