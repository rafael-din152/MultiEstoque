QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adminwindow.cpp \
    commonuserwindow.cpp \
    inventorywindow.cpp \
    main.cpp \
    loginwindow.cpp \
    majorwindow.cpp \
    removeproductwindow.cpp \
    removeuserwindow.cpp \
    seeinventorywindow.cpp \
    signupwindow.cpp \
    userstablewindow.cpp

HEADERS += \
    adminwindow.h \
    commonuserwindow.h \
    inventorywindow.h \
    loginwindow.h \
    majorwindow.h \
    removeproductwindow.h \
    removeuserwindow.h \
    seeinventorywindow.h \
    signupwindow.h \
    userstablewindow.h

FORMS += \
    adminwindow.ui \
    commonuserwindow.ui \
    inventorywindow.ui \
    loginwindow.ui \
    majorwindow.ui \
    removeproductwindow.ui \
    removeuserwindow.ui \
    seeinventorywindow.ui \
    signupwindow.ui \
    userstablewindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
