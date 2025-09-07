#ifndef EVENT_H
#define EVENT_H
#include <QString>
#include <QDateTime>
#include <QList>

class Event
{
public:
    QString name;         // 事件名称
    QDateTime baseTime;   // 基础时间
    QString details;      // 详细信息


    explicit Event(const QString& _name, const QDateTime& _baseTime, const QString& _details);
    ~Event();

};

#endif // EVENT_H
