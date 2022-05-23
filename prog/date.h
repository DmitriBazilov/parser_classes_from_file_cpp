#include <string>

#ifndef DATE_H
#define DATE_H


class date
{
    public:
        int year;
        int month;
        int day;

        date();
        date(int year, int month, int day);

        std::string to_string();
};

#endif // DATE_H
