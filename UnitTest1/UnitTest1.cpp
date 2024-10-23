#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.2/5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double x = 1.0;
			double a = 1.0;
			int n = 1;

			A(x, n, a);

			double expected = (-1) * x * x / (2 * n * (2 * n - 1));

			Assert::AreEqual(expected, a, 0.0001, L"Error in first term calculation");
	};
}