#include <iostream>
#include "student.h"
using namespace std;

int main()
{
    STUDENT student = { 1, "Iliyan", "Iliev", 16, 15 };

    cout << student.getFullName();
}
