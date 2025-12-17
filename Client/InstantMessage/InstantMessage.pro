QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

RC_ICONS = Message.ico
DESTDIR = ./bin

UI_DIR = ./

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    HttpMgr.cpp \
    global.cpp \
    logindialog.cpp \
    main.cpp \
    mainwindow.cpp \
    registerdialog.cpp

HEADERS += \
    HttpMgr.h \
    Singleton.hpp \
    global.h \
    logindialog.h \
    mainwindow.h \
    registerdialog.h

FORMS += \
    logindialog.ui \
    mainwindow.ui \
    registerdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    rc.qrc

DISTFILES += \
    config.ini

# 复制配置文件到构建目录
config_file.target = config.ini
config_file.commands = $(COPY_FILE) \"$$PWD/config.ini\" \"$$OUT_PWD/$$DESTDIR/\"
config_file.depends = $$PWD/config.ini

# 创建目标目录
create_dir.commands = $(MKDIR) \"$$OUT_PWD/$$DESTDIR\"
create_dir.target = directory

# 添加自定义目标
QMAKE_EXTRA_TARGETS += create_dir config_file

# 确保在构建前创建目录，在构建后复制文件
PRE_TARGETDEPS += directory
POST_TARGETDEPS += config.ini

