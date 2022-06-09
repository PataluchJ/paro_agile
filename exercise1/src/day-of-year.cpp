#include "day-of-year.hpp"

int dayOfYear(int month, int dayOfMonth, int year) {
    int feb = 28;
    if((year % 4 == 0 and year % 100 != 0) or year % 400 == 0) {
        feb = 29;
    }
    int months[12] = {31, feb, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for(int i = 0; i < month - 1; ++i) {
        dayOfMonth += months[i];
    }
    return dayOfMonth;
}
