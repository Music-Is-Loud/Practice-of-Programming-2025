/********************************************************************************
** Form generated from reading UI file 'choosetime_style_widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSETIME_STYLE_WIDGET_H
#define UI_CHOOSETIME_STYLE_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_choosetime_style_widget
{
public:
    QPushButton *saveButton;
    QPushButton *pushButton_51;

    void setupUi(QWidget *choosetime_style_widget)
    {
        if (choosetime_style_widget->objectName().isEmpty())
            choosetime_style_widget->setObjectName("choosetime_style_widget");
        choosetime_style_widget->resize(230, 240);
        saveButton = new QPushButton(choosetime_style_widget);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(6, 200, 101, 31));
        saveButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #00CED1; /* \346\214\211\351\222\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\350\223\235\347\273\277\350\211\262 */\n"
"    color: white; /* \346\214\211\351\222\256\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"    border: none; /* \346\227\240\350\276\271\346\241\206 */\n"
"    padding: 5px 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-size: 13px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #00B2B2; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\345\217\230\346\267\261 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #008C8C; /* \351\274\240\346\240\207\346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\346\233\264\346\267\261 */\n"
"}"));
        pushButton_51 = new QPushButton(choosetime_style_widget);
        pushButton_51->setObjectName("pushButton_51");
        pushButton_51->setGeometry(QRect(121, 200, 101, 31));
        pushButton_51->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"    background-color: transparent;\n"
"    padding: 5px 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-size: 13px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(0,0, 0, 220);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  rgba(0, 0, 0,220);\n"
"}"));
        pushButton_51->setFlat(false);

        retranslateUi(choosetime_style_widget);

        QMetaObject::connectSlotsByName(choosetime_style_widget);
    } // setupUi

    void retranslateUi(QWidget *choosetime_style_widget)
    {
        choosetime_style_widget->setWindowTitle(QCoreApplication::translate("choosetime_style_widget", "Form", nullptr));
        saveButton->setText(QCoreApplication::translate("choosetime_style_widget", "\344\277\235\345\255\230", nullptr));
        pushButton_51->setText(QCoreApplication::translate("choosetime_style_widget", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class choosetime_style_widget: public Ui_choosetime_style_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSETIME_STYLE_WIDGET_H
