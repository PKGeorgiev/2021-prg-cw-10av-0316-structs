#include <iostream>
#include <vector>
#include <string>
#include "student.h"

using namespace std;

int main()
{
	STUDENT student = { 1, "Yoana", "Stoyanova", 17, 16 };

	cout << student.getFullName();
}
