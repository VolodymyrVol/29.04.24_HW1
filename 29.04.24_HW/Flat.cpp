#include "Flat.h"
#include <iostream>
using namespace std;

Flat::Flat()
{
	family = nullptr;
	count = 0;
}

Flat::Flat(int c, Human arr[])
{
	count = c;
	family = new Human[count];
	for (int i = 0; i < count; i++)
	{
		arr[i] = family[i];
	}
}

Flat::~Flat()
{
	delete[] family;
}

void Flat::Print()
{
	cout << "Familly: " << family << endl
		<< "Count: " << count << endl << endl;
}
