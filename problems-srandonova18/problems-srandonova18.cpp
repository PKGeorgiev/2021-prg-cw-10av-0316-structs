#include <iostream>
#include <string>
#include <vector>
#include "student.h"

using namespace std;

int main()
{
    STUDENT student = { 1, "Stanislava", "Andonova", 16, 25 };

    cout << student.getFullName();
}

