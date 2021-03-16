#include "student.h"
#include <string>

std::string getFullName()
{
    return std::string();
}

std::string STUDENT::getFullName()
{
	return firstName + " " + surname;
}
