#pragma once
#include <string>
struct STUDENT
{
	size_t id;
	std::string firstName;
	std::string lastName;
	int age;
	int grade;

	std::string getFullName()
	{
		return firstName + " " + lastName;
	}
};