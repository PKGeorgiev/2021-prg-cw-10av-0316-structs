#include <iostream>
#include <vector>
#include <string>
#include "student.h"
using namespace std;


int main()
{
	STUDENT student = { 1, "Radina", "Velichkova", 17, 23 };

	cout << student.getFullName();
}
