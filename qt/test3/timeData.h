#ifndef TIMEDATA_H
#define TIMEDATA_H
#include <QDateTime>
//存储基础时间的类，2025/04/21/10/00
class basicTime
{
public:
    int year;
    int month;
    int day;
    int hour;
    int minute;
    basicTime(int _year, int _month, int _day, int _hour, int _minute);

};
//存储课时时间的类 2025/11周/周二/3/4
class lectureTime
{
public:
    int year;
    int week;
    int date;
    int beginLecture;
    int endLecture;
    lectureTime(int _year, int _week, int _date, int _beginLecture, int _endLecture);
};


#endif // TIMEDATA_H
