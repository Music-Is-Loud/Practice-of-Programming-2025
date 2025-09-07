#include "term.h"
#include <stdexcept>

using namespace std::chrono;

year_month_day Term::adjust_to_monday(year_month_day ymd) {
    sys_days sd = ymd;
    weekday wd = sd;
    if (wd != Monday) {
        sd -= (wd - Monday); // 回退到周一
    }
    return year_month_day{sd};
}

Term::Term(int YYYY, int MM, int DD) {
    if (!year_month_day{year{YYYY}/MM/DD}.ok()) {
        throw std::runtime_error("Invalid date");
    }
    year_month_day input_date{year{YYYY}/MM/DD};
    m_date = adjust_to_monday(input_date);
}

year_month_day Term::get_date() const { 
    return m_date; 
}

void Term::get_ymd(int& YYYY, int& MM, int& DD) const {
    YYYY = static_cast<int>(m_date.year());
    MM = static_cast<unsigned>(m_date.month());
    DD = static_cast<unsigned>(m_date.day());
}

int Term::weeks_between(year_month_day other) const {
    sys_days term_day = m_date;
    sys_days other_day = other;
    auto diff = other_day - term_day;
    return static_cast<int>(duration_cast<weeks>(diff).count());
}