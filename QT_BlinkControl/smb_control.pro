QT += widgets serialport

TARGET = terminal
TEMPLATE = app

SOURCES += \
    blink.cpp \
    main.cpp \
    mainwindow.cpp \
    settingsdialog.cpp \
    console.cpp

HEADERS += \
    blink.h \
    mainwindow.h \
    settingsdialog.h \
    console.h

FORMS += \
    blink.ui \
    mainwindow.ui \
    settingsdialog.ui

RESOURCES += \
    smb_control.qrc

target.path = $$[QT_INSTALL_EXAMPLES]/serialport/terminal
INSTALLS += target
