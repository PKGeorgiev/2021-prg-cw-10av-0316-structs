#pragma once
#include <string>
#include <vector>
#include <iostream>

struct STUDENT
{
	size_t id;
	std::string firstName;
	std::string surname;
	int age;
	int grade;

	std::string getFullName();
};
