#include <QCoreApplication>
#include <QFile>
#include <QDebug>
#include <QString>
#include <QDir>
#include <QStringList>
#include <QRegularExpression>
#include <QRandomGenerator>
#include <QColor>
#include "savedata.h"

int main(int argc, char *argv[]) {
    return draw_data_from_file("data.html");
}
