#ifndef CLASS_CUSTOM_BUTTON_H
#define CLASS_CUSTOM_BUTTON_H

#include <QObject>
#include <QPushButton>
#include <QTime>

class class_custom_button:public QWidget {
    Q_OBJECT
public:
    class_custom_button();
    QVector<bool>weekinfo;
    QString classid;
    QString classname;
    QString classinfo;
    QColor thecolor;
    int which_weekday = 1;
    bool use_precise_time = false;
    QTime begintime;
    QTime endtime;
    int beginclass = 1;
    int endclass = 1;
    void redraw();
    QWidget parentwidget;
    QPushButton button;
signals:
    void editButtonclicked(QString id);
private slots:
    void onEditButtonClicked();
};

#endif // CLASS_CUSTOM_BUTTON_H
