#include "timeData.h"

basicTime::basicTime(int _year,int _month,int _day,int _hour,int _minute):
    year(_year),month(_month),day(_day),hour(_hour),minute(_minute){}
lectureTime::lectureTime(int _year,int _week,int _date,int _beginLecture,int _endLecture):
    year(_year),week(_week),date(_date),beginLecture(_beginLecture),endLecture(_endLecture){};
