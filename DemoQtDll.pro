QT -= gui

TARGET = ./MtDemo
TEMPLATE = lib
DEFINES += DEMOQTDLL_LIBRARY
CONFIG += c++17
# 跳过版本号
CONFIG += skip_target_version_ext
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

#版本信息(Windows)
VERSION=0.0.0.1
RC_LANG=0x0004
QMAKE_TARGET_PRODUCT=MT演示动态库
QMAKE_TARGET_COMPANY=MoonTypist@CHENSHUJI
QMAKE_TARGET_COPYRIGHT=版本所有(C)2024
DEFINES += PROGRAM_VER=\\\"$$VERSION\\\"

SOURCES += \
    entry.cpp \
    mtdemodll.cpp

HEADERS += \
    DemoQtDll_global.h \
    mtdemodll.h

DEF_FILE += ./MtDemo.def

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    MtDemo.def
