#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab53
{
	TEST_CLASS(UnitTestLab53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double s = (cos(0 + 1) / cos(0 + 1));
			Assert::AreEqual(s, 1.0);
		}
	};
}
