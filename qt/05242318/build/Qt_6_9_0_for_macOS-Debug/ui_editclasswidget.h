/********************************************************************************
** Form generated from reading UI file 'editclasswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCLASSWIDGET_H
#define UI_EDITCLASSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editclasswidget
{
public:
    QWidget *widget;
    QLabel *label;
    QLineEdit *edit_class_name_line;
    QPushButton *pushButton;
    QPushButton *changecolorbutton;
    QLineEdit *extro_info_editline;
    QPushButton *pushButton_2;
    QFrame *line;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QPushButton *change_week_style;
    QPushButton *pushButton_4;
    QPushButton *change_time_style;
    QPushButton *pushButton_51;
    QPushButton *saveButton;
    QPushButton *pushButton_5;
    QPushButton *delete_class;

    void setupUi(QWidget *editclasswidget)
    {
        if (editclasswidget->objectName().isEmpty())
            editclasswidget->setObjectName("editclasswidget");
        editclasswidget->resize(335, 436);
        widget = new QWidget(editclasswidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 334, 433));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgba(50, 50, 50,100);\n"
""));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(7, 11, 85, 40));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));
        edit_class_name_line = new QLineEdit(widget);
        edit_class_name_line->setObjectName("edit_class_name_line");
        edit_class_name_line->setGeometry(QRect(55, 52, 256, 37));
        edit_class_name_line->setMaxLength(50);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(7, 52, 42, 36));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Themes/Assets/classicon.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(18, 18));
        pushButton->setFlat(true);
        changecolorbutton = new QPushButton(widget);
        changecolorbutton->setObjectName("changecolorbutton");
        changecolorbutton->setGeometry(QRect(55, 96, 256, 31));
        changecolorbutton->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Themes/Assets/changecolor_icon.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        changecolorbutton->setIcon(icon1);
        changecolorbutton->setIconSize(QSize(18, 18));
        changecolorbutton->setFlat(true);
        extro_info_editline = new QLineEdit(widget);
        extro_info_editline->setObjectName("extro_info_editline");
        extro_info_editline->setGeometry(QRect(55, 134, 256, 37));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(7, 134, 42, 36));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Themes/Assets/extra_info_button.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(18, 18));
        pushButton_2->setFlat(true);
        line = new QFrame(widget);
        line->setObjectName("line");
        line->setGeometry(QRect(-3, 178, 341, 16));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(7, 193, 59, 24));
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(7, 223, 42, 36));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Themes/Assets/canlendar.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(17, 17));
        pushButton_3->setFlat(true);
        change_week_style = new QPushButton(widget);
        change_week_style->setObjectName("change_week_style");
        change_week_style->setGeometry(QRect(55, 223, 256, 37));
        change_week_style->setAutoExclusive(false);
        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(7, 269, 42, 36));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Themes/Assets/clock_icon.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_4->setIcon(icon4);
        pushButton_4->setIconSize(QSize(17, 17));
        pushButton_4->setFlat(true);
        change_time_style = new QPushButton(widget);
        change_time_style->setObjectName("change_time_style");
        change_time_style->setGeometry(QRect(55, 269, 256, 37));
        change_time_style->setAutoExclusive(false);
        pushButton_51 = new QPushButton(widget);
        pushButton_51->setObjectName("pushButton_51");
        pushButton_51->setGeometry(QRect(230, 396, 101, 36));
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
        saveButton = new QPushButton(widget);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(120, 396, 94, 36));
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
        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setEnabled(false);
        pushButton_5->setGeometry(QRect(7, 96, 42, 36));
        QFont font2;
        font2.setPointSize(14);
        pushButton_5->setFont(font2);
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_5->setIconSize(QSize(18, 18));
        pushButton_5->setFlat(true);
        delete_class = new QPushButton(widget);
        delete_class->setObjectName("delete_class");
        delete_class->setGeometry(QRect(282, 9, 38, 37));
        delete_class->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Themes/Assets/delete.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        delete_class->setIcon(icon5);
        delete_class->setFlat(true);

        retranslateUi(editclasswidget);

        QMetaObject::connectSlotsByName(editclasswidget);
    } // setupUi

    void retranslateUi(QWidget *editclasswidget)
    {
        editclasswidget->setWindowTitle(QCoreApplication::translate("editclasswidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("editclasswidget", "\346\267\273\345\212\240\350\257\276\347\250\213", nullptr));
        edit_class_name_line->setText(QString());
        edit_class_name_line->setPlaceholderText(QCoreApplication::translate("editclasswidget", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
        pushButton->setText(QString());
        changecolorbutton->setText(QCoreApplication::translate("editclasswidget", "\347\202\271\346\255\244\346\233\264\346\224\271\351\242\234\350\211\262", nullptr));
        extro_info_editline->setPlaceholderText(QCoreApplication::translate("editclasswidget", "\345\244\207\346\263\250 ( \345\217\257\344\270\215\345\241\253 ) ", nullptr));
        pushButton_2->setText(QString());
        label_2->setText(QCoreApplication::translate("editclasswidget", "\346\227\266\351\227\264\346\256\265", nullptr));
        pushButton_3->setText(QString());
        change_week_style->setText(QCoreApplication::translate("editclasswidget", "PushButton", nullptr));
        pushButton_4->setText(QString());
        change_time_style->setText(QCoreApplication::translate("editclasswidget", "PushButton", nullptr));
        pushButton_51->setText(QCoreApplication::translate("editclasswidget", "\345\217\226\346\266\210", nullptr));
        saveButton->setText(QCoreApplication::translate("editclasswidget", "\344\277\235\345\255\230", nullptr));
        pushButton_5->setText(QCoreApplication::translate("editclasswidget", "\342\226\210", nullptr));
        delete_class->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class editclasswidget: public Ui_editclasswidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCLASSWIDGET_H
