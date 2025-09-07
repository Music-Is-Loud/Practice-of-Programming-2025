#ifndef EDIT_CLASS_BUTTON_H
#define EDIT_CLASS_BUTTON_H

#include <QWidget>
#include <QPushButton>
#include <QTime>
#include <QColor>
#include <QVector>

class edit_class_button : public QPushButton
{
    Q_OBJECT
public:
    explicit edit_class_button(QString id,QWidget *parent = nullptr);
    QString classid;
    QString classname;
    QString classinfo;
    QTime begintime;
    QTime endtime;
    bool use_precise_time = false;
    int beginclass = 1;
    int endclass = 1;
    QColor thecolor = QColor(255, 255, 255);
    int which_weekday = 1;
    QVector<bool>weekinfo;
    bool is_visi = false;
    //QPushButton s = QPushButton()


    //QPushButton mainButton =QPushButton(this);

    void redraw();

signals:
    void mainbuttonclicked(QString id);
private slots:
    void onMainButtonClicked();
};

#endif // EDIT_CLASS_BUTTON_H
