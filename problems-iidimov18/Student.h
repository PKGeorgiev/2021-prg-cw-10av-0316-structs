#pragma once
#include <string>
#include <vector>
struct STUDENT {
	size_t id;
	std::string firstname;
	std::string surname;
	int age; 
	int grade;

	std::string getFullName();
};