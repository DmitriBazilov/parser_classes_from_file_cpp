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
        void print_date();
    protected:

    private:
};

#endif // DATE_H
