#include <iostream>
#include <vector>
#include <string>
#include "student.h"

using namespace std;

int main()
{
    STUDENT student = { 2,"Alexander","Yanev",16 };

    cout << student.getFullName();
}
