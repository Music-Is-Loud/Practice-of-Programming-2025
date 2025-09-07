/********************************************************************************
** Form generated from reading UI file 'smallwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMALLWIDGET_H
#define UI_SMALLWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_smallwidget
{
public:
    QWidget *maincontextphoto;
    QLineEdit *addtodo;
    QToolButton *TodotimesetButton;
    QScrollArea *TodoList;
    QWidget *TodoListContent;
    QLabel *MydayLabel;
    QLabel *MydayDateLabel;
    QToolButton *TododatesetButton;
    QToolButton *TodorepeatButton;
    QLabel *infolabel;
    QLabel *repeatinfolabel;
    QWidget *edit_widget;
    QPushButton *set_todo_finished;
    QLineEdit *edit_todo_title;
    QPushButton *set_todo_important;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *reset_todo_time;
    QPushButton *reset_todo_date;
    QPushButton *reset_todo_repeat;
    QSpacerItem *verticalSpacer_2;
    QTextEdit *add_todo_info;
    QPushButton *close_edit_button;
    QPushButton *delete_todo;
    QPushButton *chagesize;

    void setupUi(QWidget *smallwidget)
    {
        if (smallwidget->objectName().isEmpty())
            smallwidget->setObjectName("smallwidget");
        smallwidget->resize(307, 388);
        maincontextphoto = new QWidget(smallwidget);
        maincontextphoto->setObjectName("maincontextphoto");
        maincontextphoto->setGeometry(QRect(-8, -1, 432, 393));
        maincontextphoto->setAutoFillBackground(false);
        maincontextphoto->setStyleSheet(QString::fromUtf8("QWidget#maincontextphoto\n"
"{\n"
"border-image: url(:/Themes/Assets/Themes/backgrounds/beach/2560x1600.jpg) 0 0 0 0 stretch stretch;\n"
"}"));
        addtodo = new QLineEdit(maincontextphoto);
        addtodo->setObjectName("addtodo");
        addtodo->setGeometry(QRect(26, 336, 260, 35));
        addtodo->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"            background-color: rgba(0, 0, 0, 180);\n"
" border-radius: 10px;\n"
"        }\n"
"QLineEdit:focus {\n"
"            background-color: rgba(50, 50,50, 180);\n"
"        }\n"
"QLineEdit:!focus:!hover {\n"
"             background-color: rgba(20, 20, 20, 128);\n"
"			color: white\n"
"\n"
"        }"));
        addtodo->setFrame(false);
        addtodo->setCursorMoveStyle(Qt::CursorMoveStyle::LogicalMoveStyle);
        addtodo->setClearButtonEnabled(false);
        TodotimesetButton = new QToolButton(maincontextphoto);
        TodotimesetButton->setObjectName("TodotimesetButton");
        TodotimesetButton->setGeometry(QRect(245, 335, 20, 40));
        TodotimesetButton->setStyleSheet(QString::fromUtf8("background:transparent;\n"
" border-radius: 10px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Themes/Assets/alarm.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        TodotimesetButton->setIcon(icon);
        TodotimesetButton->setIconSize(QSize(15, 15));
        TodotimesetButton->setPopupMode(QToolButton::ToolButtonPopupMode::InstantPopup);
        TodoList = new QScrollArea(maincontextphoto);
        TodoList->setObjectName("TodoList");
        TodoList->setGeometry(QRect(22, 95, 252, 231));
        TodoList->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        TodoList->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        TodoList->setWidgetResizable(true);
        TodoList->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        TodoListContent = new QWidget();
        TodoListContent->setObjectName("TodoListContent");
        TodoListContent->setGeometry(QRect(0, 0, 250, 229));
        TodoList->setWidget(TodoListContent);
        MydayLabel = new QLabel(maincontextphoto);
        MydayLabel->setObjectName("MydayLabel");
        MydayLabel->setGeometry(QRect(22, 15, 131, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(18);
        font.setBold(true);
        font.setStyleStrategy(QFont::PreferAntialias);
        MydayLabel->setFont(font);
        MydayLabel->setTextFormat(Qt::TextFormat::PlainText);
        MydayDateLabel = new QLabel(maincontextphoto);
        MydayDateLabel->setObjectName("MydayDateLabel");
        MydayDateLabel->setGeometry(QRect(26, 60, 121, 16));
        TododatesetButton = new QToolButton(maincontextphoto);
        TododatesetButton->setObjectName("TododatesetButton");
        TododatesetButton->setGeometry(QRect(225, 335, 20, 40));
        TododatesetButton->setStyleSheet(QString::fromUtf8("background:transparent;\n"
" border-radius: 10px;\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Themes/Assets/canlendar.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        TododatesetButton->setIcon(icon1);
        TododatesetButton->setIconSize(QSize(14, 14));
        TododatesetButton->setPopupMode(QToolButton::ToolButtonPopupMode::InstantPopup);
        TododatesetButton->setAutoRaise(true);
        TodorepeatButton = new QToolButton(maincontextphoto);
        TodorepeatButton->setObjectName("TodorepeatButton");
        TodorepeatButton->setGeometry(QRect(265, 335, 20, 40));
        TodorepeatButton->setStyleSheet(QString::fromUtf8("background:transparent;\n"
" border-radius: 10px;\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Themes/Assets/repeat.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        TodorepeatButton->setIcon(icon2);
        TodorepeatButton->setIconSize(QSize(15, 15));
        TodorepeatButton->setPopupMode(QToolButton::ToolButtonPopupMode::InstantPopup);
        infolabel = new QLabel(maincontextphoto);
        infolabel->setObjectName("infolabel");
        infolabel->setGeometry(QRect(215, 335, 43, 40));
        repeatinfolabel = new QLabel(maincontextphoto);
        repeatinfolabel->setObjectName("repeatinfolabel");
        repeatinfolabel->setGeometry(QRect(170, 335, 40, 40));
        edit_widget = new QWidget(maincontextphoto);
        edit_widget->setObjectName("edit_widget");
        edit_widget->setEnabled(true);
        edit_widget->setGeometry(QRect(128, 0, 196, 391));
        edit_widget->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        edit_widget->setStyleSheet(QString::fromUtf8("background-color: rgba(40, 40, 40, 255);"));
        set_todo_finished = new QPushButton(edit_widget);
        set_todo_finished->setObjectName("set_todo_finished");
        set_todo_finished->setGeometry(QRect(15, 32, 25, 30));
        set_todo_finished->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"background-color: rgba(50, 50, 50, 255);\n"
"\n"
"\n"
"                              color: white; /* \346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */ \n"
"                              border: none; /* \345\216\273\346\216\211\350\276\271\346\241\206 */ \n"
"                              border-bottom-left-radius: 10px;\n"
"                              border-top-left-radius: 10px;\n"
"                              icon: url(:/Themes/Assets/circle-large.svg); /* \346\255\243\345\270\270\347\212\266\346\200\201\345\233\276\346\240\207 */ \n"
"                              padding-left: 5px;\n"
"text-align: left; /* \346\226\207\345\255\227\345\261\205\345\267\246 */ \n"
"}\n"
"                   \n"
"QPushButton:hover \n"
"{ \n"
"                              background-color: rgba(0, 0, 0, 128); /* \346\202\254\346\265\256\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\345\217\230\346\267\261 */ \n"
"                              icon: ur"
                        "l(:/Themes/Assets/circle-check.svg); /* \346\255\243\345\270\270\347\212\266\346\200\201\345\233\276\346\240\207 */ \n"
"}\n"
"\n"
"\n"
"                            "));
        set_todo_finished->setIconSize(QSize(12, 12));
        set_todo_finished->setFlat(true);
        edit_todo_title = new QLineEdit(edit_widget);
        edit_todo_title->setObjectName("edit_todo_title");
        edit_todo_title->setGeometry(QRect(40, 32, 110, 30));
        QFont font1;
        font1.setPointSize(11);
        edit_todo_title->setFont(font1);
        edit_todo_title->setStyleSheet(QString::fromUtf8("background-color: rgba(50, 50, 50, 255);"));
        set_todo_important = new QPushButton(edit_widget);
        set_todo_important->setObjectName("set_todo_important");
        set_todo_important->setGeometry(QRect(150, 32, 25, 30));
        set_todo_important->setStyleSheet(QString::fromUtf8("background-color: rgba(50, 50, 50, 255);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Themes/Assets/JumpList/dark/Imp_dark_256.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        set_todo_important->setIcon(icon3);
        set_todo_important->setIconSize(QSize(20, 20));
        set_todo_important->setFlat(true);
        verticalLayoutWidget_2 = new QWidget(edit_widget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(14, 73, 162, 147));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        reset_todo_time = new QPushButton(verticalLayoutWidget_2);
        reset_todo_time->setObjectName("reset_todo_time");
        reset_todo_time->setMinimumSize(QSize(0, 25));
        reset_todo_time->setBaseSize(QSize(0, 0));
        reset_todo_time->setStyleSheet(QString::fromUtf8("background-color: rgba(50, 50, 50, 255);\n"
"text-align: left;\n"
"padding: 10px;"));
        reset_todo_time->setIcon(icon);
        reset_todo_time->setFlat(true);

        verticalLayout_2->addWidget(reset_todo_time);

        reset_todo_date = new QPushButton(verticalLayoutWidget_2);
        reset_todo_date->setObjectName("reset_todo_date");
        reset_todo_date->setMinimumSize(QSize(0, 25));
        reset_todo_date->setBaseSize(QSize(0, 0));
        reset_todo_date->setStyleSheet(QString::fromUtf8("background-color: rgba(50, 50, 50, 255);\n"
"text-align: left;\n"
"padding: 10px;"));
        reset_todo_date->setIcon(icon1);
        reset_todo_date->setFlat(true);

        verticalLayout_2->addWidget(reset_todo_date);

        reset_todo_repeat = new QPushButton(verticalLayoutWidget_2);
        reset_todo_repeat->setObjectName("reset_todo_repeat");
        reset_todo_repeat->setMinimumSize(QSize(0, 25));
        reset_todo_repeat->setBaseSize(QSize(0, 0));
        reset_todo_repeat->setStyleSheet(QString::fromUtf8("background-color: rgba(50, 50, 50, 255);\n"
"text-align: left;\n"
"padding: 10px;\n"
""));
        reset_todo_repeat->setIcon(icon2);
        reset_todo_repeat->setFlat(true);

        verticalLayout_2->addWidget(reset_todo_repeat);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        add_todo_info = new QTextEdit(edit_widget);
        add_todo_info->setObjectName("add_todo_info");
        add_todo_info->setGeometry(QRect(14, 228, 165, 100));
        QFont font2;
        font2.setPointSize(10);
        add_todo_info->setFont(font2);
        add_todo_info->setStyleSheet(QString::fromUtf8("background-color: rgba(50, 50, 50, 255);"));
        close_edit_button = new QPushButton(edit_widget);
        close_edit_button->setObjectName("close_edit_button");
        close_edit_button->setGeometry(QRect(160, 0, 30, 30));
        close_edit_button->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::EditClear));
        close_edit_button->setIcon(icon4);
        close_edit_button->setFlat(true);
        delete_todo = new QPushButton(edit_widget);
        delete_todo->setObjectName("delete_todo");
        delete_todo->setGeometry(QRect(151, 359, 33, 26));
        delete_todo->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Themes/Assets/delete.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        delete_todo->setIcon(icon5);
        delete_todo->setFlat(true);
        chagesize = new QPushButton(maincontextphoto);
        chagesize->setObjectName("chagesize");
        chagesize->setGeometry(QRect(259, 14, 24, 22));
        chagesize->setStyleSheet(QString::fromUtf8("background-color: rgba(50, 50, 50, 255);\n"
""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Themes/Assets/smallwindow.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        chagesize->setIcon(icon6);
        chagesize->setIconSize(QSize(14, 14));
        chagesize->raise();
        addtodo->raise();
        TodotimesetButton->raise();
        TodoList->raise();
        MydayLabel->raise();
        MydayDateLabel->raise();
        TododatesetButton->raise();
        TodorepeatButton->raise();
        infolabel->raise();
        repeatinfolabel->raise();
        edit_widget->raise();

        retranslateUi(smallwidget);

        QMetaObject::connectSlotsByName(smallwidget);
    } // setupUi

    void retranslateUi(QWidget *smallwidget)
    {
        smallwidget->setWindowTitle(QCoreApplication::translate("smallwidget", "Form", nullptr));
        addtodo->setText(QString());
        addtodo->setPlaceholderText(QCoreApplication::translate("smallwidget", "\346\267\273\345\212\240\344\273\273\345\212\241", nullptr));
        TodotimesetButton->setText(QString());
        MydayLabel->setText(QCoreApplication::translate("smallwidget", "\346\210\221\347\232\204\344\270\200\345\244\251", nullptr));
        MydayDateLabel->setText(QCoreApplication::translate("smallwidget", "TextLabel", nullptr));
        TododatesetButton->setText(QString());
        TodorepeatButton->setText(QString());
        infolabel->setText(QCoreApplication::translate("smallwidget", "TextLabel", nullptr));
        repeatinfolabel->setText(QCoreApplication::translate("smallwidget", "TextLabel", nullptr));
        set_todo_finished->setText(QString());
        set_todo_important->setText(QString());
        reset_todo_time->setText(QCoreApplication::translate("smallwidget", "  \346\217\220\351\206\222\346\210\221", nullptr));
        reset_todo_date->setText(QCoreApplication::translate("smallwidget", "  \346\224\271\345\217\230\346\210\252\346\255\242\346\227\245\346\234\237", nullptr));
        reset_todo_repeat->setText(QCoreApplication::translate("smallwidget", "  \351\207\215\345\244\215", nullptr));
        add_todo_info->setPlaceholderText(QCoreApplication::translate("smallwidget", "\346\267\273\345\212\240\345\244\207\346\263\250", nullptr));
        close_edit_button->setText(QString());
        delete_todo->setText(QString());
        chagesize->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class smallwidget: public Ui_smallwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMALLWIDGET_H
