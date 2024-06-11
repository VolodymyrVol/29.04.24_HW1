#pragma once
#include "Human.h"
class Flat
{
	Human* family;
	int count; // количество людей в семье
public:
	Flat();
	Flat(int c, Human arr[]);
	~Flat();
	void Print();
};

