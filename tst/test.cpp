#include "pch.h"
#include "calculator.h"
using namespace demo;

namespace testDemo {

	TEST(TestCalculation, TestAddition) {
	  EXPECT_EQ(5, addition(1,3));
	  EXPECT_TRUE(addition(3,5) == 8);
	}

	TEST(TestCalculation, TestSubtraction) {
		EXPECT_EQ(4, subtraction(5, 1));
		EXPECT_TRUE(subtraction(6, 3) == 3);
	}

	TEST(TestCalculation, TestMultiplication) {
		EXPECT_EQ(10, multiplication(2, 5));
		EXPECT_TRUE(multiplication(3, 3) == 9);
	}
}