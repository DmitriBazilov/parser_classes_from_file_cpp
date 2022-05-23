#include "programmer.h"
#include "date.h"
#include <iostream>

programmer::programmer()
{

};

programmer::programmer(string surname, string name, string second_name, string sex,
                       string nationality, date birthday, string graduate, string number)
{
    this->surname = surname;
    this->name = name;
    this->second_name = second_name;
    this->sex = sex;
    this->nationality = nationality;
    this->birthday = birthday;
    this->graduate = graduate;
    this->number = number;
}

void programmer::print_programmer()
{
    std::cout << surname << "; " << name << "; " << second_name << "; " << sex << "; " << nationality << "; ";
    birthday.print_date();
    std::cout << graduate << "; " << number << ".\n";
};

void programmer::say()
{
    std::cout << "I'm Progger\n";
};

std::string programmer::to_string()
{
    return surname + "; " + name + "; " + second_name + "; " + sex + "; " + nationality + "; " + birthday.to_string() + graduate + "; " + number + ".";
};
