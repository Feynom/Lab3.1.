#include <iostream>
#include "Fraction.h"

int main()
{
    Fraction A, B, C;

    cout << "\nNumber A" << endl;
    cin >> A;
    cout << A;

    cout << "\nNumber B" << endl;
    cin >> B;
    cout << B;

    cout << "\nNumber C" << endl;
    cin >> C;
    cout << C;


    cout << "\nA and B" << endl;
    A.ComparePairsResult(A.ComparePairs(A, B));

    cout << "\nA and C" << endl;
    A.ComparePairsResult(A.ComparePairs(A, C));

    cout << "\nB and C" << endl;
    A.ComparePairsResult(A.ComparePairs(B, C));


    return 0;
}