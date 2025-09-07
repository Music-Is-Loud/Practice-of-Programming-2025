#include "widget.h"
#include "mainwindow.h"
#include "datecalendar.h"
#include "subrepeat.h"
#include "smallwidget.h"


#include <QApplication>
#include <QObject>

int main(int argc, char *argv[])
{
    QVector<CustomButton *> * created_large_buttons = new QVector<CustomButton *>;
    QVector<SmallCustomButton*> * created_small_buttons = new QVector<SmallCustomButton *>;

    QApplication a(argc, argv);
    Widget w;
    w.created_large_buttons = created_large_buttons;
    w.created_small_buttons = created_small_buttons;

    w.show();

    smallwidget e;
    e.created_small_buttons = created_small_buttons;
    e.created_large_buttons = created_large_buttons;
    e.hide(); // 如果需要初始显示 smallwidget，否则调用 e.hide()
    w.po = &e;
    e.po = &w;

    // 连接 Widget 的按钮点击信号到槽函数
    QObject::connect(&w, &Widget::changesizeButtonClicked, &e, [&w, &e]() {
        w.hide();
        e.show();
        e.draw_todo_buttons_from_vector();
    });

    // 连接 smallwidget 的按钮点击信号到槽函数
    QObject::connect(&e, &smallwidget::changesizeButtonClicked, &w, [&w, &e]() {
        e.hide();
        w.show();
        w.draw_todo_buttons_from_vector();
    });

    return a.exec();
}
