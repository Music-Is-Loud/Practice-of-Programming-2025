#ifndef SELECTWEEK_H
#define SELECTWEEK_H

#include <QWidget>

namespace Ui {
class selectweek;
}

class selectweek : public QWidget
{
    Q_OBJECT

public:
    explicit selectweek(QWidget *parent = nullptr);
    ~selectweek();

private:
    Ui::selectweek *ui;
};

#endif // SELECTWEEK_H
