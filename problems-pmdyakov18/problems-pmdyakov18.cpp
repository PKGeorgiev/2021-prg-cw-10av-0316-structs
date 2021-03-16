#include <iostream>
#include <vector>
#include <string>
#include "student.h"

using namespace std;


int main()
{
	STUDENT student = { 1, "Petar", "Dyakov", 17, 22 };
	cout << student.getFullName();
}

