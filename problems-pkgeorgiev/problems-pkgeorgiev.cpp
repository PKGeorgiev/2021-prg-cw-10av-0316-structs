#include <iostream>
#include <vector>
#include <string>
#include "student.h"

using namespace std;

int main()
{
	// First & surname => your real names
	// Grade => your real number in class
	STUDENT student = { 1, "Petar", "Georgiev", 17, 12 };

	cout << student.getFullName();
}
