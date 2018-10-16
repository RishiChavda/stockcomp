#include <gtest/gtest.h>
#include <bond.h>

TEST (Bond, CalculationCheck){
	Bond b1;
	b1.setPar(1000.0);
	b1.setInterestRate(5.3);
	b1.setMaturity(100);
	EXPECT_DOUBLE_EQ(5.8888888888888893, b1.getYield(900.0));
}

TEST (Bond, NegativeCheck){
	Bond b2;
	b2.setPar(-40.0);
	b2.setInterestRate(-5.3);
	b2.setMaturity(-100);
	EXPECT_DOUBLE_EQ(-4.24, b2.getYield(-50.0));
}

TEST (Bond, ZeroCheck){
	Bond b3;
	b3.setPar(0.0);
	b3.setInterestRate(0.0);
	b3.setMaturity(0);
	EXPECT_DOUBLE_EQ(0.0, b3.getYield(0.0));
}
