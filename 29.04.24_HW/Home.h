#pragma once
#include "Flat.h"
class Home
{
	Flat* flats;
	int count; // ���������� ������� � ����
public:
	Home();
	Home(int c, Flat arr[]);
	~Home();
	void Print();
};

