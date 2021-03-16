#pragma once

#include <string>

struct STUDENT {
	size_t id;
	std::string fname, lname;
	int age, grade;

	std::string getFullName() const;
};
