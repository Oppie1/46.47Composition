#pragma once
#include <string>
#include "Birthday.h"
using namespace std;

class People
{
	public:
		People (string x, Birthday bo);
		void printInfo();
	private:
		string name;
		Birthday dateOfBirth;
};

