/********************************************************************************
** Form generated from reading UI file 'tomatoclock.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOMATOCLOCK_H
#define UI_TOMATOCLOCK_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TomatoClock
{
public:
    QPushButton *closeButton;
    QLCDNumber *Timer;
    QPushButton *pushButton;

    void setupUi(QWidget *TomatoClock)
    {
        if (TomatoClock->objectName().isEmpty())
            TomatoClock->setObjectName("TomatoClock");
        TomatoClock->resize(323, 316);
        closeButton = new QPushButton(TomatoClock);
        closeButton->setObjectName("closeButton");
        closeButton->setGeometry(QRect(10, 10, 31, 31));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::EditClear));
        closeButton->setIcon(icon);
        closeButton->setIconSize(QSize(20, 20));
        closeButton->setFlat(true);
        Timer = new QLCDNumber(TomatoClock);
        Timer->setObjectName("Timer");
        Timer->setGeometry(QRect(130, 220, 71, 31));
        Timer->setStyleSheet(QString::fromUtf8("border-style:none"));
        Timer->setFrameShape(QFrame::Shape::NoFrame);
        Timer->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        pushButton = new QPushButton(TomatoClock);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 80, 121, 131));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Themes/Assets/Tomato.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(140, 140));
        pushButton->setFlat(true);

        retranslateUi(TomatoClock);

        QMetaObject::connectSlotsByName(TomatoClock);
    } // setupUi

    void retranslateUi(QWidget *TomatoClock)
    {
        TomatoClock->setWindowTitle(QCoreApplication::translate("TomatoClock", "Form", nullptr));
        closeButton->setText(QString());
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TomatoClock: public Ui_TomatoClock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOMATOCLOCK_H
