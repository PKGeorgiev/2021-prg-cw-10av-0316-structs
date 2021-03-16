#include <iostream>
#include <vector>
#include <string>
#include "student.h"
using namespace std;

int main()
{
    STUDENT student = { 1,"Martin","Atanasov",16,20 };
    cout << student.getFullName();
}

