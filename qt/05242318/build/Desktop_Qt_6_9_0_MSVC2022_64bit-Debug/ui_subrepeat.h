/********************************************************************************
** Form generated from reading UI file 'subrepeat.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBREPEAT_H
#define UI_SUBREPEAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_subrepeat
{
public:
    QPushButton *SaveButton;
    QPushButton *ConcellButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QComboBox *comboBox;

    void setupUi(QWidget *subrepeat)
    {
        if (subrepeat->objectName().isEmpty())
            subrepeat->setObjectName("subrepeat");
        subrepeat->resize(256, 157);
        SaveButton = new QPushButton(subrepeat);
        SaveButton->setObjectName("SaveButton");
        SaveButton->setGeometry(QRect(8, 108, 118, 40));
        SaveButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        ConcellButton = new QPushButton(subrepeat);
        ConcellButton->setObjectName("ConcellButton");
        ConcellButton->setGeometry(QRect(134, 109, 118, 39));
        ConcellButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"    color: white; /* \346\214\211\351\222\256\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"    border: none; /* \346\227\240\350\276\271\346\241\206 */\n"
"    padding: 5px 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-size: 13px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(150, 150, 150, 128);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  rgba(100, 100, 100,128);\n"
"}"));
        lineEdit = new QLineEdit(subrepeat);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 57, 74, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        lineEdit->setMaxLength(1);
        label = new QLabel(subrepeat);
        label->setObjectName("label");
        label->setGeometry(QRect(9, 9, 101, 39));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        comboBox = new QComboBox(subrepeat);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(93, 56, 156, 44));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: transparent;\n"
"    padding: 0 10px;\n"
"    min-height: 30px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 35px;\n"
"    border-left: 0px solid #ccc;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(:/Themes/Assets/down.svg);\n"
"    width: 12px;\n"
"    height: 12px;\n"
"    right: 5px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"                background-color: rgba(50,50,50,200);\n"
"                border: 0px solid #ccc;\n"
"				border-radius: 6px;\n"
"\n"
"            }\n"
"QComboBox::item {\n"
"                padding: 10px;\n"
"				\n"
"            }\n"
"QComboBox QAbstractItemView::item { min-height: 40px;}\n"
"\n"
""));
        comboBox->setSizeAdjustPolicy(QComboBox::SizeAdjustPolicy::AdjustToMinimumContentsLengthWithIcon);

        retranslateUi(subrepeat);

        QMetaObject::connectSlotsByName(subrepeat);
    } // setupUi

    void retranslateUi(QWidget *subrepeat)
    {
        subrepeat->setWindowTitle(QCoreApplication::translate("subrepeat", "Form", nullptr));
        SaveButton->setText(QCoreApplication::translate("subrepeat", "\344\277\235\345\255\230", nullptr));
        ConcellButton->setText(QCoreApplication::translate("subrepeat", "\345\217\226\346\266\210", nullptr));
        label->setText(QCoreApplication::translate("subrepeat", "\351\207\215\345\244\215\345\221\250\346\234\237...", nullptr));
        comboBox->setCurrentText(QString());
    } // retranslateUi

};

namespace Ui {
    class subrepeat: public Ui_subrepeat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBREPEAT_H
