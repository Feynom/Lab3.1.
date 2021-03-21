#pragma once
#include "Pair.h"

class Fraction : public Pair   
{
private:
	double number;
public:

	Fraction();
	Fraction(int, int);

	void SetNumber(int, int);
	double GetNumber() const;

	friend ostream& operator << (ostream&, const Fraction&);
	friend istream& operator >> (istream&, Fraction&);
	operator string() const;

	friend bool operator > (const Pair p1, const Pair p2);
	friend bool operator < (const Pair p1, const Pair p2);
	friend bool operator == (const Pair p1, const Pair p2);

	int ComparePairs(const Pair p1, const Pair p2) const;
	void ComparePairsResult(int result);
};

