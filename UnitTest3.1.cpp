#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab3.1/Lab3.1/Fraction.cpp"
#include "../Lab3.1/Lab3.1/Fraction.h"
#include "../Lab3.1/Lab3.1/Pair.cpp"
#include "../Lab3.1/Lab3.1/Pair.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest31
{
	TEST_CLASS(UnitTest31)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Fraction A(1, 5), B(1, 5);
			Assert::AreEqual(A.ComparePairs(A, B), 3);
		}
	};
}
