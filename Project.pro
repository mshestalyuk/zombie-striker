QT += core gui \
        multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    BossEnemy.cpp \
    Bullet.cpp \
    Enemy.cpp \
    Game.cpp \
    Health.cpp \
    Player.cpp \
    Score.cpp \
    aboutauthors.cpp \
    direction.cpp \
    gameover.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    BossEnemy.h \
    Bullet.h \
    Enemy.h \
    Game.h \
    Health.h \
    Player.h \
    Score.h \
    aboutauthors.h \
    direction.h \
    gameover.h \
    mainwindow.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

FORMS += \
    aboutauthors.ui \
    gameover.ui \
    mainwindow.ui
