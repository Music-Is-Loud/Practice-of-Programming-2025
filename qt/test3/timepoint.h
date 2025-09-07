#ifndef TIMEPOINT_H
#define TIMEPOINT_H

#include "term.h"
#include <chrono>

class TimePoint {
private:
    std::chrono::year_month_day m_date;
    int m_week; // 相对于Term的周数
    int m_day;  // 星期几 (1-7, 1=Monday)

public:
    TimePoint(Term* term, int YYYY, int MM, int DD);
    TimePoint(Term* term, int week, int day);
    
    void get_ymd(int& YYYY, int& MM, int& DD) const;
    void get_week_day(int& week, int& day) const;
    void print() const;
};

#endif // TIMEPOINT_H