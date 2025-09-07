#include "dialog.h"
#include <QtWidgets>
#include <dialog.h>
#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *widget = new QWidget();
    widget->setWindowTitle(QObject::tr("我是widget"));
    QLabel *label=new QLabel(0,Qt::SplashScreen |Qt::WindowStaysOnTopHint);

    label->setWindowTitle(QObject::tr("我是label"));
    label->setText(QObject::tr("label:我是个窗口"));
    label->resize(380,80);

    QLabel *label2=new QLabel(widget);
    label2->setText(QObject::tr("label2"));
    label2->resize(350,30);
    label->show();
    widget->show();


    return a.exec();
}
