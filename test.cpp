#include "pch.h"
#include "CppUnitTest.h"
#include "Triangle.cpp"
#include <assert.h>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

//////////////////////////////////////////////////////////////////
//	Locations of seeded defects in 'triangle.h'					//
//		#1 - line 151	'match + 1' should be 'match + 2'		//
//		#2 - line 154	'match + 1' should be 'match + 3'		//
//		#3 - line 190	'a + b > c' should be 'a + b <= c'		//
//		#4 - line 204	'a + c > b' should be 'a + c <= b'		//
//		#5 - line 218	'b + c > a' should be 'b + c <= a'		//
//////////////////////////////////////////////////////////////////

namespace test
{
	TEST_CLASS(seededDefects)
	{
	public:

		TEST_METHOD(seed1) {
			Triangle T(101, 101, 101);
			Assert::IsTrue(T.getResult() == Result::Equilateral);

		}
		TEST_METHOD(seed2) {
			Triangle T(101, 101, 50);
			Assert::IsTrue(T.getResult() == Result::Isosceles);

		}
		TEST_METHOD(seed3) {
			Triangle T(101, 50, 101);
			Assert::IsTrue(T.getResult() == Result::Isosceles);

		}
		TEST_METHOD(seed4) {
			Triangle T(49, 50, 101);
			Assert::IsTrue(T.getResult() == Result::Isosceles);

		}
		TEST_METHOD(seed5) {
			Triangle T(50, 50, 101);
			Assert::IsTrue(T.getResult() == Result::Equilateral);

		}
	};
	TEST_CLASS(allcases)
	{
	public:

		TEST_METHOD(minM_minM_minM) {
			Triangle T(0, 0, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_minM_min) {
			Triangle T(0, 0, 1);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_minM_minP) {
			Triangle T(0, 0, 2);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_minM_mid) {
			Triangle T(0, 0, 100);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_minM_maxM) {
			Triangle T(0, 0, 199);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_minM_max) {
			Triangle T(0, 0, 200);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_minM_maxP) {
			Triangle T(0, 0, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_min_minM) {
			Triangle T(0, 1, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_min_min) {
			Triangle T(0, 1, 1);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_min_minP) {
			Triangle T(0, 1, 2);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_min_mid) {
			Triangle T(0, 1, 100);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_min_maxM) {
			Triangle T(0, 1, 199);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_min_max) {
			Triangle T(0, 1, 200);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_min_maxP) {
			Triangle T(0, 1, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_minP_minM) {
			Triangle T(0, 2, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_minP_min) {
			Triangle T(0, 2, 1);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_minP_minP) {
			Triangle T(0, 2, 2);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_minP_mid) {
			Triangle T(0, 2, 100);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_minP_maxM) {
			Triangle T(0, 2, 199);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_minP_max) {
			Triangle T(0, 2, 200);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_minP_maxP) {
			Triangle T(0, 2, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_mid_minM) {
			Triangle T(0, 100, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_mid_min) {
			Triangle T(0, 100, 1);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_mid_minP) {
			Triangle T(0, 100, 2);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_mid_mid) {
			Triangle T(0, 100, 100);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_mid_maxM) {
			Triangle T(0, 100, 199);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_mid_max) {
			Triangle T(0, 100, 200);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_mid_maxP) {
			Triangle T(0, 100, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_maxM_minM) {
			Triangle T(0, 199, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_maxM_min) {
			Triangle T(0, 199, 1);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_maxM_minP) {
			Triangle T(0, 199, 2);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_maxM_mid) {
			Triangle T(0, 199, 100);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_maxM_maxM) {
			Triangle T(0, 199, 199);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_maxM_max) {
			Triangle T(0, 199, 200);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_maxM_maxP) {
			Triangle T(0, 199, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_max_minM) {
			Triangle T(0, 200, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_max_min) {
			Triangle T(0, 200, 1);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_max_minP) {
			Triangle T(0, 200, 2);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_max_mid) {
			Triangle T(0, 200, 100);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_max_maxM) {
			Triangle T(0, 200, 199);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_max_max) {
			Triangle T(0, 200, 200);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_max_maxP) {
			Triangle T(0, 200, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_maxP_minM) {
			Triangle T(0, 201, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_maxP_min) {
			Triangle T(0, 201, 1);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_maxP_minP) {
			Triangle T(0, 201, 2);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_maxP_mid) {
			Triangle T(0, 201, 100);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_maxP_maxM) {
			Triangle T(0, 201, 199);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_maxP_max) {
			Triangle T(0, 201, 200);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minM_maxP_maxP) {
			Triangle T(0, 201, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(min_minM_minM) {
			Triangle T(1, 0, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(min_minM_min) {
			Triangle T(1, 0, 1);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(min_minM_minP) {
			Triangle T(1, 0, 2);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(min_minM_mid) {
			Triangle T(1, 0, 100);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(min_minM_maxM) {
			Triangle T(1, 0, 199);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(min_minM_max) {
			Triangle T(1, 0, 200);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(min_minM_maxP) {
			Triangle T(1, 0, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(min_min_minM) {
			Triangle T(1, 1, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(min_min_min) {
			Triangle T(1, 1, 1);
			Assert::IsTrue(T.getResult() == Result::Equilateral);
		}

		TEST_METHOD(min_min_minP) {
			Triangle T(1, 1, 2);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(min_min_mid) {
			Triangle T(1, 1, 100);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(min_min_maxM) {
			Triangle T(1, 1, 199);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(min_min_max) {
			Triangle T(1, 1, 200);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(min_min_maxP) {
			Triangle T(1, 1, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(min_minP_minM) {
			Triangle T(1, 2, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(min_minP_min) {
			Triangle T(1, 2, 1);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(min_minP_minP) {
			Triangle T(1, 2, 2);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(min_minP_mid) {
			Triangle T(1, 2, 100);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(min_minP_maxM) {
			Triangle T(1, 2, 199);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(min_minP_max) {
			Triangle T(1, 2, 200);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(min_minP_maxP) {
			Triangle T(1, 2, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(min_mid_minM) {
			Triangle T(1, 100, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(min_mid_min) {
			Triangle T(1, 100, 1);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(min_mid_minP) {
			Triangle T(1, 100, 2);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(min_mid_mid) {
			Triangle T(1, 100, 100);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(min_mid_maxM) {
			Triangle T(1, 100, 199);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(min_mid_max) {
			Triangle T(1, 100, 200);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(min_mid_maxP) {
			Triangle T(1, 100, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(min_maxM_minM) {
			Triangle T(1, 199, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(min_maxM_min) {
			Triangle T(1, 199, 1);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(min_maxM_minP) {
			Triangle T(1, 199, 2);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(min_maxM_mid) {
			Triangle T(1, 199, 100);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(min_maxM_maxM) {
			Triangle T(1, 199, 199);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(min_maxM_max) {
			Triangle T(1, 199, 200);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(min_maxM_maxP) {
			Triangle T(1, 199, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(min_max_minM) {
			Triangle T(1, 200, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(min_max_min) {
			Triangle T(1, 200, 1);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(min_max_minP) {
			Triangle T(1, 200, 2);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(min_max_mid) {
			Triangle T(1, 200, 100);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(min_max_maxM) {
			Triangle T(1, 200, 199);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(min_max_max) {
			Triangle T(1, 200, 200);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(min_max_maxP) {
			Triangle T(1, 200, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(min_maxP_minM) {
			Triangle T(1, 201, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(min_maxP_min) {
			Triangle T(1, 201, 1);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(min_maxP_minP) {
			Triangle T(1, 201, 2);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(min_maxP_mid) {
			Triangle T(1, 201, 100);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(min_maxP_maxM) {
			Triangle T(1, 201, 199);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(min_maxP_max) {
			Triangle T(1, 201, 200);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(min_maxP_maxP) {
			Triangle T(1, 201, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minP_minM_minM) {
			Triangle T(2, 0, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minP_minM_min) {
			Triangle T(2, 0, 1);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minP_minM_minP) {
			Triangle T(2, 0, 2);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minP_minM_mid) {
			Triangle T(2, 0, 100);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minP_minM_maxM) {
			Triangle T(2, 0, 199);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minP_minM_max) {
			Triangle T(2, 0, 200);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minP_minM_maxP) {
			Triangle T(2, 0, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minP_min_minM) {
			Triangle T(2, 1, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minP_min_min) {
			Triangle T(2, 1, 1);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(minP_min_minP) {
			Triangle T(2, 1, 2);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(minP_min_mid) {
			Triangle T(2, 1, 100);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(minP_min_maxM) {
			Triangle T(2, 1, 199);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(minP_min_max) {
			Triangle T(2, 1, 200);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(minP_min_maxP) {
			Triangle T(2, 1, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minP_minP_minM) {
			Triangle T(2, 2, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minP_minP_min) {
			Triangle T(2, 2, 1);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(minP_minP_minP) {
			Triangle T(2, 2, 2);
			Assert::IsTrue(T.getResult() == Result::Equilateral);
		}

		TEST_METHOD(minP_minP_mid) {
			Triangle T(2, 2, 100);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(minP_minP_maxM) {
			Triangle T(2, 2, 199);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(minP_minP_max) {
			Triangle T(2, 2, 200);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(minP_minP_maxP) {
			Triangle T(2, 2, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minP_mid_minM) {
			Triangle T(2, 100, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minP_mid_min) {
			Triangle T(2, 100, 1);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(minP_mid_minP) {
			Triangle T(2, 100, 2);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(minP_mid_mid) {
			Triangle T(2, 100, 100);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(minP_mid_maxM) {
			Triangle T(2, 100, 199);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(minP_mid_max) {
			Triangle T(2, 100, 200);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(minP_mid_maxP) {
			Triangle T(2, 100, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minP_maxM_minM) {
			Triangle T(2, 199, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minP_maxM_min) {
			Triangle T(2, 199, 1);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(minP_maxM_minP) {
			Triangle T(2, 199, 2);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(minP_maxM_mid) {
			Triangle T(2, 199, 100);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(minP_maxM_maxM) {
			Triangle T(2, 199, 199);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(minP_maxM_max) {
			Triangle T(2, 199, 200);
			Assert::IsTrue(T.getResult() == Result::Scalene);
		}

		TEST_METHOD(minP_maxM_maxP) {
			Triangle T(2, 199, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minP_max_minM) {
			Triangle T(2, 200, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minP_max_min) {
			Triangle T(2, 200, 1);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(minP_max_minP) {
			Triangle T(2, 200, 2);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(minP_max_mid) {
			Triangle T(2, 200, 100);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(minP_max_maxM) {
			Triangle T(2, 200, 199);
			Assert::IsTrue(T.getResult() == Result::Scalene);
		}

		TEST_METHOD(minP_max_max) {
			Triangle T(2, 200, 200);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(minP_max_maxP) {
			Triangle T(2, 200, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minP_maxP_minM) {
			Triangle T(2, 201, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minP_maxP_min) {
			Triangle T(2, 201, 1);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minP_maxP_minP) {
			Triangle T(2, 201, 2);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minP_maxP_mid) {
			Triangle T(2, 201, 100);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minP_maxP_maxM) {
			Triangle T(2, 201, 199);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minP_maxP_max) {
			Triangle T(2, 201, 200);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(minP_maxP_maxP) {
			Triangle T(2, 201, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(mid_minM_minM) {
			Triangle T(100, 0, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(mid_minM_min) {
			Triangle T(100, 0, 1);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(mid_minM_minP) {
			Triangle T(100, 0, 2);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(mid_minM_mid) {
			Triangle T(100, 0, 100);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(mid_minM_maxM) {
			Triangle T(100, 0, 199);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(mid_minM_max) {
			Triangle T(100, 0, 200);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(mid_minM_maxP) {
			Triangle T(100, 0, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(mid_min_minM) {
			Triangle T(100, 1, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(mid_min_min) {
			Triangle T(100, 1, 1);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(mid_min_minP) {
			Triangle T(100, 1, 2);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(mid_min_mid) {
			Triangle T(100, 1, 100);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(mid_min_maxM) {
			Triangle T(100, 1, 199);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(mid_min_max) {
			Triangle T(100, 1, 200);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(mid_min_maxP) {
			Triangle T(100, 1, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(mid_minP_minM) {
			Triangle T(100, 2, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(mid_minP_min) {
			Triangle T(100, 2, 1);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(mid_minP_minP) {
			Triangle T(100, 2, 2);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(mid_minP_mid) {
			Triangle T(100, 2, 100);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(mid_minP_maxM) {
			Triangle T(100, 2, 199);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(mid_minP_max) {
			Triangle T(100, 2, 200);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(mid_minP_maxP) {
			Triangle T(100, 2, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(mid_mid_minM) {
			Triangle T(100, 100, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(mid_mid_min) {
			Triangle T(100, 100, 1);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(mid_mid_minP) {
			Triangle T(100, 100, 2);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(mid_mid_mid) {
			Triangle T(100, 100, 100);
			Assert::IsTrue(T.getResult() == Result::Equilateral);
		}

		TEST_METHOD(mid_mid_maxM) {
			Triangle T(100, 100, 199);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(mid_mid_max) {
			Triangle T(100, 100, 200);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(mid_mid_maxP) {
			Triangle T(100, 100, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(mid_maxM_minM) {
			Triangle T(100, 199, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(mid_maxM_min) {
			Triangle T(100, 199, 1);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(mid_maxM_minP) {
			Triangle T(100, 199, 2);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(mid_maxM_mid) {
			Triangle T(100, 199, 100);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(mid_maxM_maxM) {
			Triangle T(100, 199, 199);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(mid_maxM_max) {
			Triangle T(100, 199, 200);
			Assert::IsTrue(T.getResult() == Result::Scalene);
		}

		TEST_METHOD(mid_maxM_maxP) {
			Triangle T(100, 199, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(mid_max_minM) {
			Triangle T(100, 200, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(mid_max_min) {
			Triangle T(100, 200, 1);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(mid_max_minP) {
			Triangle T(100, 200, 2);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(mid_max_mid) {
			Triangle T(100, 200, 100);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(mid_max_maxM) {
			Triangle T(100, 200, 199);
			Assert::IsTrue(T.getResult() == Result::Scalene);
		}

		TEST_METHOD(mid_max_max) {
			Triangle T(100, 200, 200);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(mid_max_maxP) {
			Triangle T(100, 200, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(mid_maxP_minM) {
			Triangle T(100, 201, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(mid_maxP_min) {
			Triangle T(100, 201, 1);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(mid_maxP_minP) {
			Triangle T(100, 201, 2);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(mid_maxP_mid) {
			Triangle T(100, 201, 100);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(mid_maxP_maxM) {
			Triangle T(100, 201, 199);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(mid_maxP_max) {
			Triangle T(100, 201, 200);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(mid_maxP_maxP) {
			Triangle T(100, 201, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxM_minM_minM) {
			Triangle T(199, 0, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxM_minM_min) {
			Triangle T(199, 0, 1);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxM_minM_minP) {
			Triangle T(199, 0, 2);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxM_minM_mid) {
			Triangle T(199, 0, 100);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxM_minM_maxM) {
			Triangle T(199, 0, 199);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxM_minM_max) {
			Triangle T(199, 0, 200);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxM_minM_maxP) {
			Triangle T(199, 0, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxM_min_minM) {
			Triangle T(199, 1, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxM_min_min) {
			Triangle T(199, 1, 1);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(maxM_min_minP) {
			Triangle T(199, 1, 2);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(maxM_min_mid) {
			Triangle T(199, 1, 100);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(maxM_min_maxM) {
			Triangle T(199, 1, 199);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(maxM_min_max) {
			Triangle T(199, 1, 200);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(maxM_min_maxP) {
			Triangle T(199, 1, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxM_minP_minM) {
			Triangle T(199, 2, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxM_minP_min) {
			Triangle T(199, 2, 1);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(maxM_minP_minP) {
			Triangle T(199, 2, 2);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(maxM_minP_mid) {
			Triangle T(199, 2, 100);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(maxM_minP_maxM) {
			Triangle T(199, 2, 199);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(maxM_minP_max) {
			Triangle T(199, 2, 200);
			Assert::IsTrue(T.getResult() == Result::Scalene);
		}

		TEST_METHOD(maxM_minP_maxP) {
			Triangle T(199, 2, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxM_mid_minM) {
			Triangle T(199, 100, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxM_mid_min) {
			Triangle T(199, 100, 1);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(maxM_mid_minP) {
			Triangle T(199, 100, 2);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(maxM_mid_mid) {
			Triangle T(199, 100, 100);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(maxM_mid_maxM) {
			Triangle T(199, 100, 199);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(maxM_mid_max) {
			Triangle T(199, 100, 200);
			Assert::IsTrue(T.getResult() == Result::Scalene);
		}

		TEST_METHOD(maxM_mid_maxP) {
			Triangle T(199, 100, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxM_maxM_minM) {
			Triangle T(199, 199, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxM_maxM_min) {
			Triangle T(199, 199, 1);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(maxM_maxM_minP) {
			Triangle T(199, 199, 2);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(maxM_maxM_mid) {
			Triangle T(199, 199, 100);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(maxM_maxM_maxM) {
			Triangle T(199, 199, 199);
			Assert::IsTrue(T.getResult() == Result::Equilateral);
		}

		TEST_METHOD(maxM_maxM_max) {
			Triangle T(199, 199, 200);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(maxM_maxM_maxP) {
			Triangle T(199, 199, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxM_max_minM) {
			Triangle T(199, 200, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxM_max_min) {
			Triangle T(199, 200, 1);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(maxM_max_minP) {
			Triangle T(199, 200, 2);
			Assert::IsTrue(T.getResult() == Result::Scalene);
		}

		TEST_METHOD(maxM_max_mid) {
			Triangle T(199, 200, 100);
			Assert::IsTrue(T.getResult() == Result::Scalene);
		}

		TEST_METHOD(maxM_max_maxM) {
			Triangle T(199, 200, 199);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(maxM_max_max) {
			Triangle T(199, 200, 200);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(maxM_max_maxP) {
			Triangle T(199, 200, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxM_maxP_minM) {
			Triangle T(199, 201, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxM_maxP_min) {
			Triangle T(199, 201, 1);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxM_maxP_minP) {
			Triangle T(199, 201, 2);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxM_maxP_mid) {
			Triangle T(199, 201, 100);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxM_maxP_maxM) {
			Triangle T(199, 201, 199);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxM_maxP_max) {
			Triangle T(199, 201, 200);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxM_maxP_maxP) {
			Triangle T(199, 201, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(max_minM_minM) {
			Triangle T(200, 0, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(max_minM_min) {
			Triangle T(200, 0, 1);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(max_minM_minP) {
			Triangle T(200, 0, 2);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(max_minM_mid) {
			Triangle T(200, 0, 100);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(max_minM_maxM) {
			Triangle T(200, 0, 199);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(max_minM_max) {
			Triangle T(200, 0, 200);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(max_minM_maxP) {
			Triangle T(200, 0, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(max_min_minM) {
			Triangle T(200, 1, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(max_min_min) {
			Triangle T(200, 1, 1);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(max_min_minP) {
			Triangle T(200, 1, 2);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(max_min_mid) {
			Triangle T(200, 1, 100);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(max_min_maxM) {
			Triangle T(200, 1, 199);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(max_min_max) {
			Triangle T(200, 1, 200);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(max_min_maxP) {
			Triangle T(200, 1, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(max_minP_minM) {
			Triangle T(200, 2, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(max_minP_min) {
			Triangle T(200, 2, 1);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(max_minP_minP) {
			Triangle T(200, 2, 2);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(max_minP_mid) {
			Triangle T(200, 2, 100);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(max_minP_maxM) {
			Triangle T(200, 2, 199);
			Assert::IsTrue(T.getResult() == Result::Scalene);
		}

		TEST_METHOD(max_minP_max) {
			Triangle T(200, 2, 200);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(max_minP_maxP) {
			Triangle T(200, 2, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(max_mid_minM) {
			Triangle T(200, 100, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(max_mid_min) {
			Triangle T(200, 100, 1);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(max_mid_minP) {
			Triangle T(200, 100, 2);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(max_mid_mid) {
			Triangle T(200, 100, 100);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(max_mid_maxM) {
			Triangle T(200, 100, 199);
			Assert::IsTrue(T.getResult() == Result::Scalene);
		}

		TEST_METHOD(max_mid_max) {
			Triangle T(200, 100, 200);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(max_mid_maxP) {
			Triangle T(200, 100, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(max_maxM_minM) {
			Triangle T(200, 199, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(max_maxM_min) {
			Triangle T(200, 199, 1);
			Assert::IsTrue(T.getResult() == Result::NotATriangle);
		}

		TEST_METHOD(max_maxM_minP) {
			Triangle T(200, 199, 2);
			Assert::IsTrue(T.getResult() == Result::Scalene);
		}

		TEST_METHOD(max_maxM_mid) {
			Triangle T(200, 199, 100);
			Assert::IsTrue(T.getResult() == Result::Scalene);
		}

		TEST_METHOD(max_maxM_maxM) {
			Triangle T(200, 199, 199);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(max_maxM_max) {
			Triangle T(200, 199, 200);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(max_maxM_maxP) {
			Triangle T(200, 199, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(max_max_minM) {
			Triangle T(200, 200, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(max_max_min) {
			Triangle T(200, 200, 1);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(max_max_minP) {
			Triangle T(200, 200, 2);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(max_max_mid) {
			Triangle T(200, 200, 100);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(max_max_maxM) {
			Triangle T(200, 200, 199);
			Assert::IsTrue(T.getResult() == Result::Isosceles);
		}

		TEST_METHOD(max_max_max) {
			Triangle T(200, 200, 200);
			Assert::IsTrue(T.getResult() == Result::Equilateral);
		}

		TEST_METHOD(max_max_maxP) {
			Triangle T(200, 200, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(max_maxP_minM) {
			Triangle T(200, 201, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(max_maxP_min) {
			Triangle T(200, 201, 1);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(max_maxP_minP) {
			Triangle T(200, 201, 2);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(max_maxP_mid) {
			Triangle T(200, 201, 100);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(max_maxP_maxM) {
			Triangle T(200, 201, 199);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(max_maxP_max) {
			Triangle T(200, 201, 200);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(max_maxP_maxP) {
			Triangle T(200, 201, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_minM_minM) {
			Triangle T(201, 0, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_minM_min) {
			Triangle T(201, 0, 1);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_minM_minP) {
			Triangle T(201, 0, 2);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_minM_mid) {
			Triangle T(201, 0, 100);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_minM_maxM) {
			Triangle T(201, 0, 199);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_minM_max) {
			Triangle T(201, 0, 200);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_minM_maxP) {
			Triangle T(201, 0, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_min_minM) {
			Triangle T(201, 1, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_min_min) {
			Triangle T(201, 1, 1);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_min_minP) {
			Triangle T(201, 1, 2);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_min_mid) {
			Triangle T(201, 1, 100);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_min_maxM) {
			Triangle T(201, 1, 199);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_min_max) {
			Triangle T(201, 1, 200);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_min_maxP) {
			Triangle T(201, 1, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_minP_minM) {
			Triangle T(201, 2, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_minP_min) {
			Triangle T(201, 2, 1);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_minP_minP) {
			Triangle T(201, 2, 2);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_minP_mid) {
			Triangle T(201, 2, 100);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_minP_maxM) {
			Triangle T(201, 2, 199);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_minP_max) {
			Triangle T(201, 2, 200);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_minP_maxP) {
			Triangle T(201, 2, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_mid_minM) {
			Triangle T(201, 100, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_mid_min) {
			Triangle T(201, 100, 1);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_mid_minP) {
			Triangle T(201, 100, 2);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_mid_mid) {
			Triangle T(201, 100, 100);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_mid_maxM) {
			Triangle T(201, 100, 199);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_mid_max) {
			Triangle T(201, 100, 200);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_mid_maxP) {
			Triangle T(201, 100, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_maxM_minM) {
			Triangle T(201, 199, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_maxM_min) {
			Triangle T(201, 199, 1);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_maxM_minP) {
			Triangle T(201, 199, 2);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_maxM_mid) {
			Triangle T(201, 199, 100);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_maxM_maxM) {
			Triangle T(201, 199, 199);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_maxM_max) {
			Triangle T(201, 199, 200);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_maxM_maxP) {
			Triangle T(201, 199, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_max_minM) {
			Triangle T(201, 200, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_max_min) {
			Triangle T(201, 200, 1);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_max_minP) {
			Triangle T(201, 200, 2);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_max_mid) {
			Triangle T(201, 200, 100);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_max_maxM) {
			Triangle T(201, 200, 199);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_max_max) {
			Triangle T(201, 200, 200);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_max_maxP) {
			Triangle T(201, 200, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_maxP_minM) {
			Triangle T(201, 201, 0);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_maxP_min) {
			Triangle T(201, 201, 1);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_maxP_minP) {
			Triangle T(201, 201, 2);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_maxP_mid) {
			Triangle T(201, 201, 100);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_maxP_maxM) {
			Triangle T(201, 201, 199);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_maxP_max) {
			Triangle T(201, 201, 200);
			Assert::IsTrue(T.getResult() == Result::Error);
		}

		TEST_METHOD(maxP_maxP_maxP) {
			Triangle T(201, 201, 201);
			Assert::IsTrue(T.getResult() == Result::Error);
		}




	};
}
