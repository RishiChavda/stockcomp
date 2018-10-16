#include <gtest/gtest.h>
#include <bond.h>

TEST (Bond, MultiplyCheck){
	Bond b1;
	b1.par = 1000.0;
	b1.interestRate = 5.3;
	b1.maturity = 100;
	EXPECT_DOUBLE_EQ(5.8888888888888893, b1.getYield(900.0));
}

