#include "Pair.h"

void Pair::SetFirst(int value) { first = value; }
void Pair::SetSecond(int value) { second = value; }

int Pair::GetFirst() const { return first; }
int Pair::GetSecond() const { return second; }

Pair Pair::operator ++ (int)
{
	Pair t(*this);
	first++;
	return t;
}

Pair::Pair() { first = 0, second = 0; }
