#include <iostream>
#include "student.h"

using namespace std;

int main()
{
	STUDENT s={22, "Emil", "Ribarev", 16, 15};

	cout<<s.getFullName()<<endl;

	return 0;
}
