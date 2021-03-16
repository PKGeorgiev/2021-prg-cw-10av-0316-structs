#include <iostream>
#include "Student.h"
std::string STUDENT::getFullName()
{
	return firstname + " "+surname;
}
