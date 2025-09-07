#include "event.h"

Event::Event(const QString& _name, const QDateTime& _baseTime, const QString& _details)
    :  name(_name), baseTime(_baseTime), details(_details) {}
