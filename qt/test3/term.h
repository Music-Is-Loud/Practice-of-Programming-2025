#ifndef TERM_H
#define TERM_H

#include <chrono>

class Term {
private:
    std::chrono::year_month_day m_date;

    static std::chrono::year_month_day adjust_to_monday(std::chrono::year_month_day ymd);

public:
    Term(int YYYY, int MM, int DD);
    std::chrono::year_month_day get_date() const;
    void get_ymd(int& YYYY, int& MM, int& DD) const;
    int weeks_between(std::chrono::year_month_day other) const;
};

#endif // TERM_H