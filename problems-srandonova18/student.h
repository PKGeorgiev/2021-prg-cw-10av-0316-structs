#pragma once
#include <string>
#include <vector>

struct STUDENT
{
	size_t id;
	std::string firstName;
	std::string lastName;
	int age;
	int grade;

	std::string getFullName();
};
