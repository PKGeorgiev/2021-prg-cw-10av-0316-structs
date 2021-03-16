#pragma once
#include <string>
struct STUDENT
{
	int id;
	std::string firstName;
	std::string lastName;
	int age;
	int grade;

	std::string getFullName();
};