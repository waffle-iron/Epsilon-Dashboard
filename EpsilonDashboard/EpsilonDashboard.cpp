#include "../DataLayer/DataContainer.h"
#include "../CommunicationLayer/CommunicationContainer.h"
#include "../BusinessLayer/BusinessContainer.h"
#include "../PresenterLayer/PresenterContainer.h"
#include "../ViewLayer/ViewContainer.h"

#include <QCommandLineParser>

#include "EpsilonDashboard.h"

EpsilonDashboard::EpsilonDashboard(int& argc, char** argv)
    : QApplication(argc, argv)
    , dataContainer_(new DataContainer())
    , communicationContainer_(new CommunicationContainer())
    , businessContainer_(new BusinessContainer(*communicationContainer_, *dataContainer_))
    , presenterContainer_(new PresenterContainer(*dataContainer_))
{
    QCommandLineParser parser;

    QCommandLineOption raceModeOption("r");
    parser.addOption(raceModeOption);

    parser.process(*this);

    int mode = DISPLAY;

    if (parser.isSet(raceModeOption))
    {
        mode = RACE;
    }

    viewContainer_.reset(new ViewContainer(*presenterContainer_, mode));
}

EpsilonDashboard::~EpsilonDashboard()
{
}
