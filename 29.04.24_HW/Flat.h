#pragma once
#include "Human.h"
class Flat
{
	Human* family;
	int count; // ���������� ����� � �����
public:
	Flat();
	Flat(int c, Human arr[]);
	~Flat();
	void Print();
};

