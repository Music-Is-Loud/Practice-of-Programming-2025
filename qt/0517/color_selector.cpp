#include "color_selector.h"
#include "ui_color_selector.h"

color_selector::color_selector(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::color_selector)
{
    ui->setupUi(this);
}

color_selector::~color_selector()
{
    delete ui;
}
