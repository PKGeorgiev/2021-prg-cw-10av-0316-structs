#include "student.h"
#include <iostream>
#include <vector>
#include <string>

std::string STUDENT::getFullName()
{
    return firstName + " " + surname;
}
