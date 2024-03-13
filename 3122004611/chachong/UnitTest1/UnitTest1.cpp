#include "pch.h"
#include "CppUnitTest.h"
#include"../chachong/distinguish.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		Distinguish test1;
		TEST_METHOD(TestMethod1)
		{
			string origin = "我是小红！";
			string another = "我是大红";
			
			Assert::AreEqual(0.6, test1.CaculateSimularity(origin, another));
		}
	};
}
