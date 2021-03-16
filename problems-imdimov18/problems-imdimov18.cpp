#include <iostream>
#include <vector>
#include <string>
#include "student.h"
using namespace std;

int main()
{
    STUDENT student = { 1,"Ivo","Dimov",17,13 };
    cout << student.getFullName();
}