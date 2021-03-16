#include <iostream>
#include <vector>
#include <string>
#include "student.h"

using namespace std;

int main()
{
    STUDENT student = { 1, "Magi", "Omayska", 17, 18 };

    cout << student.getFullName();
}
