#include <iostream>
#include <vector>
#include <string>
#include "students.h"
using namespace std;

int main()
{
    STUDENT student = { 1,"Kristian","Milanov",16,17 };

    cout << student.getFullName();
}
