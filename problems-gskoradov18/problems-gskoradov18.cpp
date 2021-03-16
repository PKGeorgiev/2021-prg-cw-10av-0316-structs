#include <iostream>
#include<string>
#include<vector>
#include"student.h"
using namespace std;

int main()
{
	STUDENT student = { 1,"Georgi","Koradov",17,10 };
	cout << student.getFullName();
}
