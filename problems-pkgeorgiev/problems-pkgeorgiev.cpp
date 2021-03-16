#include <iostream>
#include <vector>
#include <string>
#include "student.h"

using namespace std;

int main()
{
	STUDENT student = { 1 , "Georgi", "Georgiev", 17, 6 };

	cout << student.getFullName();
}
