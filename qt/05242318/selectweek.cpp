#include "selectweek.h"
#include "ui_selectweek.h"

selectweek::selectweek(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::selectweek)
{
    ui->setupUi(this);
}

selectweek::~selectweek()
{
    delete ui;
}
