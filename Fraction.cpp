#include "Fraction.h"

Fraction::Fraction()
{
	Pair::SetFirst(0);
	Pair::SetSecond(0);
	number = 0.0;
}
Fraction::Fraction(int IntegerPart = 0, int FractionalPart = 0)
{
	SetNumber(IntegerPart, FractionalPart);
}

void Fraction::SetNumber(int IntegerPart = 0, int FractionalPart = 0)
{
	Pair::SetFirst(IntegerPart);
	Pair::SetSecond(FractionalPart);
	number = stod(to_string(IntegerPart) + "." + to_string(FractionalPart));
}
double Fraction::GetNumber() const
{
	return number;
}

ostream& operator << (ostream& out, const Fraction& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Fraction& A)
{
	int first, second;
	cout << "Enter an integer part of number:"; in >> first;
	cout << "Enter a fractional part of number: "; in >> second;
	A.SetNumber(first, second);
	return in;
}
Fraction::operator string() const
{
	stringstream ss;
	cout << "Number is equal to " << GetNumber() << endl;
	return ss.str();
}

bool operator > (const Pair p1, const Pair p2)
{
	if (p1.GetFirst() > p2.GetFirst() ||
		(p1.GetFirst() == p2.GetFirst() && p1.GetSecond() > p2.GetSecond()))
		return 1;
	else
		return 0;
}
bool operator < (const Pair p1, const Pair p2)
{
	if (p1.GetFirst() < p2.GetFirst() ||
		(p1.GetFirst() == p2.GetFirst() && p1.GetSecond() < p2.GetSecond()))
		return 1;
	else
		return 0;
}
bool operator == (const Pair p1, const Pair p2)
{
	if ((p1.GetFirst() == p2.GetFirst()) &&
		(p1.GetSecond() == p2.GetSecond()))
		return 1;
	else
		return 0;
}

int Fraction::ComparePairs(const Pair p1, const Pair p2) const
{
	if (p1 > p2)
		return 1;
	if (p1 < p2)
		return 2;
	if (p1 == p2)
		return 3;
}
void Fraction::ComparePairsResult(int result)
{
	switch (result)
	{
	case 1:
		cout << "\nP1 > P2" << endl;
		break;
	case 2:
		cout << "\nP1 < P2" << endl;
		break;
	case 3:
		cout << "\nP1 = P2" << endl;
		break;
	}
}