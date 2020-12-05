#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_7.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest72
{
	TEST_CLASS(UnitTest72)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			int rowCount = 2;
			int colCount = 3;
			int** P = new int* [colCount];
			for (int j = 0; j < colCount; j++)
				P[j] = new int[rowCount];
			P[0][0] = 1;
			P[0][1] = 2;
			P[0][2] = 4;
			
			P[1][0] = 3;
			P[1][1] = 0;
			P[1][2] = 5;

			t = rowMin(P, colCount, 0, P[0][0]);
			Assert::AreEqual(t,1);

			
		}
	};
}
