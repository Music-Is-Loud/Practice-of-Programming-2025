#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMainWindow>
#include <QVariantMap>
#include <QTimer>
#include <QTime>
#include <QThread>
#include <QFile>
#include <QVBoxLayout>
#include <QPushButton>
#include <QApplication>
#include<QDate>
#include <QToolButton>
#include <QMenu>
#include <QAction>
#include"datecalendar.h"
#include "subrepeat.h"
#include"QVector"
#include "custombutton.h"
#include "smallcustombutton.h"
#include "filehandler.h"
#include <QStandardPaths>




QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class smallwidget;

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    QVector<CustomButton*> *created_large_buttons = new QVector<CustomButton*>;
    QVector<SmallCustomButton *> *created_small_buttons = new QVector<SmallCustomButton*>;
    void draw_todo_buttons_from_vector();
    smallwidget * po;
    ~Widget();

    void loadTodosFromFile();
    void saveTodosToFile();
    int print_model = 0; //0 : 暗色 , 1 : 亮色

private:
    Ui::Widget *ui;
    datecalendar w;
    datecalendar v;
    subrepeat c;
    QDate todo_set_date = QDate::currentDate();


    QString line; //放到搜索框右边的信息
    QString repeat_info = "无循环";
    bool is_todo_date_changed = false;
    QTime todo_set_time = QTime::currentTime();
    bool is_todo_time_changed = false;
    int now_edit_bbutton = -1;

    int unitnum = 0;
    int unittype = -1;

    const QString DATA_PATH = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation)
                              + "/todos.json";
public slots:
    void open_edit_menu(const QString &id);
    void mark_finished(const QString &id);
    void mark_deleted(const QString &id);

private slots:

    void updateButtonVisibility(const QString &text);
    void onTodayActionTriggered();
    void onTomorrowActionTriggered();
    void onChooseDateActionTriggered();
    void onTodaytimeActionTriggered();
    void onTomorrowtimeActionTriggered();
    void onChooseDatetimeActionTriggered();
    void onEverydayActionTriggered();
    void onEveryweekActionTriggered();
    void onSelfdefineActionTriggered();
    void on_addtodo_returnPressed();
    void on_close_edit_button_clicked();
    void on_edit_todo_title_textChanged(const QString &arg1);
    void on_set_todo_finished_clicked();
    void on_add_todo_info_textChanged();
    void on_reset_todo_time_clicked();
    void on_reset_todo_date_clicked();
    void on_reset_todo_repeat_clicked();
    void on_delete_todo_clicked();
    void on_chagesize_clicked();

signals:
    void changesizeButtonClicked();
};
#endif // WIDGET_H
