#include <iostream>
#include "student.h"

using namespace std;

int main()
{
	STUDENT student = { 1, "Dimitar", "Kalchev", 16,8 };

	cout << student.getFullName();
}

