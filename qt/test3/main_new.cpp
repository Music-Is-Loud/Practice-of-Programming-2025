//使用"g++ -std=c++20 -o date_time_example main.cpp term.cpp timepoint.cpp -I." 编译
#include "term.h"
#include "timepoint.h"
#include <iostream>

int main() {
    try {
        // 创建一个Term (如果不是周一，会自动调整到当周周一)
        Term term(2025, 1, 1); // 2025年1月1日是星期三，会自动调整为2024年12月30日(周一)
        
        int y, m, d;
        term.get_ymd(y, m, d);
        std::cout << "Term starts on: " << y << "-" << m << "-" << d << " (Monday)\n";
        
        // 通过具体日期创建TimePoint
        TimePoint tp1(&term, 2025, 1, 6); // 2025年1月6日(周一)
        tp1.print(); // 应该显示 Week 1, Day 1
        
        // 通过周数和星期几创建TimePoint
        TimePoint tp2(&term, 2, 3); // 第2周的周三
        tp2.print();
        
        TimePoint tp3(&term, 0, 5); // 第0周的周五
        tp3.print();
        
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    
    return 0;
}