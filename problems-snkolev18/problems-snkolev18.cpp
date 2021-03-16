#include <iostream>
#include <vector>
#include <string>
#include "student.h"
using namespace std;

int main()
{
    STUDENT student = { 1, "Stoyan", "Kolev", 16, 21 };
    cout << student.getFullName();
}
