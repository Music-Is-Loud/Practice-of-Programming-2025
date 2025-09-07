#ifndef EXAM_H
#define EXAM_H

#include "event.h"

class Exam :public Event
{
public:
    Exam(const QString& _name, const QDateTime& _baseTime, const QString& _details);
};

#endif // EXAM_H
