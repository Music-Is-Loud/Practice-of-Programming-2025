#include "widget.h"
#include "ui_widget.h"
#include <QGraphicsColorizeEffect>
#include <qmetaobject.h>
#include <QDateTime>
#include <QDebug>
#include <QMessageBox>
#include <QStatusBar>
#include <QApplication>
#include <QPropertyAnimation>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkRequest>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonValue>
#include<QDate>
#include <QJsonObject>
#include "datecalendar.h"
#include "custombutton.h"
#include"smallwidget.h"
#include"smallcustombutton.h"
#include"filehandler.h"

QString circletype_name[4] = {QString("天"), QString("周"), QString("月"), QString("年")};




void Widget::draw_todo_buttons_from_vector()
{
    // 获取或创建内容控件
    QWidget* contentWidget = ui->TodoList->widget();
    if (!contentWidget) {
        contentWidget = new QWidget(ui->TodoList);
        ui->TodoList->setWidget(contentWidget);
    }

    // 安全清理旧布局
    if (QLayout* oldLayout = contentWidget->layout()) {
        QLayoutItem* item;
        while ((item = oldLayout->takeAt(0))) {
            if (QWidget* widget = item->widget()) {
                widget->hide();
                widget->setParent(nullptr);
            }
            delete item;
        }
        delete oldLayout;
    }

    // 使用垂直布局替代网格布局
    QVBoxLayout* layout = new QVBoxLayout(contentWidget);
    layout->setContentsMargins(2, 2, 2, 2);
    layout->setAlignment(Qt::AlignTop);  // 关键设置：顶部对齐

    // 添加按钮
    for (auto btn : *created_large_buttons) {
        if (btn && !btn->parent() &&!btn->isfinished) {
            btn->setParent(contentWidget);
            btn->show();
            layout->addWidget(btn);
        }
    }

    for(auto btn : *created_large_buttons)
    {
        if (btn && !btn->parent() &&btn->isfinished) {
            btn->setParent(contentWidget);
            btn->show();
            layout->addWidget(btn);
        }
    }

    // 在最后添加拉伸项（保持按钮在顶部）
    layout->addStretch();

    // 调整尺寸
    contentWidget->adjustSize();
    ui->TodoList->updateGeometry();
}

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    QDate ttoday = QDate::currentDate();
    QDate ttomorrow = ttoday.addDays(1);

    QDateTime nowtime = QDateTime::currentDateTime();
    QDateTime tomorrowtime = nowtime.addDays(1);


    ui->setupUi(this);

    //loadTodosFromFile();


    ui->searchButton->setText(" ");
    ui->maincontextphoto->setWindowOpacity(0.5);
    QGraphicsColorizeEffect *colorizeEffect = new QGraphicsColorizeEffect;
    colorizeEffect->setColor(Qt::black);
    colorizeEffect->setStrength(0.2);
    ui->maincontextphoto->setGraphicsEffect(colorizeEffect);
    ui->MydayButton->setStyleSheet("QPushButton{text-align : left;}");
    ui->ClassesButton->setStyleSheet("QPushButton{text-align : left;}");
    ui->TaskButton->setStyleSheet("QPushButton{text-align : left;}");
    this->setFixedSize(QSize(1033,614));
    ui->TodoList->setStyleSheet("background-color:transparent");
    ui->TododatesetButton->setVisible(false);
    ui->TodotimesetButton->setVisible(false);
    ui->TodorepeatButton->setVisible(false);
    ui->infolabel->setVisible(false);
    ui->repeatinfolabel->setVisible(false);
    ui->edit_widget->setVisible(false);
    ui->addtodo->setTextMargins(10, 0, 90, 0);

    //从vector中找到todo并绘制
    draw_todo_buttons_from_vector();



    connect(ui->MydayButton, &QPushButton::clicked, this, [this]()
    {
        ui->stackedWidget->setCurrentIndex(2);
    });
    ui->maincontextphoto_2->setWindowOpacity(0.5);
    ui->maincontextphoto_2->setGraphicsEffect(colorizeEffect);
    connect(ui->ClassesButton, &QPushButton::clicked, this, [this]()
    {
                ui->stackedWidget->setCurrentIndex(1);
    });
    connect(ui->addtodo, &QLineEdit::textChanged, this, &Widget::updateButtonVisibility);

    QMenu * todo_date_menu = new QMenu(ui->TododatesetButton);

    QAction * today = todo_date_menu->addAction("今天         " + ttoday.toString("MM-dd"));
    QAction * tomorrow = todo_date_menu->addAction("明天         " + ttomorrow.toString("MM-dd"));
    QAction * choose_date = todo_date_menu->addAction("选择日期");
    ui->TododatesetButton->setMenu(todo_date_menu);
    connect(today, &QAction::triggered, this, &Widget::onTodayActionTriggered);
    connect(tomorrow, &QAction::triggered, this, &Widget::onTomorrowActionTriggered);
    connect(choose_date, &QAction::triggered, this, &Widget::onChooseDateActionTriggered);

    ui->TododatesetButton->setPopupMode(QToolButton::InstantPopup);

    todo_date_menu->setStyleSheet(
        "QMenu {"
        "background-color: rgba(20,20,20,200);"  // 菜单背景色
        "border: 0px solid #c0c0c0;"  // 菜单边框
        "margin: 0px;"                // 菜单边距
        "border-radius: 5px;"       // 圆角半径
        "padding: 0px;"               // 菜单内边距
        "}"
        "QMenu::item {"
        "padding: 5px 25px 5px 25px;"  // 菜单项内边距
        "color: white;"               // 菜单项文字颜色
        "min-width: 150px;"          // 菜单项最小宽度
        "max-width: 200px;"          // 菜单项最大宽度
        "min-height: 40px;"
        "max-height: 40px;"
        "}"
        "QMenu::item:selected {"
        "background-color: rgba(80,80,80,255);;"  // 菜单项选中时的背景色
        "}"
        );

    QMenu * todo_time_menu = new QMenu(ui->TodotimesetButton);
    nowtime = nowtime.addSecs(7200);

    QAction *latter_today = todo_time_menu->addAction("今日晚些时候                 " + nowtime.toString("hh:00"));
    QAction *tomorrow_time = todo_time_menu->addAction("明天                             " + tomorrowtime.toString("hh:00"));
    QAction *choose_date_time = todo_time_menu->addAction("选择日期和时间");
    ui->TodotimesetButton->setMenu(todo_time_menu);
    connect(latter_today, &QAction::triggered, this, &Widget::onTodaytimeActionTriggered);
    connect(tomorrow_time, &QAction::triggered, this, &Widget::onTomorrowtimeActionTriggered);
    connect(choose_date_time, &QAction::triggered, this, &Widget::onChooseDatetimeActionTriggered);
    todo_time_menu->setStyleSheet( "QMenu {"
                                  "background-color: rgba(20,20,20,200);"  // 菜单背景色
                                  "border: 0px solid #c0c0c0;"  // 菜单边框
                                  "margin: 0px;"                // 菜单边距
                                  "border-radius: 5px;"       // 圆角半径
                                  "padding: 0px;"               // 菜单内边距
                                  "}"
                                  "QMenu::item {"
                                  "padding: 5px 25px 5px 25px;"  // 菜单项内边距
                                  "color: white;"               // 菜单项文字颜色
                                  "min-width: 150px;"          // 菜单项最小宽度
                                  "max-width: 200px;"          // 菜单项最大宽度
                                  "min-height: 40px;"
                                  "max-height: 40px;"
                                  "}"
                                  "QMenu::item:selected {"
                                  "background-color: rgba(80,80,80,255);;"  // 菜单项选中时的背景色
                                  "}");

    QMenu * todo_repeat_menu = new QMenu(ui->TodorepeatButton);
    QAction *every_day = todo_repeat_menu->addAction("每天");
    QAction *every_week = todo_repeat_menu->addAction("每周");
    QAction *set_by_user = todo_repeat_menu->addAction("自定义");
    ui->TodorepeatButton->setMenu(todo_repeat_menu);
    connect(every_day, &QAction::triggered, this, &Widget::onEverydayActionTriggered);
    connect(every_week, &QAction::triggered, this, &Widget::onEveryweekActionTriggered);
    connect(set_by_user, &QAction::triggered, this, &Widget::onSelfdefineActionTriggered);
    todo_repeat_menu->setStyleSheet(        "QMenu {"
                                    "background-color: rgba(20,20,20,200);"  // 菜单背景色
                                    "border: 0px solid #c0c0c0;"  // 菜单边框
                                    "margin: 0px;"                // 菜单边距
                                    "border-radius: 5px;"       // 圆角半径
                                    "padding: 0px;"               // 菜单内边距
                                    "}"
                                    "QMenu::item {"
                                    "padding: 5px 25px 5px 25px;"  // 菜单项内边距
                                    "color: white;"               // 菜单项文字颜色
                                    "min-width: 150px;"          // 菜单项最小宽度
                                    "max-width: 200px;"          // 菜单项最大宽度
                                    "min-height: 40px;"
                                    "max-height: 40px;"
                                    "}"
                                    "QMenu::item:selected {"
                                    "background-color: rgba(80,80,80,255);;"  // 菜单项选中时的背景色
                                    "}");

};


void Widget::loadTodosFromFile() {
    QJsonArray todosArray = FileHandler::loadFromFile(DATA_PATH);
    foreach (const QJsonValue &value, todosArray) {
        QJsonObject obj = value.toObject();

        // 创建大按钮
        CustomButton* pBtn = new CustomButton(
            obj["title"].toString(),
            obj["id"].toString()
            );
        pBtn->is_have_info = obj["has_info"].toBool();
        pBtn->info = obj["info"].toString();
        pBtn->isfinished = obj["is_finished"].toBool();
        pBtn->is_have_deadline = obj["has_deadline"].toBool();
        pBtn->deadline = QDate::fromString(obj["deadline"].toString(), Qt::ISODate);
        pBtn->is_have_deadtime = obj["has_deadtime"].toBool();
        pBtn->deadtime = QTime::fromString(obj["deadtime"].toString(), Qt::ISODate);
        pBtn->is_have_cycle = obj["has_cycle"].toBool();
        pBtn->cycleline = obj["cycle_info"].toString();
        pBtn->pair.first = obj["unitnum"].toInt();
        pBtn->pair.second = obj["unittype"].toInt();

        pBtn->redraw();
        connect(pBtn, &CustomButton::editButtonClicked, this, &Widget::open_edit_menu);
        connect(pBtn, &CustomButton::mainButtonClicked, this, &Widget::mark_finished);
        connect(pBtn, &CustomButton::deleteButttonClicked, this, &Widget::mark_deleted);
        created_large_buttons->push_back(pBtn);

        // 创建小按钮
        SmallCustomButton* spBtn = new SmallCustomButton(
            obj["title"].toString(),
            obj["id"].toString()
            );
        spBtn->is_have_info = obj["has_info"].toBool();
        spBtn->info = obj["info"].toString();
        spBtn->isfinished = obj["is_finished"].toBool();
        spBtn->is_have_deadline = obj["has_deadline"].toBool();
        spBtn->deadline = QDate::fromString(obj["deadline"].toString(), Qt::ISODate);
        spBtn->is_have_deadtime = obj["has_deadtime"].toBool();
        spBtn->deadtime = QTime::fromString(obj["deadtime"].toString(), Qt::ISODate);
        spBtn->is_have_cycle = obj["has_cycle"].toBool();
        spBtn->cycleline = obj["cycle_info"].toString();
        spBtn->pair.first = obj["unitnum"].toInt();
        spBtn->pair.second = obj["unittype"].toInt();

        spBtn->redraw();
        connect(spBtn, &SmallCustomButton::editButtonClicked, this->po, &smallwidget::open_edit_menu);
        connect(spBtn, &SmallCustomButton::mainButtonClicked, this->po, &smallwidget::mark_finished);
        connect(spBtn, &SmallCustomButton::deleteButttonClicked, this->po, &smallwidget::mark_deleted);
        created_small_buttons->push_back(spBtn);

        draw_todo_buttons_from_vector();
    }

}

void Widget::saveTodosToFile() {
    QJsonArray todosArray;

    foreach (const CustomButton* btn, *created_large_buttons)
    {
        QJsonObject obj;
        obj["id"] = btn->id;
        obj["title"] = btn->title;
        obj["info"] = btn->info;
        obj["is_finished"] = btn->isfinished;
        obj["has_deadline"] = btn->is_have_deadline;
        obj["deadline"] = btn->deadline.toString(Qt::ISODate);
        obj["has_deadtime"] = btn->is_have_deadtime;
        obj["deadtime"] = btn->deadtime.toString(Qt::ISODate);
        obj["has_cycle"] = btn->is_have_cycle;
        obj["cycle_info"] = btn->cycleline;
        obj["has_info"] = btn->is_have_info;
        obj["unitnum"] = btn->pair.first;
        obj["unittype"] = btn->pair.second;
        todosArray.append(obj);
    }
    if (!FileHandler::saveToFile(DATA_PATH, todosArray)) {
        QMessageBox::warning(this, "错误", "无法保存数据到文件");
    }
}


void Widget::onTodayActionTriggered()
{
    is_todo_date_changed = true;
    todo_set_date = QDate::currentDate();
    ui->infolabel->setVisible(true);
    ui->TododatesetButton->setVisible(false);
    ui->TodotimesetButton->setVisible(false);
    line = todo_set_date.toString("yyyy-MM-dd");
    ui->infolabel->setText(line);
        ui->addtodo->setTextMargins(10, 0 ,200, 0);
}

void Widget::onTomorrowActionTriggered()
{
    is_todo_date_changed = true;
    todo_set_date = QDate::currentDate();
    todo_set_date = todo_set_date.addDays(1);
    ui->infolabel->setVisible(true);
    ui->TododatesetButton->setVisible(false);
    ui->TodotimesetButton->setVisible(false);
    line = todo_set_date.toString("yyyy-MM-dd");
    ui->infolabel->setText(line);
        ui->addtodo->setTextMargins(10, 0 ,200, 0);
}

void Widget::onChooseDateActionTriggered()
{

    w.show();
    w.isvi = false;
    QDate s = QDate::currentDate();
    w.draw_calendar(s);
    connect(&w, &datecalendar::data_saved, [this](QDate &selected_date)
    {
        todo_set_date = selected_date;
        qDebug()<< selected_date.toString("yyyy-MM-dd");
        is_todo_date_changed = true;
        ui->infolabel->setVisible(true);
        ui->TododatesetButton->setVisible(false);
        ui->TodotimesetButton->setVisible(false);
        line = todo_set_date.toString("yyyy-MM-dd");
        ui->infolabel->setText(line);
            ui->addtodo->setTextMargins(10, 0 ,200, 0);
    });
}
void Widget::onTodaytimeActionTriggered()
{
    is_todo_time_changed = true;
    todo_set_time = QTime::currentTime();
    todo_set_time =  todo_set_time.addSecs(7200);
    todo_set_time = QTime(todo_set_time.hour(), 0, 0, 0);
    ui->TododatesetButton->setVisible(false);
    ui->TodotimesetButton->setVisible(false);
    ui->infolabel->setVisible(true);
    line = todo_set_date.toString("yyyy-MM-dd") + QString("\n");
    line += todo_set_time.toString("hh:00");
    ui->infolabel->setText(line);
    ui->addtodo->setTextMargins(10, 0 ,200, 0);
}

void Widget::onTomorrowtimeActionTriggered()
{
    is_todo_time_changed = true;
    is_todo_date_changed = true;
    todo_set_time = QTime::currentTime();
    todo_set_time = QTime(todo_set_time.hour(), 0, 0, 0);
    todo_set_date = todo_set_date.addDays(1);
    ui->TodotimesetButton->setVisible(false);
    ui->TododatesetButton->setVisible(false);
    ui->infolabel->setVisible(true);
    line = todo_set_date.toString("yyyy-MM-dd") + QString("\n");
    line += todo_set_time.toString("hh:00");
    ui->infolabel->setText(line);
    ui->addtodo->setTextMargins(10, 0 ,200, 0);

}

void Widget::onChooseDatetimeActionTriggered()
{
    is_todo_time_changed = true;
    w.show();
    w.isvi = true;
    QDate s = QDate::currentDate();
    w.draw_calendar(s);

    connect(&w, &datecalendar::datas_saved, [this](QPair<QDate, QTime> & datas)
    {
        todo_set_date = datas.first;
        todo_set_time = datas.second;
        qDebug() << todo_set_date.toString("yyyy-MM-dd") << "    " << todo_set_time.toString("hh-mm-ss");
        ui->TododatesetButton->setVisible(false);
        ui->TodotimesetButton->setVisible(false);
        ui->infolabel->setVisible(true);
        line = todo_set_date.toString("yyyy-MM-dd") + QString("\n") + todo_set_time.toString("hh:00");
        ui->infolabel->setText(line);
            ui->addtodo->setTextMargins(10, 0 ,200, 0);
    });
}

void Widget::onEverydayActionTriggered()
{
    ui->TodorepeatButton->setVisible(false);
    unitnum = 1;
    unittype = 0;
    ui->repeatinfolabel->setVisible(true);
    repeat_info = QString("每日1次");
    ui->repeatinfolabel->setText(repeat_info);
        ui->addtodo->setTextMargins(10, 0 ,200, 0);
}

void Widget::onEveryweekActionTriggered()
{
    unitnum = 1;
    unittype = 1;
    ui->TodorepeatButton->setVisible(false);
    ui->repeatinfolabel->setVisible(true);
    repeat_info = QString("每周1次");
    ui->repeatinfolabel->setText(repeat_info);
    ui->addtodo->setTextMargins(10, 0 ,200, 0);
}

void Widget::onSelfdefineActionTriggered()
{
    c.show();
    connect(&c, &subrepeat::datas_save, [this](QPair<int, int> & datas)
            {
        unitnum = datas.first;
        unittype = datas.second;
        qDebug() << unitnum<< "    " << unittype;
        ui->TodorepeatButton->setVisible(false);
        ui->repeatinfolabel->setVisible(true);
        if(unitnum <= 0 || unittype < 0)
            {
            repeat_info = QString("无循环");
        }
        else {
            repeat_info = QString("每") + QString((char)('0' + unitnum)) + circletype_name[unittype] + QString("1次");
        }

        ui->repeatinfolabel->setText(repeat_info);
            ui->addtodo->setTextMargins(10, 0 ,200, 0);
    });
}



void Widget::updateButtonVisibility(const QString &text) //相当于初始化所有的todo信息
{
    ui->addtodo->setTextMargins(10, 0, 90, 0);
    ui->infolabel->setVisible(false);
    ui->repeatinfolabel->setVisible(false);
    ui->TododatesetButton->setVisible(!text.isEmpty());
    ui->TodotimesetButton->setVisible(!text.isEmpty());
    ui->TodorepeatButton->setVisible(!text.isEmpty());
    line.clear();
    repeat_info.clear();
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_addtodo_returnPressed()
{
    // TODO: 将这个todo添加到后端
    if(!ui->addtodo->text().isEmpty())
    {
        QString todo_title = ui->addtodo->text();
        QTime cur = QTime::currentTime();
        QString id = cur.toString("hhmmss") + todo_title;

        CustomButton* pBtn = new CustomButton(todo_title, id);
        pBtn->title = todo_title;
        pBtn->is_have_deadline = is_todo_date_changed;
        pBtn->is_have_deadtime = is_todo_time_changed;
        pBtn->is_have_cycle = (bool)unitnum;
        pBtn->cycleline = repeat_info;
        pBtn->pair.first = unitnum;
        pBtn->pair.second = unittype;
        pBtn->deadline = todo_set_date;
        pBtn->deadtime = todo_set_time;
        pBtn->redraw();
        connect(pBtn, &CustomButton::editButtonClicked, this, &Widget::open_edit_menu);
        connect(pBtn, &CustomButton::mainButtonClicked, this, &Widget::mark_finished);
        connect(pBtn, &CustomButton::deleteButttonClicked, this, &Widget::mark_deleted);
        created_large_buttons->push_back(pBtn);

        SmallCustomButton* spBtn = new SmallCustomButton(todo_title, id);
        spBtn->title = todo_title;
        spBtn->is_have_deadline = is_todo_date_changed;
        spBtn->is_have_deadtime = is_todo_time_changed;
        spBtn->is_have_cycle = (bool)unitnum;
        spBtn->cycleline = repeat_info;
        spBtn->pair.first = unitnum;
        spBtn->pair.second = unittype;
        spBtn->deadline = todo_set_date;
        spBtn->deadtime = todo_set_time;
        spBtn->redraw();
        created_small_buttons->push_back(spBtn);
        connect(spBtn, &SmallCustomButton::editButtonClicked, this->po, &smallwidget::open_edit_menu);
        connect(spBtn, &SmallCustomButton::mainButtonClicked, this->po, &smallwidget::mark_finished);
        connect(spBtn, &SmallCustomButton::deleteButttonClicked, this->po, &smallwidget::mark_deleted);
        draw_todo_buttons_from_vector();

        is_todo_date_changed = false;
        is_todo_time_changed = false;
        ui->addtodo->clear();
        line.clear();
        repeat_info.clear();
    }
}

void Widget::mark_deleted(const QString &id)
{
    for(int i = 0; i < created_large_buttons->size(); i++)
    {
        if((*created_large_buttons)[i]->id == id)
        {
            now_edit_bbutton = i;
            break;
        }
    }
    created_large_buttons->remove(now_edit_bbutton);
    created_small_buttons->remove(now_edit_bbutton);
    now_edit_bbutton = -1;
    draw_todo_buttons_from_vector();
}


void Widget::mark_finished(const QString &id)
{
    for(int i = 0; i < created_large_buttons->size(); i++)
    {
        if((*created_large_buttons)[i]->id == id)
        {
            now_edit_bbutton = i;
            break;
        }
    }
    (*created_large_buttons)[now_edit_bbutton]->isfinished = true;
    (*created_small_buttons)[now_edit_bbutton]->isfinished = true;
    (*created_large_buttons)[now_edit_bbutton]->redraw();
    (*created_small_buttons)[now_edit_bbutton]->redraw();
    now_edit_bbutton = -1;
    draw_todo_buttons_from_vector();

}


void Widget::open_edit_menu(const QString &id)
{
    for(int i = 0; i < created_large_buttons->size(); i++)
    {
        if((*created_large_buttons)[i]->id == id)
        {
            now_edit_bbutton = i;
            break;
        }
    }
    ui->edit_widget->setVisible(true);
    if(!(*created_large_buttons)[now_edit_bbutton]->info.isEmpty())
    {
        ui->add_todo_info->setText((*created_large_buttons)[now_edit_bbutton]->info);
    }
    else {
        ui->add_todo_info->setText("");
    }
    ui->edit_todo_title->setText((*created_large_buttons)[now_edit_bbutton]->title);

    for(int i = 0; i < (*created_large_buttons).size(); i++)
    {
        (*created_large_buttons)[i]->mainButton->setEnabled(false);
        (*created_large_buttons)[i]->editButton->setEnabled(false);
        (*created_large_buttons)[i]->redraw();
    }
    ui->addtodo->setEnabled(false);



    if((*created_large_buttons)[now_edit_bbutton]->is_have_deadline)
    {
        ui->reset_todo_date->setVisible(true);
        QString textline = (*created_large_buttons)[now_edit_bbutton]->deadline.toString("MM-dd");
        ui->reset_todo_date->setText((QString("  改变截止日期                        ") + textline));
    }
    else {
        ui->reset_todo_date->setText(QString("  改变截止日期     "));
        ui->reset_todo_date->setVisible(true);
    }

    if((*created_large_buttons)[now_edit_bbutton]->is_have_deadtime)
    {
        QString textline = (*created_large_buttons)[now_edit_bbutton]->deadtime.toString(("hh:00"));
        ui->reset_todo_time->setText((QString("  提醒我                                  ") + textline));
        ui->reset_todo_date->setVisible(false);
    }
    else {
        ui->reset_todo_time->setText(QString("  提醒我          "));
    }

    if((*created_large_buttons)[now_edit_bbutton]->is_have_cycle)
    {
        ui->reset_todo_repeat->setText(QString("  重复                               ") + (*created_large_buttons)[now_edit_bbutton]->cycleline);
    }
    else {
        ui->reset_todo_repeat->setText(QString("  重复                               ") + (*created_large_buttons)[now_edit_bbutton]->cycleline);
    }
}

void Widget::on_close_edit_button_clicked()
{
    for(int i = 0; i < (*created_large_buttons).size(); i++)
    {
        if(!(*created_large_buttons)[i]->isfinished)
        {
            (*created_large_buttons)[i]->mainButton->setEnabled(true);
            (*created_large_buttons)[i]->editButton->setEnabled(true);
            (*created_large_buttons)[i]->redraw();
        }
    }
    ui->addtodo->setEnabled(true);


    ui->edit_widget->setVisible(false);
    now_edit_bbutton = -1;
    ui->add_todo_info->setVisible(true);
    ui->reset_todo_date->setVisible(true);
    ui->reset_todo_repeat->setVisible(true);
    ui->reset_todo_time->setVisible(true);
    draw_todo_buttons_from_vector();
    is_todo_date_changed = false;
    is_todo_time_changed = false;
    ui->set_todo_finished->setStyleSheet(

        "QPushButton {"
        "background-color: rgba(50, 50, 50, 255);"


        "color: white; /* 文字颜色为白色 */"
        "border: none; /* 去掉边框 */ "
        "border-bottom-left-radius: 10px;"
        "border-top-left-radius: 10px;"
        "icon: url(:/Themes/Assets/circle-large.svg); /* 正常状态图标 */"
        "padding-left: 10px;"
        "text-align: left; /* 文字居左 */"
        "}"

        "QPushButton:hover "
        "{ "
        "background-color: rgba(0, 0, 0, 128); /* 悬浮时背景颜色变深 */ "
        "icon: url(:/Themes/Assets/circle-check.svg); /* 正常状态图标 */ "
        "}");


}


void Widget::on_edit_todo_title_textChanged(const QString &arg1)
{
    (*created_large_buttons)[now_edit_bbutton]->title = arg1;
    (*created_small_buttons)[now_edit_bbutton]->title = arg1;
    (*created_large_buttons)[now_edit_bbutton]->redraw();
    (*created_small_buttons)[now_edit_bbutton]->redraw();
}


void Widget::on_set_todo_finished_clicked()
{
    (*created_large_buttons)[now_edit_bbutton]->isfinished = true;
    (*created_small_buttons)[now_edit_bbutton]->isfinished = true;
    (*created_large_buttons)[now_edit_bbutton]->redraw();
    (*created_small_buttons)[now_edit_bbutton]->redraw();

    ui->set_todo_finished->setStyleSheet(

        "QPushButton {"
                            "background-color: rgba(50, 50, 50, 255);"


                              "color: white; /* 文字颜色为白色 */"
                              "border: none; /* 去掉边框 */ "
                              "border-bottom-left-radius: 10px;"
                              "border-top-left-radius: 10px;"
                              "icon: url(:/Themes/Assets/finish.svg); /* 正常状态图标 */"
                              "padding-left: 10px;"
                              "text-align: left; /* 文字居左 */"
                              "}"

                              "QPushButton:hover "
                              "{ "
                              "background-color: rgba(50, 50, 50, 255); /* 悬浮时背景颜色变深 */ "
                              "icon: url(:/Themes/Assets/finish.svg); /* 正常状态图标 */ "
                              "}");
    ui->add_todo_info->setVisible(false);
    ui->reset_todo_date->setVisible(false);
    ui->reset_todo_repeat->setVisible(false);
    ui->reset_todo_time->setVisible(false);

    now_edit_bbutton = -1;

}


void Widget::on_add_todo_info_textChanged()
{
    (*created_large_buttons)[now_edit_bbutton]->info = ui->add_todo_info->toPlainText();
    (*created_small_buttons)[now_edit_bbutton]->info = ui->add_todo_info->toPlainText();
    if(!(*created_large_buttons)[now_edit_bbutton]->info.isEmpty())
    {
        (*created_large_buttons)[now_edit_bbutton]->is_have_info = true;
        (*created_small_buttons)[now_edit_bbutton]->is_have_info = true;
        (*created_large_buttons)[now_edit_bbutton]->redraw();
        (*created_small_buttons)[now_edit_bbutton]->redraw();
    }
    else {
        (*created_large_buttons)[now_edit_bbutton]->is_have_info = false;
        (*created_small_buttons)[now_edit_bbutton]->is_have_info = false;
        (*created_large_buttons)[now_edit_bbutton]->redraw();
        (*created_small_buttons)[now_edit_bbutton]->redraw();
    }
}


void Widget::on_reset_todo_time_clicked()
{
    w.show();
    w.isvi = true;
    QDate s = QDate::currentDate();
    w.draw_calendar(s);
    connect(&w, &datecalendar::datas_saved, [this](QPair<QDate, QTime> & datas)
            {
                (*created_large_buttons)[now_edit_bbutton]->deadline = datas.first;
                (*created_small_buttons)[now_edit_bbutton]->deadline = datas.first;
                (*created_large_buttons)[now_edit_bbutton]->deadtime = datas.second;
                (*created_small_buttons)[now_edit_bbutton]->deadtime = datas.second;
                ui->reset_todo_date->setVisible(false);
                line = datas.second.toString("hh:00");
                ui->reset_todo_time->setText(QString("  提醒我                                ") + line);

                (*created_large_buttons)[now_edit_bbutton]->is_have_deadline = true;
                (*created_small_buttons)[now_edit_bbutton]->is_have_deadline = true;
                (*created_large_buttons)[now_edit_bbutton]->is_have_deadtime = true;
                (*created_small_buttons)[now_edit_bbutton]->is_have_deadtime = true;
                (*created_large_buttons)[now_edit_bbutton]->redraw();
                (*created_small_buttons)[now_edit_bbutton]->redraw();
            });

}


void Widget::on_reset_todo_date_clicked()
{
    w.show();
    w.isvi = false;
    QDate s = QDate::currentDate();
    w.draw_calendar(s);
    connect(&w, &datecalendar::data_saved, [this](QDate &selected_date)
            {
                (*created_large_buttons)[now_edit_bbutton]->deadline = selected_date;
                (*created_small_buttons)[now_edit_bbutton]->deadline = selected_date;
                line = selected_date.toString("MM-dd");
                ui->reset_todo_date->setText(QString("  改变截止日期                        ") + line);
                (*created_large_buttons)[now_edit_bbutton]->is_have_deadline = true;
                (*created_small_buttons)[now_edit_bbutton]->is_have_deadline = true;
                (*created_large_buttons)[now_edit_bbutton]->is_have_deadtime = false;
                (*created_small_buttons)[now_edit_bbutton]->is_have_deadtime = false;
                (*created_large_buttons)[now_edit_bbutton]->redraw();
                (*created_small_buttons)[now_edit_bbutton]->redraw();
            });
}


void Widget::on_reset_todo_repeat_clicked()
{
    c.show();
    connect(&c, &subrepeat::datas_save, [this](QPair<int, int> & datas)
            {
                unitnum = datas.first;
                unittype = datas.second;
                if(unitnum <= 0 || unittype < 0)
                {
                    repeat_info = QString("无循环");
                }
                else {
                    repeat_info = QString("每") + QString((char)('0' + unitnum)) + circletype_name[unittype] + QString("1次");
                }
                (*created_large_buttons)[now_edit_bbutton]->cycleline = repeat_info;
                (*created_large_buttons)[now_edit_bbutton]->pair.first = unitnum;
                (*created_large_buttons)[now_edit_bbutton]->pair.second = unittype;
                (*created_large_buttons)[now_edit_bbutton]->is_have_cycle = true;
                (*created_small_buttons)[now_edit_bbutton]->cycleline = repeat_info;
                (*created_small_buttons)[now_edit_bbutton]->pair.first = unitnum;
                (*created_small_buttons)[now_edit_bbutton]->pair.second = unittype;
                (*created_small_buttons)[now_edit_bbutton]->is_have_cycle = true;

                if((*created_small_buttons)[now_edit_bbutton]->is_have_cycle)
                {
                    ui->reset_todo_repeat->setText(QString("  重复                               ") + (*created_small_buttons)[now_edit_bbutton]->cycleline);
                }
                else {
                    ui->reset_todo_repeat->setText(QString("  重复                               ") + (*created_small_buttons)[now_edit_bbutton]->cycleline);
                }
                (*created_small_buttons)[now_edit_bbutton]->redraw();
                (*created_large_buttons)[now_edit_bbutton]->redraw();
        });

}


void Widget::on_delete_todo_clicked()
{
    created_large_buttons->remove(now_edit_bbutton);
    created_small_buttons->remove(now_edit_bbutton);
    ui->edit_widget->setVisible(false);
    draw_todo_buttons_from_vector();
    for(int i = 0; i < (*created_large_buttons).size(); i++)
    {
        if(!(*created_large_buttons)[i]->isfinished)
        {
            (*created_large_buttons)[i]->mainButton->setEnabled(true);
            (*created_large_buttons)[i]->editButton->setEnabled(true);
            (*created_large_buttons)[i]->redraw();
        }
    }
    ui->addtodo->setEnabled(true);
}

void Widget::on_chagesize_clicked()
{

    emit changesizeButtonClicked();
}

