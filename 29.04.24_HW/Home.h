#pragma once
#include "Flat.h"
class Home
{
	Flat* flats;
	int count; // количество квартир в доме
public:
	Home();
	Home(int c, Flat arr[]);
	~Home();
	void Print();
};

