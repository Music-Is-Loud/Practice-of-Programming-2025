/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *MydayButton;
    QPushButton *ClassesButton;
    QPushButton *TaskButton;
    QSpacerItem *verticalSpacer;
    QPushButton *searchButton;
    QLabel *WeatherLabel;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton_4;
    QLabel *label;
    QWidget *page_classsheet;
    QWidget *maincontextphoto_2;
    QLabel *ClassSheetTiltleLabel;
    QLabel *MydayDateLabel_2;
    QWidget *class_sheet_widget;
    QLabel *nowmonth;
    QLabel *MondayLabel;
    QLabel *TuesdayLabel;
    QLabel *ThursdayLabel;
    QLabel *WednesdayLabel;
    QLabel *FridayLabel;
    QLabel *SaturdayLabel;
    QLabel *Sundaylabel;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_10;
    QLabel *label_15;
    QLabel *label_14;
    QLabel *label_18;
    QLabel *label_17;
    QLabel *label_19;
    QLabel *label_16;
    QLabel *label_12;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *add_class_by_hand;
    QPushButton *add_class_from_web;
    QWidget *page_Myday;
    QWidget *maincontextphoto;
    QLabel *MydayLabel;
    QLabel *MydayDateLabel;
    QScrollArea *TodoList;
    QWidget *TodoListContent;
    QLineEdit *addtodo;
    QToolButton *TododatesetButton;
    QToolButton *TodotimesetButton;
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

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(1033, 614);
        Widget->setStyleSheet(QString::fromUtf8(""));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(30, 110, 301, 41));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 552, 231, 41));
        verticalLayoutWidget = new QWidget(Widget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(30, 170, 301, 351));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        MydayButton = new QPushButton(verticalLayoutWidget);
        MydayButton->setObjectName("MydayButton");
        MydayButton->setEnabled(true);
        MydayButton->setMinimumSize(QSize(0, 40));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font.setPointSize(11);
        font.setWeight(QFont::Thin);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferAntialias);
        font.setHintingPreference(QFont::PreferVerticalHinting);
        MydayButton->setFont(font);
        MydayButton->setFocusPolicy(Qt::FocusPolicy::WheelFocus);
        MydayButton->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        MydayButton->setStyleSheet(QString::fromUtf8("background:transparent;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Themes/Assets/JumpList/dark/MyDay_dark_256.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MydayButton->setIcon(icon);
        MydayButton->setIconSize(QSize(22, 22));
        MydayButton->setFlat(true);

        verticalLayout->addWidget(MydayButton);

        ClassesButton = new QPushButton(verticalLayoutWidget);
        ClassesButton->setObjectName("ClassesButton");
        ClassesButton->setMinimumSize(QSize(0, 40));
        QFont font1;
        font1.setPointSize(11);
        font1.setWeight(QFont::Thin);
        font1.setStyleStrategy(QFont::PreferAntialias);
        font1.setHintingPreference(QFont::PreferVerticalHinting);
        ClassesButton->setFont(font1);
        ClassesButton->setStyleSheet(QString::fromUtf8("background:transparent;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Themes/Assets/JumpList/dark/Planned_dark_256.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ClassesButton->setIcon(icon1);
        ClassesButton->setIconSize(QSize(22, 22));
        ClassesButton->setFlat(true);

        verticalLayout->addWidget(ClassesButton);

        TaskButton = new QPushButton(verticalLayoutWidget);
        TaskButton->setObjectName("TaskButton");
        TaskButton->setMinimumSize(QSize(0, 40));
        TaskButton->setFont(font1);
        TaskButton->setStyleSheet(QString::fromUtf8("background:transparent;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Themes/Assets/JumpList/dark/Flag_dark_256.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        TaskButton->setIcon(icon2);
        TaskButton->setIconSize(QSize(22, 22));
        TaskButton->setFlat(true);

        verticalLayout->addWidget(TaskButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        searchButton = new QPushButton(Widget);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(280, 110, 51, 41));
        searchButton->setStyleSheet(QString::fromUtf8("\n"
"background:transparent;"));
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::SystemSearch));
        searchButton->setIcon(icon3);
        searchButton->setIconSize(QSize(20, 20));
        searchButton->setFlat(true);
        WeatherLabel = new QLabel(Widget);
        WeatherLabel->setObjectName("WeatherLabel");
        WeatherLabel->setGeometry(QRect(30, 20, 301, 61));
        QFont font2;
        font2.setPointSize(11);
        WeatherLabel->setFont(font2);
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(350, 10, 701, 621));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        page = new QWidget();
        page->setObjectName("page");
        pushButton_4 = new QPushButton(page);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(212, 95, 280, 253));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background-color: rgba(0, 0, 0, 0);  /* \345\256\214\345\205\250\351\200\217\346\230\216\350\203\214\346\231\257 */\n"
"        color: rgba(0, 0, 0, 0);             /* \351\232\220\350\227\217\346\214\211\351\222\256\346\226\207\345\255\227 */\n"
"        border: none;                       /* \351\232\220\350\227\217\350\276\271\346\241\206 */\n"
"        padding: 0px;                        /* \347\247\273\351\231\244\345\206\205\350\276\271\350\267\235 */\n"
"    }"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Themes/Assets/suggestions-empty-state.scale-200.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_4->setIcon(icon4);
        pushButton_4->setIconSize(QSize(300, 300));
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(205, 372, 315, 69));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Cambria")});
        font3.setPointSize(20);
        label->setFont(font3);
        stackedWidget->addWidget(page);
        page_classsheet = new QWidget();
        page_classsheet->setObjectName("page_classsheet");
        maincontextphoto_2 = new QWidget(page_classsheet);
        maincontextphoto_2->setObjectName("maincontextphoto_2");
        maincontextphoto_2->setGeometry(QRect(0, 0, 1001, 671));
        maincontextphoto_2->setStyleSheet(QString::fromUtf8("QWidget#maincontextphoto_2\n"
"{\n"
"image: url(:/Themes/Assets/Themes/backgrounds/beach/2560x1600.jpg);\n"
"\n"
"}"));
        ClassSheetTiltleLabel = new QLabel(maincontextphoto_2);
        ClassSheetTiltleLabel->setObjectName("ClassSheetTiltleLabel");
        ClassSheetTiltleLabel->setGeometry(QRect(30, 40, 131, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font4.setPointSize(22);
        font4.setBold(true);
        font4.setStyleStrategy(QFont::PreferAntialias);
        ClassSheetTiltleLabel->setFont(font4);
        ClassSheetTiltleLabel->setTextFormat(Qt::TextFormat::PlainText);
        MydayDateLabel_2 = new QLabel(maincontextphoto_2);
        MydayDateLabel_2->setObjectName("MydayDateLabel_2");
        MydayDateLabel_2->setGeometry(QRect(130, 50, 121, 16));
        class_sheet_widget = new QWidget(maincontextphoto_2);
        class_sheet_widget->setObjectName("class_sheet_widget");
        class_sheet_widget->setGeometry(QRect(20, 70, 641, 511));
        class_sheet_widget->setStyleSheet(QString::fromUtf8("background-color: rgba(50, 50, 50, 128);"));
        nowmonth = new QLabel(class_sheet_widget);
        nowmonth->setObjectName("nowmonth");
        nowmonth->setGeometry(QRect(0, 0, 70, 35));
        MondayLabel = new QLabel(class_sheet_widget);
        MondayLabel->setObjectName("MondayLabel");
        MondayLabel->setGeometry(QRect(82, 0, 70, 35));
        MondayLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        TuesdayLabel = new QLabel(class_sheet_widget);
        TuesdayLabel->setObjectName("TuesdayLabel");
        TuesdayLabel->setGeometry(QRect(164, 0, 70, 35));
        TuesdayLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ThursdayLabel = new QLabel(class_sheet_widget);
        ThursdayLabel->setObjectName("ThursdayLabel");
        ThursdayLabel->setGeometry(QRect(246, 0, 70, 35));
        ThursdayLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        WednesdayLabel = new QLabel(class_sheet_widget);
        WednesdayLabel->setObjectName("WednesdayLabel");
        WednesdayLabel->setGeometry(QRect(328, 0, 70, 35));
        WednesdayLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        FridayLabel = new QLabel(class_sheet_widget);
        FridayLabel->setObjectName("FridayLabel");
        FridayLabel->setGeometry(QRect(492, 0, 70, 35));
        FridayLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        SaturdayLabel = new QLabel(class_sheet_widget);
        SaturdayLabel->setObjectName("SaturdayLabel");
        SaturdayLabel->setGeometry(QRect(572, 0, 70, 35));
        SaturdayLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Sundaylabel = new QLabel(class_sheet_widget);
        Sundaylabel->setObjectName("Sundaylabel");
        Sundaylabel->setGeometry(QRect(410, 0, 70, 35));
        Sundaylabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_9 = new QLabel(class_sheet_widget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(0, 36, 70, 40));
        QFont font5;
        font5.setPointSize(7);
        label_9->setFont(font5);
        label_9->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        label_11 = new QLabel(class_sheet_widget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(0, 118, 70, 40));
        label_11->setFont(font5);
        label_11->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        label_13 = new QLabel(class_sheet_widget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(0, 200, 70, 40));
        label_13->setFont(font5);
        label_13->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        label_10 = new QLabel(class_sheet_widget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(0, 77, 70, 40));
        label_10->setFont(font5);
        label_10->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        label_15 = new QLabel(class_sheet_widget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(0, 282, 70, 40));
        label_15->setFont(font5);
        label_15->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        label_14 = new QLabel(class_sheet_widget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(0, 241, 70, 40));
        label_14->setFont(font5);
        label_14->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        label_18 = new QLabel(class_sheet_widget);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(0, 405, 70, 40));
        label_18->setFont(font5);
        label_18->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        label_17 = new QLabel(class_sheet_widget);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(0, 364, 70, 40));
        label_17->setFont(font5);
        label_17->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        label_19 = new QLabel(class_sheet_widget);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(0, 446, 70, 40));
        label_19->setFont(font5);
        label_19->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        label_16 = new QLabel(class_sheet_widget);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(0, 323, 70, 40));
        label_16->setFont(font5);
        label_16->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        label_12 = new QLabel(class_sheet_widget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(0, 159, 70, 40));
        label_12->setFont(font5);
        label_12->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        pushButton_2 = new QPushButton(maincontextphoto_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(660, 70, 21, 511));
        pushButton_2->setStyleSheet(QString::fromUtf8("background:transparent;"));
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::MediaSkipForward));
        pushButton_2->setIcon(icon5);
        pushButton_2->setFlat(true);
        pushButton_3 = new QPushButton(maincontextphoto_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(0, 70, 21, 511));
        pushButton_3->setStyleSheet(QString::fromUtf8("background:transparent;"));
        QIcon icon6(QIcon::fromTheme(QIcon::ThemeIcon::GoPrevious));
        pushButton_3->setIcon(icon6);
        pushButton_3->setFlat(true);
        add_class_by_hand = new QPushButton(maincontextphoto_2);
        add_class_by_hand->setObjectName("add_class_by_hand");
        add_class_by_hand->setGeometry(QRect(570, 35, 33, 30));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Themes/Assets/add_icon.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        add_class_by_hand->setIcon(icon7);
        add_class_by_hand->setFlat(false);
        add_class_from_web = new QPushButton(maincontextphoto_2);
        add_class_from_web->setObjectName("add_class_from_web");
        add_class_from_web->setGeometry(QRect(615, 35, 33, 30));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Themes/Assets/download.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        add_class_from_web->setIcon(icon8);
        add_class_from_web->setFlat(false);
        class_sheet_widget->raise();
        ClassSheetTiltleLabel->raise();
        MydayDateLabel_2->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        add_class_by_hand->raise();
        add_class_from_web->raise();
        stackedWidget->addWidget(page_classsheet);
        page_Myday = new QWidget();
        page_Myday->setObjectName("page_Myday");
        maincontextphoto = new QWidget(page_Myday);
        maincontextphoto->setObjectName("maincontextphoto");
        maincontextphoto->setGeometry(QRect(0, 0, 1001, 671));
        maincontextphoto->setStyleSheet(QString::fromUtf8("QWidget#maincontextphoto\n"
"{\n"
"image: url(:/Themes/Assets/Themes/backgrounds/beach/2560x1600.jpg);\n"
"\n"
"}"));
        MydayLabel = new QLabel(maincontextphoto);
        MydayLabel->setObjectName("MydayLabel");
        MydayLabel->setGeometry(QRect(30, 40, 131, 31));
        MydayLabel->setFont(font4);
        MydayLabel->setStyleSheet(QString::fromUtf8("background:transparent"));
        MydayLabel->setTextFormat(Qt::TextFormat::PlainText);
        MydayDateLabel = new QLabel(maincontextphoto);
        MydayDateLabel->setObjectName("MydayDateLabel");
        MydayDateLabel->setGeometry(QRect(30, 90, 121, 16));
        TodoList = new QScrollArea(maincontextphoto);
        TodoList->setObjectName("TodoList");
        TodoList->setGeometry(QRect(30, 120, 611, 411));
        TodoList->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        TodoList->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        TodoList->setWidgetResizable(true);
        TodoList->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        TodoListContent = new QWidget();
        TodoListContent->setObjectName("TodoListContent");
        TodoListContent->setGeometry(QRect(0, 0, 609, 409));
        TodoList->setWidget(TodoListContent);
        addtodo = new QLineEdit(maincontextphoto);
        addtodo->setObjectName("addtodo");
        addtodo->setGeometry(QRect(40, 540, 598, 41));
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
        TododatesetButton = new QToolButton(maincontextphoto);
        TododatesetButton->setObjectName("TododatesetButton");
        TododatesetButton->setGeometry(QRect(544, 540, 31, 42));
        TododatesetButton->setStyleSheet(QString::fromUtf8("background:transparent;\n"
""));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Themes/Assets/canlendar.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        TododatesetButton->setIcon(icon9);
        TododatesetButton->setIconSize(QSize(15, 15));
        TododatesetButton->setPopupMode(QToolButton::ToolButtonPopupMode::InstantPopup);
        TododatesetButton->setAutoRaise(true);
        TodotimesetButton = new QToolButton(maincontextphoto);
        TodotimesetButton->setObjectName("TodotimesetButton");
        TodotimesetButton->setGeometry(QRect(572, 540, 31, 42));
        TodotimesetButton->setStyleSheet(QString::fromUtf8("background:transparent;"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Themes/Assets/alarm.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        TodotimesetButton->setIcon(icon10);
        TodotimesetButton->setPopupMode(QToolButton::ToolButtonPopupMode::InstantPopup);
        TodorepeatButton = new QToolButton(maincontextphoto);
        TodorepeatButton->setObjectName("TodorepeatButton");
        TodorepeatButton->setGeometry(QRect(600, 540, 30, 42));
        TodorepeatButton->setStyleSheet(QString::fromUtf8("background:transparent;\n"
""));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Themes/Assets/repeat.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        TodorepeatButton->setIcon(icon11);
        TodorepeatButton->setPopupMode(QToolButton::ToolButtonPopupMode::InstantPopup);
        infolabel = new QLabel(maincontextphoto);
        infolabel->setObjectName("infolabel");
        infolabel->setGeometry(QRect(515, 540, 96, 41));
        infolabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        infolabel->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: white;"));
        infolabel->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        repeatinfolabel = new QLabel(maincontextphoto);
        repeatinfolabel->setObjectName("repeatinfolabel");
        repeatinfolabel->setGeometry(QRect(460, 540, 55, 41));
        edit_widget = new QWidget(maincontextphoto);
        edit_widget->setObjectName("edit_widget");
        edit_widget->setEnabled(true);
        edit_widget->setGeometry(QRect(379, 21, 304, 584));
        edit_widget->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        edit_widget->setStyleSheet(QString::fromUtf8("background-color: rgba(40, 40, 40, 255);"));
        set_todo_finished = new QPushButton(edit_widget);
        set_todo_finished->setObjectName("set_todo_finished");
        set_todo_finished->setGeometry(QRect(25, 32, 35, 46));
        set_todo_finished->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"background-color: rgba(50, 50, 50, 255);\n"
"\n"
"\n"
"                              color: white; /* \346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */ \n"
"                              border: none; /* \345\216\273\346\216\211\350\276\271\346\241\206 */ \n"
"                              border-bottom-left-radius: 10px;\n"
"                              border-top-left-radius: 10px;\n"
"                              icon: url(:/Themes/Assets/circle-large.svg); /* \346\255\243\345\270\270\347\212\266\346\200\201\345\233\276\346\240\207 */ \n"
"                              padding-left: 10px;\n"
"text-align: left; /* \346\226\207\345\255\227\345\261\205\345\267\246 */ \n"
"}\n"
"                   \n"
"QPushButton:hover \n"
"{ \n"
"                              background-color: rgba(0, 0, 0, 128); /* \346\202\254\346\265\256\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\345\217\230\346\267\261 */ \n"
"                              icon: u"
                        "rl(:/Themes/Assets/circle-check.svg); /* \346\255\243\345\270\270\347\212\266\346\200\201\345\233\276\346\240\207 */ \n"
"}\n"
"\n"
"\n"
"                            "));
        set_todo_finished->setFlat(true);
        edit_todo_title = new QLineEdit(edit_widget);
        edit_todo_title->setObjectName("edit_todo_title");
        edit_todo_title->setGeometry(QRect(60, 32, 184, 46));
        edit_todo_title->setFont(font2);
        edit_todo_title->setStyleSheet(QString::fromUtf8("background-color: rgba(50, 50, 50, 255);"));
        set_todo_important = new QPushButton(edit_widget);
        set_todo_important->setObjectName("set_todo_important");
        set_todo_important->setGeometry(QRect(244, 32, 40, 46));
        set_todo_important->setStyleSheet(QString::fromUtf8("background-color: rgba(50, 50, 50, 255);"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Themes/Assets/JumpList/dark/Imp_dark_256.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        set_todo_important->setIcon(icon12);
        set_todo_important->setIconSize(QSize(20, 20));
        set_todo_important->setFlat(true);
        verticalLayoutWidget_2 = new QWidget(edit_widget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(25, 106, 256, 141));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        reset_todo_time = new QPushButton(verticalLayoutWidget_2);
        reset_todo_time->setObjectName("reset_todo_time");
        reset_todo_time->setMinimumSize(QSize(0, 40));
        reset_todo_time->setBaseSize(QSize(0, 0));
        reset_todo_time->setStyleSheet(QString::fromUtf8("background-color: rgba(50, 50, 50, 255);\n"
"text-align: left;\n"
"padding: 10px;"));
        reset_todo_time->setIcon(icon10);
        reset_todo_time->setFlat(true);

        verticalLayout_2->addWidget(reset_todo_time);

        reset_todo_date = new QPushButton(verticalLayoutWidget_2);
        reset_todo_date->setObjectName("reset_todo_date");
        reset_todo_date->setMinimumSize(QSize(0, 40));
        reset_todo_date->setBaseSize(QSize(0, 0));
        reset_todo_date->setStyleSheet(QString::fromUtf8("background-color: rgba(50, 50, 50, 255);\n"
"text-align: left;\n"
"padding: 10px;"));
        reset_todo_date->setIcon(icon9);
        reset_todo_date->setFlat(true);

        verticalLayout_2->addWidget(reset_todo_date);

        reset_todo_repeat = new QPushButton(verticalLayoutWidget_2);
        reset_todo_repeat->setObjectName("reset_todo_repeat");
        reset_todo_repeat->setMinimumSize(QSize(0, 40));
        reset_todo_repeat->setBaseSize(QSize(0, 0));
        reset_todo_repeat->setStyleSheet(QString::fromUtf8("background-color: rgba(50, 50, 50, 255);\n"
"text-align: left;\n"
"padding: 10px;\n"
""));
        reset_todo_repeat->setIcon(icon11);
        reset_todo_repeat->setFlat(true);

        verticalLayout_2->addWidget(reset_todo_repeat);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        add_todo_info = new QTextEdit(edit_widget);
        add_todo_info->setObjectName("add_todo_info");
        add_todo_info->setGeometry(QRect(27, 255, 252, 199));
        QFont font6;
        font6.setPointSize(10);
        add_todo_info->setFont(font6);
        add_todo_info->setStyleSheet(QString::fromUtf8("background-color: rgba(50, 50, 50, 255);"));
        close_edit_button = new QPushButton(edit_widget);
        close_edit_button->setObjectName("close_edit_button");
        close_edit_button->setGeometry(QRect(270, 0, 30, 30));
        close_edit_button->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        QIcon icon13(QIcon::fromTheme(QIcon::ThemeIcon::EditClear));
        close_edit_button->setIcon(icon13);
        close_edit_button->setFlat(true);
        delete_todo = new QPushButton(edit_widget);
        delete_todo->setObjectName("delete_todo");
        delete_todo->setGeometry(QRect(260, 539, 38, 37));
        delete_todo->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/Themes/Assets/delete.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        delete_todo->setIcon(icon14);
        delete_todo->setFlat(true);
        chagesize = new QPushButton(maincontextphoto);
        chagesize->setObjectName("chagesize");
        chagesize->setGeometry(QRect(610, 42, 31, 31));
        chagesize->setStyleSheet(QString::fromUtf8("background-color: rgba(50, 50, 50, 255);\n"
"\n"
""));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/Themes/Assets/smallwindow.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        chagesize->setIcon(icon15);
        chagesize->setIconSize(QSize(20, 20));
        chagesize->raise();
        MydayLabel->raise();
        MydayDateLabel->raise();
        TodoList->raise();
        addtodo->raise();
        TododatesetButton->raise();
        TodotimesetButton->raise();
        TodorepeatButton->raise();
        infolabel->raise();
        repeatinfolabel->raise();
        edit_widget->raise();
        stackedWidget->addWidget(page_Myday);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        MydayButton->setText(QCoreApplication::translate("Widget", " \346\210\221\347\232\204\344\270\200\345\244\251", nullptr));
        ClassesButton->setText(QCoreApplication::translate("Widget", " \350\257\276\350\241\250", nullptr));
        TaskButton->setText(QCoreApplication::translate("Widget", "\344\270\223\346\263\250", nullptr));
        searchButton->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        WeatherLabel->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        pushButton_4->setText(QString());
        label->setText(QCoreApplication::translate("Widget", "Start Your Day from Now!", nullptr));
        ClassSheetTiltleLabel->setText(QCoreApplication::translate("Widget", "\350\257\276\350\241\250", nullptr));
        MydayDateLabel_2->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        nowmonth->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        MondayLabel->setText(QCoreApplication::translate("Widget", "\345\221\250\344\270\200", nullptr));
        TuesdayLabel->setText(QCoreApplication::translate("Widget", "\345\221\250\344\272\214", nullptr));
        ThursdayLabel->setText(QCoreApplication::translate("Widget", "\345\221\250\344\270\211", nullptr));
        WednesdayLabel->setText(QCoreApplication::translate("Widget", "\345\221\250\345\233\233", nullptr));
        FridayLabel->setText(QCoreApplication::translate("Widget", "\345\221\250\345\205\255", nullptr));
        SaturdayLabel->setText(QCoreApplication::translate("Widget", "\345\221\250\346\227\245", nullptr));
        Sundaylabel->setText(QCoreApplication::translate("Widget", "\345\221\250\344\272\224", nullptr));
        label_9->setText(QCoreApplication::translate("Widget", "1\n"
"8:00\n"
"8:50", nullptr));
        label_11->setText(QCoreApplication::translate("Widget", "3\n"
"10:50\n"
"11:00", nullptr));
        label_13->setText(QCoreApplication::translate("Widget", "5\n"
"13:00\n"
"13:50", nullptr));
        label_10->setText(QCoreApplication::translate("Widget", "2\n"
"9:00\n"
"9:50", nullptr));
        label_15->setText(QCoreApplication::translate("Widget", "7\n"
"15:10\n"
"16:00", nullptr));
        label_14->setText(QCoreApplication::translate("Widget", "6\n"
"14:00\n"
"14:50", nullptr));
        label_18->setText(QCoreApplication::translate("Widget", "10\n"
"19:30\n"
"20:20", nullptr));
        label_17->setText(QCoreApplication::translate("Widget", "9\n"
"18:40\n"
"19:20", nullptr));
        label_19->setText(QCoreApplication::translate("Widget", "11\n"
"20:30\n"
"21:20", nullptr));
        label_16->setText(QCoreApplication::translate("Widget", "8\n"
"16:10\n"
"17:00", nullptr));
        label_12->setText(QCoreApplication::translate("Widget", "4\n"
"11:10\n"
"12:00", nullptr));
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        add_class_by_hand->setText(QString());
        add_class_from_web->setText(QString());
        MydayLabel->setText(QCoreApplication::translate("Widget", "\346\210\221\347\232\204\344\270\200\345\244\251", nullptr));
        MydayDateLabel->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        addtodo->setText(QString());
        addtodo->setPlaceholderText(QCoreApplication::translate("Widget", "\346\267\273\345\212\240\344\273\273\345\212\241", nullptr));
        TododatesetButton->setText(QString());
        TodotimesetButton->setText(QString());
        TodorepeatButton->setText(QString());
        infolabel->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        repeatinfolabel->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        set_todo_finished->setText(QString());
        set_todo_important->setText(QString());
        reset_todo_time->setText(QCoreApplication::translate("Widget", "  \346\217\220\351\206\222\346\210\221", nullptr));
        reset_todo_date->setText(QCoreApplication::translate("Widget", "  \346\224\271\345\217\230\346\210\252\346\255\242\346\227\245\346\234\237", nullptr));
        reset_todo_repeat->setText(QCoreApplication::translate("Widget", "  \351\207\215\345\244\215", nullptr));
        add_todo_info->setPlaceholderText(QCoreApplication::translate("Widget", "\346\267\273\345\212\240\345\244\207\346\263\250", nullptr));
        close_edit_button->setText(QString());
        delete_todo->setText(QString());
        chagesize->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
