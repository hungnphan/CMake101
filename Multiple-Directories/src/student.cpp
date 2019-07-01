#include "student.h"

#include <iostream>

void Student::print_details() const
{
    std::cout << "Name of the student: " << name << std::endl;
    std::cout << "Age of the student: " << age << std::endl;
}