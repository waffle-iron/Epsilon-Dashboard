TEMPLATE = subdirs 

CONFIG += ordered static

message(University of Calgary Solar Car Team Epsilon Dashboard)

SUBDIRS = \
    ViewLayer \
    PresenterLayer \ 
    BusinessLayer \ 
    InfrastructureLayer \
    CommunicationLayer \
    DataLayer \
    EpsilonDashboard

DISTFILES += \
    config.ini.example \
    .travis.yml
