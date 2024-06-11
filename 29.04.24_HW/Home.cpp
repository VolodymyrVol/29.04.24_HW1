#include "Home.h"
#include <iostream>
using namespace std;

Home::Home()
{
	flats = nullptr;
	count = 0;
}

Home::Home(int c, Flat arr[])
{
	count = c;
	flats = new Flat[count];
	for (int i = 0; i < count; i++)
	{
		arr[i] = flats[i];
	}
}

Home::~Home()
{
	delete[] flats;
}

void Home::Print()
{
	cout << "Familly: " << flats << endl
		<< "Count: " << count << endl << endl;
}
