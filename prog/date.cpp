#include "date.h"
#include <iostream>
#include <string>

date::date()
{

}

date::date(int year, int month, int day)
{
    this->year = year;
    this->month = month;
    this->day = day;
}

void date::print_date()
{
    std::cout << year << ", " << month << ", " << day << "; ";
}

std::string date::to_string()
{
    return std::to_string(year) + ", " + std::to_string(month) + ", " + std::to_string(day) + "; ";
}
