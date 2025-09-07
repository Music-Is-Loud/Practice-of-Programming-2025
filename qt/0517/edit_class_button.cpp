#include "edit_class_button.h"

edit_class_button::edit_class_button(QString id,QWidget *parent)
    : QPushButton{parent}
{
    classid = id;
    for(int i = 0; i < 20; i++)
    {
        weekinfo.push_back(true);
    }
    //mainButton = new QPushButton(this);

    int button_x = 0;
    int button_y = 0;
    int button_height = 0;
    if(this->which_weekday == 1)
    {
        button_x = 81;
    }
    else if(this->which_weekday == 2)
    {
        button_x = 163;
    }
    else if(this->which_weekday == 3)
    {
        button_x = 245;
    }
    else if(this->which_weekday == 4)
    {
        button_x = 327;
    }
    else if(this->which_weekday == 5)
    {
        button_x = 409;
    }
    else if(this->which_weekday == 6)
    {
        button_x = 491;
    }
    else if(this->which_weekday == 7)
    {
        button_x = 571;
    }
    if(this->use_precise_time) // 使用精确时间
    {
        int miniutenum = this->begintime.hour() * 60 + this->begintime.minute();
        button_y = 36 + ((miniutenum - 480) / 800) * 451;
        int miniutenum2 = this->endtime.hour() * 60 + this->endtime.minute();
        int button_y2 = 36 + ((miniutenum2 - 480) / 800) * 451;
        button_height = button_y2 - button_y;
    }
    else {
        if(this->beginclass == 1) {
            button_y = 36;
        }
        else if(this->beginclass == 2)
        {
            button_y = 77;
        }
        else if(this->beginclass == 3)
        {
            button_y = 118;
        }
        else if(this->beginclass == 4)
        {
            button_y = 159;
        }
        else if(this->beginclass == 5)
        {
            button_y = 200;
        }
        else if(this->beginclass == 6)
        {
            button_y = 241;
        }
        else if(this->beginclass == 7)
        {
            button_y = 282;
        }
        else if(this->beginclass == 8)
        {
            button_y = 323;
        }
        else if(this->beginclass == 9)
        {
            button_y = 364;
        }
        else if(this->beginclass ==10)
        {
            button_y = 405;
        }
        else if(this->beginclass ==11)
        {
            button_y = 446;
        }

        if(this->endclass == 1)
        {
            button_height = 77 - button_y;
        }
        else if(this->endclass == 2)
        {
            button_height = 118 - button_y;
        }
        else if(this->endclass == 3)
        {
            button_height = 159 - button_y;
        }
        else if(this->endclass == 4)
        {
            button_height = 200 - button_y;
        }
        else if(this->endclass == 5)
        {
            button_height = 241 - button_y;
        }
        else if(this->endclass == 6)
        {
            button_height = 282 - button_y;
        }
        else if(this->endclass == 7)
        {
            button_height = 323 - button_y;
        }
        else if(this->endclass == 8)
        {
            button_height = 364 - button_y;
        }
        else if(this->endclass ==9)
        {
            button_height = 405 - button_y;
        }
        else if(this->endclass ==10)
        {
            button_height = 446 - button_y;
        }
        else if(this->endclass == 11)
        {
            button_height = 487 - button_y;
        }
    }

    //this->setParent(parentwidget);
    this->resize(70, button_height);
    this->move(button_x, button_y);

    // 设置样式和文本
    QColor baseColor = this->thecolor.isValid() ? this->thecolor : QColor("blue");
    baseColor = baseColor.lighter(70);
    QColor hoverColor = baseColor.lighter(120);
    QString styleSheet = QString(
                             "QPushButton {\n"
                             "    background-color: %1;\n"
                             "    color: white;\n"
                             "    border: 8px;\n"
                             "    border-color: white;\n"
                             "    border-radius: 5px;\n"
                             "    padding: 10px;\n"
                             "    font-size: 10px;\n"
                             "}\n"
                             "QPushButton:hover {\n"
                             "    background-color: %2;\n"
                             "}\n"
                             ).arg(baseColor.name()).arg(hoverColor.name());


    this->setStyleSheet(styleSheet);
    this->setText(this->classname);

    connect(this, &QPushButton::clicked, this, &edit_class_button::onMainButtonClicked);

}

void edit_class_button::redraw()
{
    int button_x = 0;
    int button_y = 0;
    int button_height = 0;
    if(this->which_weekday == 1)
    {
        button_x = 81;
    }
    else if(this->which_weekday == 2)
    {
        button_x = 163;
    }
    else if(this->which_weekday == 3)
    {
        button_x = 245;
    }
    else if(this->which_weekday == 4)
    {
        button_x = 327;
    }
    else if(this->which_weekday == 5)
    {
        button_x = 409;
    }
    else if(this->which_weekday == 6)
    {
        button_x = 491;
    }
    else if(this->which_weekday == 7)
    {
        button_x = 571;
    }
    if(this->use_precise_time) // 使用精确时间
    {
        int miniutenum = this->begintime.hour() * 60 + this->begintime.minute();
        button_y = 36 + ((miniutenum - 480) / 800) * 451;
        int miniutenum2 = this->endtime.hour() * 60 + this->endtime.minute();
        int button_y2 = 36 + ((miniutenum2 - 480) / 800) * 451;
        button_height = button_y2 - button_y;
    }
    else {
        if(this->beginclass == 1) {
            button_y = 36;
        }
        else if(this->beginclass == 2)
        {
            button_y = 77;
        }
        else if(this->beginclass == 3)
        {
            button_y = 118;
        }
        else if(this->beginclass == 4)
        {
            button_y = 159;
        }
        else if(this->beginclass == 5)
        {
            button_y = 200;
        }
        else if(this->beginclass == 6)
        {
            button_y = 241;
        }
        else if(this->beginclass == 7)
        {
            button_y = 282;
        }
        else if(this->beginclass == 8)
        {
            button_y = 323;
        }
        else if(this->beginclass == 9)
        {
            button_y = 364;
        }
        else if(this->beginclass ==10)
        {
            button_y = 405;
        }
        else if(this->beginclass ==11)
        {
            button_y = 446;
        }

        if(this->endclass == 1)
        {
            button_height = 77 - button_y;
        }
        else if(this->endclass == 2)
        {
            button_height = 118 - button_y;
        }
        else if(this->endclass == 3)
        {
            button_height = 159 - button_y;
        }
        else if(this->endclass == 4)
        {
            button_height = 200 - button_y;
        }
        else if(this->endclass == 5)
        {
            button_height = 241 - button_y;
        }
        else if(this->endclass == 6)
        {
            button_height = 282 - button_y;
        }
        else if(this->endclass == 7)
        {
            button_height = 323 - button_y;
        }
        else if(this->endclass == 8)
        {
            button_height = 364 - button_y;
        }
        else if(this->endclass ==9)
        {
            button_height = 405 - button_y;
        }
        else if(this->endclass ==10)
        {
            button_height = 446 - button_y;
        }
        else if(this->endclass == 11)
        {
            button_height = 487 - button_y;
        }
    }



    //this->setParent(parentwidget);

    this->resize(70, button_height);
    this->move(button_x, button_y);


    // 设置样式和文本
    QColor baseColor = this->thecolor.isValid() ? this->thecolor : QColor("blue");
    baseColor = baseColor.lighter(70);
    QColor hoverColor = baseColor.lighter(120);
    QString styleSheet = QString(
                             "QPushButton {\n"
                             "    background-color: %1;\n"
                             "    color: white;\n"
                             "    border: 8px;\n"
                             "    border-color: white;\n"
                             "    border-radius: 5px;\n"
                             "    padding: 10px;\n"
                             "    font-size: 10px;\n"
                             "}\n"
                             "QPushButton:hover {\n"
                             "    background-color: %2;\n"
                             "}\n"
                             ).arg(baseColor.name()).arg(hoverColor.name());
    // mainButton.setStyleSheet(styleSheet);
    // mainButton.setText(this->classname + QString("09"));
    // mainButton.setVisible(is_visi);
    // mainButton.setEnabled(true);

    this->setStyleSheet(styleSheet);
    this->setText(this->classname);
    this->setVisible(is_visi);
    this->setEnabled(true);

    // qDebug()<< "here!";
    // qDebug() << this->classname;
    // qDebug() << button_height;
    // qDebug() << button_y;
    // qDebug() << button_x;
    //this->show();


}


void edit_class_button::onMainButtonClicked()
{
    emit mainbuttonclicked(classid);
}
