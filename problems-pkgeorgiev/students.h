#pragma once
struct STUDENT
{
	size_t id;
	std::string firstName;
	std::string surname;
	int age;
	int grade;

	std::string getFullName();
};