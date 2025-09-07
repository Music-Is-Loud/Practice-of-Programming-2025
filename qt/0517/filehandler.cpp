#include "filehandler.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>

bool FileHandler::saveToFile(const QString &path, const QJsonArray &data) {
    QFile file(path);
    if (!file.open(QIODevice::WriteOnly)) {
        return false;
    }

    QJsonObject root;
    root["version"] = 1;
    root["todos"] = data;

    file.write(QJsonDocument(root).toJson());
    file.close();
    return true;
}

QJsonArray FileHandler::loadFromFile(const QString &path) {
    QFile file(path);
    if (!file.open(QIODevice::ReadOnly)) {
        return QJsonArray();
    }

    QJsonDocument doc = QJsonDocument::fromJson(file.readAll());
    file.close();

    if (doc.isNull() || !doc.isObject()) {
        return QJsonArray();
    }

    QJsonObject root = doc.object();
    return root["todos"].toArray();
}
