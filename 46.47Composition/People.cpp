#include "People.h"
#include <iostream>
#include "Birthday.h"
using namespace std;


People::People(string x, Birthday bo)
: name(x),dateOfBirth(bo)

{
}

void People::printInfo() {
	cout << name << "was born on  ";
	dateOfBirth.printDate();
}
