#include <string>
#include <vector>
#include "student.h"
std::string STUDENT::getFullName()
{
	return firstName + " " + surname;
}