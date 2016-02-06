#pragma once

#include "I_CompactUI.h"
#include "../I_SolarCarWindow/I_SolarCarWindow.h"

namespace Ui {
    class CompactUI;
}
class CompactUI : public I_SolarCarWindow, public I_CompactUI
{
    Q_OBJECT

public:
    explicit CompactUI();
    ~CompactUI();

private:
    Ui::CompactUI *ui;
};
