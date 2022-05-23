#include <date.h>
#include <string>

#ifndef PROGRAMMER_H
#define PROGRAMMER_H

using namespace std;

class programmer
{
    public:
        string surname;
        string name;
        string second_name;
        string sex;
        string nationality;
        date birthday;
        string graduate;
        string number;

        programmer();
        programmer(string surname, string name, string second_name, string sex, string nationality, date birthday, string graduate, string number);
        std::string to_string();
        void print_programmer();
        void say();
    protected:

    private:
};

#endif // PROGRAMMER_H
