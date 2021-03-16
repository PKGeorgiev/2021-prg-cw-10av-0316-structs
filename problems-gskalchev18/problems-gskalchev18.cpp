#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include "student.h"

using namespace std;

int main()
{
    
    STUDENT student = { 1,"Georgi", "Kalchev", 17, 7 };

    cout << student.getFullName();
}
