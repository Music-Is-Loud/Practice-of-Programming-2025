/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "linearprogressbar.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *settings_button;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *MydayButton;
    QPushButton *ClassesButton;
    QPushButton *TaskButton;
    QSpacerItem *verticalSpacer;
    QLabel *WeatherLabel;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton_4;
    QLabel *label;
    QWidget *page_classsheet;
    QWidget *maincontextphoto_2;
    QLabel *ClassSheetTiltleLabel;
    QWidget *class_sheet_widget;
    QLabel *nowdate_week;
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
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QFrame *line_9;
    QFrame *line_10;
    QFrame *line_11;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *add_class_by_hand;
    QPushButton *add_class_from_web;
    QPushButton *back_to_home_week;
    QWidget *page_2;
    QWidget *setting_photo;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *gridLayoutWidget;
    QGridLayout *setting_grid_layout;
    QPushButton *pushButton_8;
    QPushButton *pushButton_0;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_11;
    QPushButton *pushButton_10;
    QPushButton *pushButton_13;
    QPushButton *pushButton_12;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_14;
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
    QWidget *tomato_clock_widget;
    QWidget *tomato_clock_background;
    QWidget *widget;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton;
    LinearProgressBar *now_progres_line;
    QWidget *widget_2;
    QLabel *label_20;
    QSpinBox *study_time_set;
    QSpinBox *rest_time_set;
    QLabel *label_21;
    QLabel *label_22;
    QPushButton *tomato_clock_start_button;
    QPushButton *tomato_clock_reset_button;
    QPushButton *small_tomato_clock_button;
    QLabel *label_23;
    QPushButton *tomato_clock_stop_button;
    QLabel *weather_icon;
    QLabel *city_name;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(1035, 622);
        Widget->setStyleSheet(QString::fromUtf8(""));
        settings_button = new QPushButton(Widget);
        settings_button->setObjectName("settings_button");
        settings_button->setGeometry(QRect(50, 550, 132, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Themes/Assets/settings_button.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        settings_button->setIcon(icon);
        settings_button->setFlat(true);
        verticalLayoutWidget = new QWidget(Widget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(30, 153, 301, 378));
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
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Themes/Assets/JumpList/dark/MyDay_dark_256.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MydayButton->setIcon(icon1);
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
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Themes/Assets/JumpList/dark/Planned_dark_256.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ClassesButton->setIcon(icon2);
        ClassesButton->setIconSize(QSize(22, 22));
        ClassesButton->setFlat(true);

        verticalLayout->addWidget(ClassesButton);

        TaskButton = new QPushButton(verticalLayoutWidget);
        TaskButton->setObjectName("TaskButton");
        TaskButton->setEnabled(true);
        TaskButton->setMinimumSize(QSize(0, 40));
        TaskButton->setFont(font1);
        TaskButton->setStyleSheet(QString::fromUtf8("background:transparent;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Themes/Assets/JumpList/dark/Flag_dark_256.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        TaskButton->setIcon(icon3);
        TaskButton->setIconSize(QSize(22, 22));
        TaskButton->setFlat(true);

        verticalLayout->addWidget(TaskButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        WeatherLabel = new QLabel(Widget);
        WeatherLabel->setObjectName("WeatherLabel");
        WeatherLabel->setGeometry(QRect(120, 39, 204, 70));
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
        ClassSheetTiltleLabel->setGeometry(QRect(21, 29, 131, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font4.setPointSize(22);
        font4.setBold(true);
        font4.setStyleStrategy(QFont::PreferAntialias);
        ClassSheetTiltleLabel->setFont(font4);
        ClassSheetTiltleLabel->setTextFormat(Qt::TextFormat::PlainText);
        class_sheet_widget = new QWidget(maincontextphoto_2);
        class_sheet_widget->setObjectName("class_sheet_widget");
        class_sheet_widget->setGeometry(QRect(20, 70, 641, 511));
        class_sheet_widget->setStyleSheet(QString::fromUtf8("background-color: rgba(50, 50, 50, 110);"));
        nowdate_week = new QLabel(class_sheet_widget);
        nowdate_week->setObjectName("nowdate_week");
        nowdate_week->setGeometry(QRect(0, 0, 80, 35));
        nowdate_week->setMinimumSize(QSize(70, 0));
        nowdate_week->setStyleSheet(QString::fromUtf8("background-color: rgba(50, 50, 50, 120);"));
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
        label_9->setMinimumSize(QSize(70, 0));
        QFont font5;
        font5.setPointSize(7);
        label_9->setFont(font5);
        label_9->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        label_11 = new QLabel(class_sheet_widget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(0, 118, 70, 40));
        label_11->setMinimumSize(QSize(70, 0));
        label_11->setFont(font5);
        label_11->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        label_13 = new QLabel(class_sheet_widget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(0, 200, 70, 40));
        label_13->setMinimumSize(QSize(70, 0));
        label_13->setFont(font5);
        label_13->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        label_10 = new QLabel(class_sheet_widget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(0, 77, 70, 40));
        label_10->setMinimumSize(QSize(70, 0));
        label_10->setFont(font5);
        label_10->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        label_15 = new QLabel(class_sheet_widget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(0, 282, 70, 40));
        label_15->setMinimumSize(QSize(70, 0));
        label_15->setFont(font5);
        label_15->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        label_14 = new QLabel(class_sheet_widget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(0, 241, 70, 40));
        label_14->setMinimumSize(QSize(70, 0));
        label_14->setFont(font5);
        label_14->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        label_18 = new QLabel(class_sheet_widget);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(0, 405, 70, 40));
        label_18->setMinimumSize(QSize(70, 0));
        label_18->setFont(font5);
        label_18->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        label_17 = new QLabel(class_sheet_widget);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(0, 364, 70, 40));
        label_17->setMinimumSize(QSize(70, 0));
        label_17->setFont(font5);
        label_17->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        label_19 = new QLabel(class_sheet_widget);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(0, 446, 70, 40));
        label_19->setMinimumSize(QSize(70, 0));
        label_19->setFont(font5);
        label_19->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        label_16 = new QLabel(class_sheet_widget);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(0, 323, 70, 40));
        label_16->setMinimumSize(QSize(70, 0));
        label_16->setFont(font5);
        label_16->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        label_12 = new QLabel(class_sheet_widget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(0, 159, 70, 40));
        label_12->setMinimumSize(QSize(70, 0));
        label_12->setFont(font5);
        label_12->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        line = new QFrame(class_sheet_widget);
        line->setObjectName("line");
        line->setWindowModality(Qt::WindowModality::NonModal);
        line->setGeometry(QRect(0, 76, 641, 1));
        line->setAutoFillBackground(false);
        line->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        line->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line->setFrameShape(QFrame::Shape::HLine);
        line_2 = new QFrame(class_sheet_widget);
        line_2->setObjectName("line_2");
        line_2->setWindowModality(Qt::WindowModality::NonModal);
        line_2->setGeometry(QRect(0, 117, 641, 1));
        line_2->setAutoFillBackground(false);
        line_2->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        line_2->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_3 = new QFrame(class_sheet_widget);
        line_3->setObjectName("line_3");
        line_3->setWindowModality(Qt::WindowModality::NonModal);
        line_3->setGeometry(QRect(0, 158, 641, 1));
        line_3->setAutoFillBackground(false);
        line_3->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        line_3->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_4 = new QFrame(class_sheet_widget);
        line_4->setObjectName("line_4");
        line_4->setWindowModality(Qt::WindowModality::NonModal);
        line_4->setGeometry(QRect(0, 199, 641, 1));
        line_4->setAutoFillBackground(false);
        line_4->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        line_4->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_5 = new QFrame(class_sheet_widget);
        line_5->setObjectName("line_5");
        line_5->setWindowModality(Qt::WindowModality::NonModal);
        line_5->setGeometry(QRect(0, 240, 641, 1));
        line_5->setAutoFillBackground(false);
        line_5->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        line_5->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_6 = new QFrame(class_sheet_widget);
        line_6->setObjectName("line_6");
        line_6->setWindowModality(Qt::WindowModality::NonModal);
        line_6->setGeometry(QRect(0, 281, 641, 1));
        line_6->setAutoFillBackground(false);
        line_6->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        line_6->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);
        line_6->setFrameShape(QFrame::Shape::HLine);
        line_7 = new QFrame(class_sheet_widget);
        line_7->setObjectName("line_7");
        line_7->setWindowModality(Qt::WindowModality::NonModal);
        line_7->setGeometry(QRect(0, 322, 641, 1));
        line_7->setAutoFillBackground(false);
        line_7->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        line_7->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        line_7->setFrameShadow(QFrame::Shadow::Sunken);
        line_7->setFrameShape(QFrame::Shape::HLine);
        line_8 = new QFrame(class_sheet_widget);
        line_8->setObjectName("line_8");
        line_8->setWindowModality(Qt::WindowModality::NonModal);
        line_8->setGeometry(QRect(0, 363, 641, 1));
        line_8->setAutoFillBackground(false);
        line_8->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        line_8->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        line_8->setFrameShadow(QFrame::Shadow::Sunken);
        line_8->setFrameShape(QFrame::Shape::HLine);
        line_9 = new QFrame(class_sheet_widget);
        line_9->setObjectName("line_9");
        line_9->setWindowModality(Qt::WindowModality::NonModal);
        line_9->setGeometry(QRect(0, 404, 641, 1));
        line_9->setAutoFillBackground(false);
        line_9->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        line_9->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        line_9->setFrameShadow(QFrame::Shadow::Sunken);
        line_9->setFrameShape(QFrame::Shape::HLine);
        line_10 = new QFrame(class_sheet_widget);
        line_10->setObjectName("line_10");
        line_10->setWindowModality(Qt::WindowModality::NonModal);
        line_10->setGeometry(QRect(0, 445, 641, 1));
        line_10->setAutoFillBackground(false);
        line_10->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        line_10->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        line_10->setFrameShadow(QFrame::Shadow::Sunken);
        line_10->setFrameShape(QFrame::Shape::HLine);
        line_11 = new QFrame(class_sheet_widget);
        line_11->setObjectName("line_11");
        line_11->setWindowModality(Qt::WindowModality::NonModal);
        line_11->setGeometry(QRect(0, 486, 641, 1));
        line_11->setAutoFillBackground(false);
        line_11->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        line_11->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        line_11->setFrameShadow(QFrame::Shadow::Sunken);
        line_11->setFrameShape(QFrame::Shape::HLine);
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
        add_class_by_hand->setFlat(true);
        add_class_from_web = new QPushButton(maincontextphoto_2);
        add_class_from_web->setObjectName("add_class_from_web");
        add_class_from_web->setGeometry(QRect(615, 35, 33, 30));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Themes/Assets/download.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        add_class_from_web->setIcon(icon8);
        add_class_from_web->setFlat(true);
        back_to_home_week = new QPushButton(maincontextphoto_2);
        back_to_home_week->setObjectName("back_to_home_week");
        back_to_home_week->setGeometry(QRect(93, 29, 39, 33));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Themes/Assets/main_home.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        back_to_home_week->setIcon(icon9);
        back_to_home_week->setFlat(true);
        class_sheet_widget->raise();
        ClassSheetTiltleLabel->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        add_class_by_hand->raise();
        add_class_from_web->raise();
        back_to_home_week->raise();
        stackedWidget->addWidget(page_classsheet);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        setting_photo = new QWidget(page_2);
        setting_photo->setObjectName("setting_photo");
        setting_photo->setGeometry(QRect(0, 0, 1001, 671));
        setting_photo->setStyleSheet(QString::fromUtf8("QWidget#setting_photo\n"
"{\n"
"image: url(:/Themes/Assets/Themes/backgrounds/beach/2560x1600.jpg);\n"
"\n"
"}"));
        label_2 = new QLabel(setting_photo);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(27, 34, 61, 54));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font6.setPointSize(22);
        font6.setBold(true);
        label_2->setFont(font6);
        label_3 = new QLabel(setting_photo);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(27, 88, 65, 21));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font7.setPointSize(10);
        font7.setBold(true);
        label_3->setFont(font7);
        gridLayoutWidget = new QWidget(setting_photo);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(27, 112, 564, 223));
        setting_grid_layout = new QGridLayout(gridLayoutWidget);
        setting_grid_layout->setObjectName("setting_grid_layout");
        setting_grid_layout->setContentsMargins(0, 0, 0, 0);
        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background-color: transparent;\n"
"        border: none;\n"
"        border-radius: 6px;\n"
"        padding: 2px;\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: rgba(255, 255, 255, 20);\n"
"    }\n"
"    QPushButton:checked {\n"
"        border: 2px solid #00CFFF;\n"
"        background-color: rgba(0, 207, 255, 30);\n"
"    }"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Themes/Assets/Themes/backgrounds/fern/thumb.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_8->setIcon(icon10);
        pushButton_8->setIconSize(QSize(128, 128));
        pushButton_8->setCheckable(true);
        pushButton_8->setChecked(false);

        setting_grid_layout->addWidget(pushButton_8, 0, 4, 1, 1);

        pushButton_0 = new QPushButton(gridLayoutWidget);
        pushButton_0->setObjectName("pushButton_0");
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background-color: transparent;\n"
"        border: none;\n"
"        border-radius: 6px;\n"
"        padding: 2px;\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: rgba(255, 255, 255, 20);\n"
"    }\n"
"    QPushButton:checked {\n"
"        border: 2px solid #00CFFF;\n"
"        background-color: rgba(0, 207, 255, 30);\n"
"    }"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Themes/Assets/Themes/backgrounds/gradient/thumb.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_0->setIcon(icon11);
        pushButton_0->setIconSize(QSize(128, 128));
        pushButton_0->setCheckable(true);
        pushButton_0->setChecked(false);

        setting_grid_layout->addWidget(pushButton_0, 0, 5, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background-color: transparent;\n"
"        border: none;\n"
"        border-radius: 6px;\n"
"        padding: 2px;\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: rgba(255, 255, 255, 20);\n"
"    }\n"
"    QPushButton:checked {\n"
"        border: 2px solid #00CFFF;\n"
"        background-color: rgba(0, 207, 255, 30);\n"
"    }"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Themes/Assets/Themes/backgrounds/beach/thumb.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_6->setIcon(icon12);
        pushButton_6->setIconSize(QSize(128, 128));
        pushButton_6->setCheckable(true);
        pushButton_6->setChecked(true);

        setting_grid_layout->addWidget(pushButton_6, 0, 1, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background-color: transparent;\n"
"        border: none;\n"
"        border-radius: 6px;\n"
"        padding: 2px;\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: rgba(255, 255, 255, 20);\n"
"    }\n"
"    QPushButton:checked {\n"
"        border: 2px solid #00CFFF;\n"
"        background-color: rgba(0, 207, 255, 30);\n"
"    }"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/Themes/Assets/Themes/backgrounds/field/thumb.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_5->setIcon(icon13);
        pushButton_5->setIconSize(QSize(128, 128));
        pushButton_5->setCheckable(true);
        pushButton_5->setChecked(false);

        setting_grid_layout->addWidget(pushButton_5, 0, 3, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background-color: transparent;\n"
"        border: none;\n"
"        border-radius: 6px;\n"
"        padding: 2px;\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: rgba(255, 255, 255, 20);\n"
"    }\n"
"    QPushButton:checked {\n"
"        border: 2px solid #00CFFF;\n"
"        background-color: rgba(0, 207, 255, 30);\n"
"    }"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/Themes/Assets/Themes/backgrounds/desert/thumb.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_7->setIcon(icon14);
        pushButton_7->setIconSize(QSize(128, 128));
        pushButton_7->setCheckable(true);
        pushButton_7->setChecked(false);

        setting_grid_layout->addWidget(pushButton_7, 0, 2, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background-color: transparent;\n"
"        border: none;\n"
"        border-radius: 6px;\n"
"        padding: 2px;\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: rgba(255, 255, 255, 20);\n"
"    }\n"
"    QPushButton:checked {\n"
"        border: 2px solid #00CFFF;\n"
"        background-color: rgba(0, 207, 255, 30);\n"
"    }"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/Themes/Assets/Themes/backgrounds/lighthouse/thumb.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_9->setIcon(icon15);
        pushButton_9->setIconSize(QSize(128, 128));
        pushButton_9->setCheckable(true);
        pushButton_9->setChecked(false);

        setting_grid_layout->addWidget(pushButton_9, 1, 1, 1, 1);

        pushButton_11 = new QPushButton(gridLayoutWidget);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background-color: transparent;\n"
"        border: none;\n"
"        border-radius: 6px;\n"
"        padding: 2px;\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: rgba(255, 255, 255, 20);\n"
"    }\n"
"    QPushButton:checked {\n"
"        border: 2px solid #00CFFF;\n"
"        background-color: rgba(0, 207, 255, 30);\n"
"    }"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/Themes/Assets/Themes/backgrounds/safari/thumb.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_11->setIcon(icon16);
        pushButton_11->setIconSize(QSize(128, 128));
        pushButton_11->setCheckable(true);
        pushButton_11->setChecked(false);

        setting_grid_layout->addWidget(pushButton_11, 1, 2, 1, 1);

        pushButton_10 = new QPushButton(gridLayoutWidget);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background-color: transparent;\n"
"        border: none;\n"
"        border-radius: 6px;\n"
"        padding: 2px;\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: rgba(255, 255, 255, 20);\n"
"    }\n"
"    QPushButton:checked {\n"
"        border: 2px solid #00CFFF;\n"
"        background-color: rgba(0, 207, 255, 30);\n"
"    }"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/Themes/Assets/Themes/backgrounds/sea/thumb.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_10->setIcon(icon17);
        pushButton_10->setIconSize(QSize(128, 128));
        pushButton_10->setCheckable(true);
        pushButton_10->setChecked(false);

        setting_grid_layout->addWidget(pushButton_10, 1, 3, 1, 1);

        pushButton_13 = new QPushButton(gridLayoutWidget);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background-color: transparent;\n"
"        border: none;\n"
"        border-radius: 6px;\n"
"        padding: 2px;\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: rgba(255, 255, 255, 20);\n"
"    }\n"
"    QPushButton:checked {\n"
"        border: 2px solid #00CFFF;\n"
"        background-color: rgba(0, 207, 255, 30);\n"
"    }"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/Themes/Assets/Themes/backgrounds/tv_tower/thumb.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_13->setIcon(icon18);
        pushButton_13->setIconSize(QSize(128, 128));
        pushButton_13->setCheckable(true);
        pushButton_13->setChecked(false);

        setting_grid_layout->addWidget(pushButton_13, 1, 4, 1, 1);

        pushButton_12 = new QPushButton(gridLayoutWidget);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background-color: transparent;\n"
"        border: none;\n"
"        border-radius: 6px;\n"
"        padding: 2px;\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: rgba(255, 255, 255, 20);\n"
"    }\n"
"    QPushButton:checked {\n"
"        border: 2px solid #00CFFF;\n"
"        background-color: rgba(0, 207, 255, 30);\n"
"    }"));
        pushButton_12->setIcon(icon12);
        pushButton_12->setIconSize(QSize(128, 128));
        pushButton_12->setCheckable(true);
        pushButton_12->setChecked(false);

        setting_grid_layout->addWidget(pushButton_12, 1, 5, 1, 1);

        label_4 = new QLabel(setting_photo);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(28, 363, 85, 21));
        label_4->setFont(font7);
        dateEdit = new QDateEdit(setting_photo);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(128, 364, 129, 24));
        dateEdit->setInputMethodHints(Qt::InputMethodHint::ImhPreferNumbers);
        dateEdit->setReadOnly(false);
        dateEdit->setKeyboardTracking(false);
        dateEdit->setProperty("showGroupSeparator", QVariant(true));
        dateEdit->setCalendarPopup(true);
        dateEdit->setDate(QDate(2025, 2, 17));
        label_5 = new QLabel(setting_photo);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(28, 388, 244, 22));
        label_6 = new QLabel(setting_photo);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(28, 415, 85, 21));
        label_6->setFont(font7);
        lineEdit_2 = new QLineEdit(setting_photo);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(127, 414, 131, 26));
        lineEdit_2->setClearButtonEnabled(false);
        pushButton_14 = new QPushButton(setting_photo);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(32, 488, 101, 23));
        pushButton_14->setFlat(true);
        stackedWidget->addWidget(page_2);
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
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/Themes/Assets/canlendar.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        TododatesetButton->setIcon(icon19);
        TododatesetButton->setIconSize(QSize(15, 15));
        TododatesetButton->setPopupMode(QToolButton::ToolButtonPopupMode::InstantPopup);
        TododatesetButton->setAutoRaise(true);
        TodotimesetButton = new QToolButton(maincontextphoto);
        TodotimesetButton->setObjectName("TodotimesetButton");
        TodotimesetButton->setGeometry(QRect(572, 540, 31, 42));
        TodotimesetButton->setStyleSheet(QString::fromUtf8("background:transparent;"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/Themes/Assets/alarm.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        TodotimesetButton->setIcon(icon20);
        TodotimesetButton->setPopupMode(QToolButton::ToolButtonPopupMode::InstantPopup);
        TodorepeatButton = new QToolButton(maincontextphoto);
        TodorepeatButton->setObjectName("TodorepeatButton");
        TodorepeatButton->setGeometry(QRect(600, 540, 30, 42));
        TodorepeatButton->setStyleSheet(QString::fromUtf8("background:transparent;\n"
""));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/Themes/Assets/repeat.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        TodorepeatButton->setIcon(icon21);
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
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/Themes/Assets/JumpList/dark/Imp_dark_256.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        set_todo_important->setIcon(icon22);
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
        reset_todo_time->setIcon(icon20);
        reset_todo_time->setFlat(true);

        verticalLayout_2->addWidget(reset_todo_time);

        reset_todo_date = new QPushButton(verticalLayoutWidget_2);
        reset_todo_date->setObjectName("reset_todo_date");
        reset_todo_date->setMinimumSize(QSize(0, 40));
        reset_todo_date->setBaseSize(QSize(0, 0));
        reset_todo_date->setStyleSheet(QString::fromUtf8("background-color: rgba(50, 50, 50, 255);\n"
"text-align: left;\n"
"padding: 10px;"));
        reset_todo_date->setIcon(icon19);
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
        reset_todo_repeat->setIcon(icon21);
        reset_todo_repeat->setFlat(true);

        verticalLayout_2->addWidget(reset_todo_repeat);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        add_todo_info = new QTextEdit(edit_widget);
        add_todo_info->setObjectName("add_todo_info");
        add_todo_info->setGeometry(QRect(27, 255, 252, 199));
        QFont font8;
        font8.setPointSize(10);
        add_todo_info->setFont(font8);
        add_todo_info->setStyleSheet(QString::fromUtf8("background-color: rgba(50, 50, 50, 255);"));
        close_edit_button = new QPushButton(edit_widget);
        close_edit_button->setObjectName("close_edit_button");
        close_edit_button->setGeometry(QRect(270, 0, 30, 30));
        close_edit_button->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        QIcon icon23(QIcon::fromTheme(QIcon::ThemeIcon::EditClear));
        close_edit_button->setIcon(icon23);
        close_edit_button->setFlat(true);
        delete_todo = new QPushButton(edit_widget);
        delete_todo->setObjectName("delete_todo");
        delete_todo->setGeometry(QRect(260, 539, 38, 37));
        delete_todo->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/Themes/Assets/delete.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        delete_todo->setIcon(icon24);
        delete_todo->setFlat(true);
        chagesize = new QPushButton(maincontextphoto);
        chagesize->setObjectName("chagesize");
        chagesize->setGeometry(QRect(610, 42, 31, 31));
        chagesize->setStyleSheet(QString::fromUtf8("background-color: rgba(50, 50, 50, 255);\n"
"\n"
""));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/Themes/Assets/smallwindow.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        chagesize->setIcon(icon25);
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
        tomato_clock_widget = new QWidget();
        tomato_clock_widget->setObjectName("tomato_clock_widget");
        tomato_clock_background = new QWidget(tomato_clock_widget);
        tomato_clock_background->setObjectName("tomato_clock_background");
        tomato_clock_background->setGeometry(QRect(0, 0, 1001, 671));
        tomato_clock_background->setStyleSheet(QString::fromUtf8("QWidget#tomato_clock_background\n"
"{\n"
"image: url(:/Themes/Assets/Themes/backgrounds/beach/2560x1600.jpg);\n"
"\n"
"}"));
        widget = new QWidget(tomato_clock_background);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(139, 31, 430, 576));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgba(62, 62, 62,230);\n"
"border: 2px solid #555;\n"
" border-radius: 10px;"));
        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(147, 16, 141, 33));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font9.setPointSize(20);
        font9.setBold(true);
        label_7->setFont(font9);
        label_7->setStyleSheet(QString::fromUtf8("border: none;\n"
"background-color: transparent;\n"
""));
        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(170, 54, 105, 27));
        QFont font10;
        font10.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font10.setPointSize(11);
        label_8->setFont(font10);
        label_8->setStyleSheet(QString::fromUtf8("border: none;\n"
"background-color: transparent;\n"
"color: rgb(115, 115, 115);"));
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(false);
        pushButton->setGeometry(QRect(27, 85, 376, 56));
        QFont font11;
        font11.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font11.setPointSize(13);
        font11.setBold(true);
        pushButton->setFont(font11);
        pushButton->setStyleSheet(QString::fromUtf8("border: none;\n"
"background-color: rgba(79, 2, 20,50);\n"
"color: rgb(227, 79, 99);\n"
"\n"
""));
        pushButton->setFlat(true);
        now_progres_line = new LinearProgressBar(widget);
        now_progres_line->setObjectName("now_progres_line");
        now_progres_line->setGeometry(QRect(27, 155, 376, 12));
        now_progres_line->setStyleSheet(QString::fromUtf8(" border-radius: 10px;"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(27, 179, 376, 145));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: 2px dashed #555;\n"
" border-radius: 10px;"));
        label_20 = new QLabel(widget_2);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(89, 39, 206, 63));
        QFont font12;
        font12.setPointSize(40);
        font12.setBold(true);
        label_20->setFont(font12);
        label_20->setStyleSheet(QString::fromUtf8("\n"
"border: none;\n"
" border-radius: 10px;"));
        label_20->setAlignment(Qt::AlignmentFlag::AlignCenter);
        study_time_set = new QSpinBox(widget);
        study_time_set->setObjectName("study_time_set");
        study_time_set->setGeometry(QRect(107, 345, 100, 43));
        study_time_set->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        study_time_set->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"        border: 2px solid rgb(79, 79, 79);\n"
"        border-radius: 6px;\n"
"        padding: 2px 8px;\n"
"\n"
"        color: white;\n"
"        font-size: 14px;\n"
"    }\n"
"\n"
"    QSpinBox::up-button, QSpinBox::down-button {\n"
"        width: 16px;\n"
"        height: 12px;\n"
"        border: none;\n"
"        background-color: transparent;\n"
"    }\n"
"\n"
"    QSpinBox::up-button {\n"
"        subcontrol-origin: border;\n"
"        subcontrol-position: top right;\n"
"      \n"
"        margin: 3px;\n"
"    }\n"
"\n"
"    QSpinBox::down-button {\n"
"        subcontrol-origin: border;\n"
"        subcontrol-position: bottom right;\n"
"        margin: 3px;\n"
"    }\n"
"\n"
"    QSpinBox::up-button:hover, QSpinBox::down-button:hover {\n"
"        background-color: rgb(117, 117, 117);\n"
"    }\n"
"\n"
"    QSpinBox::up-button:pressed, QSpinBox::down-button:pressed {\n"
"        background-color:rgb(72, 72, 72);\n"
"    }\n"
"\n"
"    QSpinBox::disabled {\n"
"        background-color: #"
                        "eee;\n"
"        color: #999;\n"
"    }"));
        study_time_set->setMinimum(1);
        study_time_set->setSingleStep(1);
        study_time_set->setStepType(QAbstractSpinBox::StepType::DefaultStepType);
        study_time_set->setValue(25);
        rest_time_set = new QSpinBox(widget);
        rest_time_set->setObjectName("rest_time_set");
        rest_time_set->setGeometry(QRect(224, 345, 100, 43));
        rest_time_set->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        rest_time_set->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"        border: 2px solid rgb(79, 79, 79);\n"
"        border-radius: 6px;\n"
"        padding: 2px 8px;\n"
"\n"
"        color: white;\n"
"        font-size: 14px;\n"
"    }\n"
"\n"
"    QSpinBox::up-button, QSpinBox::down-button {\n"
"        width: 16px;\n"
"        height: 12px;\n"
"        border: none;\n"
"        background-color: transparent;\n"
"    }\n"
"\n"
"    QSpinBox::up-button {\n"
"        subcontrol-origin: border;\n"
"        subcontrol-position: top right;\n"
"      \n"
"        margin: 3px;\n"
"    }\n"
"\n"
"    QSpinBox::down-button {\n"
"        subcontrol-origin: border;\n"
"        subcontrol-position: bottom right;\n"
"        margin: 3px;\n"
"    }\n"
"\n"
"    QSpinBox::up-button:hover, QSpinBox::down-button:hover {\n"
"        background-color: rgb(117, 117, 117);\n"
"    }\n"
"\n"
"    QSpinBox::up-button:pressed, QSpinBox::down-button:pressed {\n"
"        background-color:rgb(72, 72, 72);\n"
"    }\n"
"\n"
"    QSpinBox::disabled {\n"
"        background-color: #"
                        "eee;\n"
"        color: #999;\n"
"    }"));
        rest_time_set->setMinimum(1);
        rest_time_set->setSingleStep(1);
        rest_time_set->setStepType(QAbstractSpinBox::StepType::DefaultStepType);
        rest_time_set->setValue(5);
        label_21 = new QLabel(widget);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(111, 375, 101, 50));
        label_21->setStyleSheet(QString::fromUtf8("border: none;\n"
"background-color: transparent;\n"
""));
        label_22 = new QLabel(widget);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(230, 375, 100, 50));
        label_22->setStyleSheet(QString::fromUtf8("border: none;\n"
"background-color: transparent;\n"
""));
        tomato_clock_start_button = new QPushButton(widget);
        tomato_clock_start_button->setObjectName("tomato_clock_start_button");
        tomato_clock_start_button->setGeometry(QRect(175, 422, 80, 50));
        QFont font13;
        font13.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font13.setPointSize(13);
        tomato_clock_start_button->setFont(font13);
        tomato_clock_start_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 70, 8,50);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 90, 28,50);  /* \346\202\254\345\201\234\346\227\266\346\233\264\344\272\256\344\272\233 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(200, 50, 0,50);   /* \346\214\211\344\270\213\346\233\264\346\232\227\357\274\214\347\252\201\345\207\272\345\217\215\351\246\210 */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: rgb(180, 180, 180);\n"
"    color: rgb(120, 120, 120);\n"
"}\n"
""));
        tomato_clock_reset_button = new QPushButton(widget);
        tomato_clock_reset_button->setObjectName("tomato_clock_reset_button");
        tomato_clock_reset_button->setGeometry(QRect(145, 422, 120, 50));
        tomato_clock_reset_button->setFont(font13);
        tomato_clock_reset_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(163, 38, 27,50);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(183, 48, 37,50);  /* \347\250\215\344\272\256\344\270\200\347\202\271 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(133, 28, 17,50);  /* \347\250\215\346\232\227\344\270\200\347\202\271\357\274\214\350\241\250\347\244\272\346\214\211\344\270\213 */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: rgb(120, 120, 120);\n"
"    color: rgb(200, 200, 200);\n"
"}"));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/Themes/Assets/reset.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        tomato_clock_reset_button->setIcon(icon26);
        small_tomato_clock_button = new QPushButton(widget);
        small_tomato_clock_button->setObjectName("small_tomato_clock_button");
        small_tomato_clock_button->setGeometry(QRect(285, 422, 105, 50));
        small_tomato_clock_button->setFont(font13);
        small_tomato_clock_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(126, 8, 120,50);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    padding: 6px 14px;\n"
"\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(146, 28, 140,50);  /* \347\250\215\344\272\256\357\274\232\346\202\254\345\201\234 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(96, 0, 90,50);     /* \346\233\264\346\232\227\357\274\232\346\214\211\344\270\213 */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: rgb(90, 90, 90);\n"
"    color: rgb(180, 180, 180);\n"
"}\n"
""));
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/Themes/Assets/goto_small.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        small_tomato_clock_button->setIcon(icon27);
        label_23 = new QLabel(widget);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(55, 490, 325, 43));
        QFont font14;
        font14.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font14.setPointSize(9);
        label_23->setFont(font14);
        label_23->setStyleSheet(QString::fromUtf8("border: none;\n"
"background-color: transparent;\n"
""));
        label_23->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tomato_clock_stop_button = new QPushButton(widget);
        tomato_clock_stop_button->setObjectName("tomato_clock_stop_button");
        tomato_clock_stop_button->setGeometry(QRect(45, 422, 80, 50));
        tomato_clock_stop_button->setFont(font13);
        tomato_clock_stop_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 130, 8,50);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 130, 28,50);  /* \346\202\254\345\201\234\346\227\266\346\233\264\344\272\256\344\272\233 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(200, 50, 0,50);   /* \346\214\211\344\270\213\346\233\264\346\232\227\357\274\214\347\252\201\345\207\272\345\217\215\351\246\210 */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: rgb(180, 180, 180);\n"
"    color: rgb(120, 120, 120);\n"
"}\n"
""));
        stackedWidget->addWidget(tomato_clock_widget);
        weather_icon = new QLabel(Widget);
        weather_icon->setObjectName("weather_icon");
        weather_icon->setGeometry(QRect(35, 35, 72, 70));
        QFont font15;
        font15.setPointSize(50);
        weather_icon->setFont(font15);
        weather_icon->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        weather_icon->setAlignment(Qt::AlignmentFlag::AlignCenter);
        city_name = new QLabel(Widget);
        city_name->setObjectName("city_name");
        city_name->setGeometry(QRect(35, 120, 66, 24));
        QFont font16;
        font16.setPointSize(15);
        city_name->setFont(font16);
        city_name->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        settings_button->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256", nullptr));
        MydayButton->setText(QCoreApplication::translate("Widget", " \346\210\221\347\232\204\344\270\200\345\244\251", nullptr));
        ClassesButton->setText(QCoreApplication::translate("Widget", " \350\257\276\350\241\250", nullptr));
        TaskButton->setText(QCoreApplication::translate("Widget", " \347\225\252\350\214\204\345\244\247\345\270\210", nullptr));
        WeatherLabel->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        pushButton_4->setText(QString());
        label->setText(QCoreApplication::translate("Widget", "Start Your Day from Now!", nullptr));
        ClassSheetTiltleLabel->setText(QCoreApplication::translate("Widget", "\350\257\276\350\241\250", nullptr));
        nowdate_week->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
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
        back_to_home_week->setText(QString());
        label_2->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\350\203\214\346\231\257\345\233\276\347\211\207", nullptr));
        pushButton_8->setText(QString());
        pushButton_0->setText(QString());
        pushButton_6->setText(QString());
        pushButton_5->setText(QString());
        pushButton_7->setText(QString());
        pushButton_9->setText(QString());
        pushButton_11->setText(QString());
        pushButton_10->setText(QString());
        pushButton_13->setText(QString());
        pushButton_12->setText(QString());
        label_4->setText(QCoreApplication::translate("Widget", "\345\255\246\346\234\237\345\274\200\345\247\213\345\221\250\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\344\275\240\345\217\252\351\234\200\350\246\201\350\276\223\345\205\245\344\275\240\345\255\246\346\234\237\345\274\200\345\247\213\345\221\250\347\232\204\344\273\273\346\204\217\344\270\200\345\244\251\345\215\263\345\217\257", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "\346\211\200\345\234\250\345\234\260\345\214\272\357\274\232", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("Widget", "\345\214\227\344\272\254", nullptr));
        lineEdit_2->setPlaceholderText(QString());
        pushButton_14->setText(QCoreApplication::translate("Widget", "\346\270\205\347\220\206\346\234\254\345\234\260\347\274\223\345\255\230", nullptr));
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
        label_7->setText(QCoreApplication::translate("Widget", "\347\225\252\350\214\204\345\267\245\344\275\234\346\263\225", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "\347\254\25412\344\270\252\347\225\252\350\214\204\351\222\237", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\345\267\245\344\275\234\346\227\266\351\227\264", nullptr));
        label_20->setText(QCoreApplication::translate("Widget", "00:00", nullptr));
        label_21->setText(QCoreApplication::translate("Widget", "\345\267\245\344\275\234\346\227\266\351\227\264\357\274\210\345\210\206\351\222\237\357\274\211", nullptr));
        label_22->setText(QCoreApplication::translate("Widget", "\344\274\221\346\201\257\346\227\266\351\227\264\357\274\210\345\210\206\351\222\237\357\274\211", nullptr));
        tomato_clock_start_button->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213", nullptr));
        tomato_clock_reset_button->setText(QCoreApplication::translate("Widget", "\351\207\215\347\275\256", nullptr));
        small_tomato_clock_button->setText(QCoreApplication::translate("Widget", "\345\260\217\347\252\227\345\217\243", nullptr));
        label_23->setText(QCoreApplication::translate("Widget", "\350\207\252\345\212\250\345\276\252\347\216\257\357\274\232\345\267\245\344\275\234\346\227\266\351\227\264\347\273\223\346\235\237\345\220\216\344\274\232\350\207\252\345\212\250\350\277\233\345\205\245\344\274\221\346\201\257\346\227\266\351\227\264\357\274\214\n"
"\344\274\221\346\201\257\346\227\266\351\227\264\347\273\223\346\235\237\345\220\216\350\207\252\345\212\250\350\277\233\345\205\245\344\270\213\344\270\200\344\270\252\345\267\245\344\275\234\345\221\250\346\234\237", nullptr));
        tomato_clock_stop_button->setText(QCoreApplication::translate("Widget", "\346\232\202\345\201\234", nullptr));
        weather_icon->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        city_name->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
