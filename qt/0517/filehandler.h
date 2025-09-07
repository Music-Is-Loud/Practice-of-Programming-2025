#ifndef FILEHANDLER_H
#define FILEHANDLER_H
#include <QString>
#include <QJsonArray>
class FileHandler
{
public:

    static bool saveToFile(const QString &path, const QJsonArray &data);
    static QJsonArray loadFromFile(const QString &path);
};

#endif // FILEHANDLER_H
