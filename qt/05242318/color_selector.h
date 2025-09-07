#ifndef COLOR_SELECTOR_H
#define COLOR_SELECTOR_H

#include <QWidget>

namespace Ui {
class color_selector;
}

class color_selector : public QWidget
{
    Q_OBJECT

public:
    explicit color_selector(QWidget *parent = nullptr);
    ~color_selector();

private:
    Ui::color_selector *ui;
};

#endif // COLOR_SELECTOR_H
