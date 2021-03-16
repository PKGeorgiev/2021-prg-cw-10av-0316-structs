#include <iostream>
#include <vector>
#include <string>
#include "student.cpp"
#include "Structures.cpp"

using namespace std;

struct STUDENT
{
    std::string firstName;
    std::string surname;
    int age;
    int grade;

    std::string getFullName()
    {
        return firstName + " " + surname;
    }
};

int main()
{

}
