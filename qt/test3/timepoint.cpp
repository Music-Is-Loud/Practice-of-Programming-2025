#include "timepoint.h"
#include "term.h"
#include <stdexcept>
#include <iostream>

using namespace std::chrono;

TimePoint::TimePoint(Term* term, int YYYY, int MM, int DD) {
    year_month_day input_date{year{YYYY}/MM/DD};
    if (!input_date.ok()) {
        throw std::runtime_error("Invalid date");
    }

    m_date = input_date;
    m_week = term->weeks_between(m_date);
    
    weekday wd = sys_days{m_date};
    m_day = wd.iso_encoding(); // Monday=1, ..., Sunday=7
}

TimePoint::TimePoint(Term* term, int week, int day) 
    : m_week(week), m_day(day) {
    if (day < 1 || day > 7) {
        throw std::runtime_error("Day must be between 1 (Monday) and 7 (Sunday)");
    }

    sys_days term_day = term->get_date();
    sys_days target_day = term_day + weeks{week} + days{day - 1};
    m_date = year_month_day{target_day};
}

void TimePoint::get_ymd(int& YYYY, int& MM, int& DD) const {
    YYYY = static_cast<int>(m_date.year());
    MM = static_cast<unsigned>(m_date.month());
    DD = static_cast<unsigned>(m_date.day());
}

void TimePoint::get_week_day(int& week, int& day) const {
    week = m_week;
    day = m_day;
}

void TimePoint::print() const {
    int y, m, d;
    get_ymd(y, m, d);
    std::cout << "Date: " << y << "-" << m << "-" << d 
              << " | Week: " << m_week 
              << " | Day: " << m_day << " (1=Monday)" << std::endl;
}