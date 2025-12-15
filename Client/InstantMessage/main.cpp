#include "mainwindow.h"

#include <QApplication>
#include <QFile>

#include "global.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile qss(":/style/stylesheet.qss");
    if (qss.open(QFile::ReadOnly)) {
        qDebug("Open Success");
        QString style = QLatin1String(qss.readAll());
        a.setStyleSheet(style);
        qss.close();
    } else {
        qDebug("Open Failed");
    }

    QString app_path = QCoreApplication::applicationDirPath();
    qDebug() << "Application path:" << app_path;

    QString fileName = "config.ini";
    QString config_path = QDir::toNativeSeparators(app_path + QDir::separator() + fileName);
    qDebug() << "Config path:" << config_path;

    QSettings setttings(config_path, QSettings::IniFormat);
    QString gate_host = setttings.value("GateServer/host").toString();
    QString gate_port = setttings.value("GateServer/port").toString();
    gate_url_prefix = "http://" + gate_host + ":" + gate_port;

    MainWindow w;
    w.show();

    return a.exec();
}
