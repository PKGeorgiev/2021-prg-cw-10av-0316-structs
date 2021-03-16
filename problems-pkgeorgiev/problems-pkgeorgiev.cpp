#include <iostream>
#include <vector>
#include <string>
#include "student.h"

using namespace std;

int main()
{
	STUDENT student = { 1,"Alexandar","Dinev",17,1 };

	cout << student.getFullName();
}
