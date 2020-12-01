#include "pch.h"
#include "Calculator.h"
#include <string>

	TEST(TDDKata, TestName) {
		ASSERT_EQ(1, 1);
		ASSERT_TRUE(true);
	}

	TEST(TDDKata, TestEmptyArgs) {
		std::string args = "";
		int expected = 0;

		Calculator Calc;
		ASSERT_EQ(Calc.Add(args), expected);
	}

	TEST(TDDKata, TestOneArg) {
		std::string args = "1";
		int expected = 1;

		Calculator Calc;
		ASSERT_EQ(Calc.Add(args), 1);
	}

	TEST(TDDKata, TestNegativeArgs) {
		std::string args = "-10,-2";
		int expected = -1;

		Calculator Calc;
		ASSERT_EQ(Calc.Add(args), expected);
	}

	TEST(TDDKata, TestTwoArgs) {
		std::string args = "1,2";
		int expected = 3;

		Calculator Calc;
		ASSERT_EQ(Calc.Add(args), expected);
	}

	TEST(TDDKata, TestThreeArgs) {
		std::string args = "1,2,3";
		int expected = 6;

		Calculator Calc;
		ASSERT_EQ(Calc.Add(args), expected);
	}

	TEST(TDDKata, TestMoreThanThreeArgs) {
		std::string args = "1,2,3,4";
		int expected = -2;

		Calculator Calc;
		ASSERT_EQ(Calc.Add(args), expected);
	}

	TEST(TDDKata, TestSymbolsArgs) {
		std::string args = "i";
		int expected = -1;

		Calculator Calc;
		ASSERT_EQ(Calc.Add(args), expected);
	}


	TEST(TDDKAta, TestCommaSeparator) {
		std::string args = "1.2";
		int expected = -1;

		Calculator Calc;
		ASSERT_EQ(Calc.Add(args), expected);
	}

	TEST(TDDKata, TestFloatArgs) {
		std::string args = "1,2.0";
		int expected = -1;

		Calculator Calc;
		ASSERT_EQ(Calc.Add(args), expected);
	}



