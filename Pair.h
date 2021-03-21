#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Pair
{
	int first, second;

public:
	void SetFirst(int value);
	void SetSecond(int value);

	int GetFirst() const;
	int GetSecond() const;

	Pair operator ++ (int);

	Pair();
};
