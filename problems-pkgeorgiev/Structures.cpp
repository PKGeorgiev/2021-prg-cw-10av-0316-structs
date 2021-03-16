#include <iostream>
#include <vector>
#include <string>
#include "student.cpp"
#include "problems-pkgeorgiev.cpp"


int main()
{
	STUDENT student = { 1, "Bobi", "Ivanov", 17, 10 };

	cout << student.getFullName();
}