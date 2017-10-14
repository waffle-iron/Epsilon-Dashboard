#pragma once
#include <QObject>
#include <QLabel>

#include "../../../../DataLayer/KeyMotorData/KeyMotorData.h"
#include "../../../../PresenterLayer/KeyMotorPresenter/KeyMotorPresenter.h"
#include "../../MotorPage/MotorUi/I_MotorUi.h"

class KeyMotorPresenter;

class MotorView : public QObject
{
    Q_OBJECT
public:
    MotorView(KeyMotorPresenter& keyMotorPresenter,
                I_MotorUi& ui);
    ~MotorView();

private:
    void connectKeyMotor(KeyMotorPresenter&);

    KeyMotorPresenter& keyMotorPresenter_;

    I_MotorUi& ui_;
