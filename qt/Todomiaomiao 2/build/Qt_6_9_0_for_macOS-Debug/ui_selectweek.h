/********************************************************************************
** Form generated from reading UI file 'selectweek.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTWEEK_H
#define UI_SELECTWEEK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selectweek
{
public:
    QWidget *widget;

    void setupUi(QWidget *selectweek)
    {
        if (selectweek->objectName().isEmpty())
            selectweek->setObjectName("selectweek");
        selectweek->resize(400, 300);
        widget = new QWidget(selectweek);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-1, -2, 400, 301));

        retranslateUi(selectweek);

        QMetaObject::connectSlotsByName(selectweek);
    } // setupUi

    void retranslateUi(QWidget *selectweek)
    {
        selectweek->setWindowTitle(QCoreApplication::translate("selectweek", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selectweek: public Ui_selectweek {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTWEEK_H
