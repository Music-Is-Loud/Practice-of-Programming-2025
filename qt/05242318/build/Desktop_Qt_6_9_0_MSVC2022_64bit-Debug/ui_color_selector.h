/********************************************************************************
** Form generated from reading UI file 'color_selector.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLOR_SELECTOR_H
#define UI_COLOR_SELECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_color_selector
{
public:

    void setupUi(QWidget *color_selector)
    {
        if (color_selector->objectName().isEmpty())
            color_selector->setObjectName("color_selector");
        color_selector->resize(400, 300);

        retranslateUi(color_selector);

        QMetaObject::connectSlotsByName(color_selector);
    } // setupUi

    void retranslateUi(QWidget *color_selector)
    {
        color_selector->setWindowTitle(QCoreApplication::translate("color_selector", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class color_selector: public Ui_color_selector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLOR_SELECTOR_H
