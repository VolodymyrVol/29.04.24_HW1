#include "Human.h"
#include<iostream>
using namespace std;


Human::Human()
{
	name = surname = nullptr;
	age = 0;
}

Human::Human(const char* n, const char* s, int a)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);

	surname = new char[strlen(s) + 1];
	strcpy(surname, strlen(s) + 1, s);

	age = a;
}

Human::~Human()
{
	delete[] name;
	delete[] surname;
}
