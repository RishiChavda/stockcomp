#include <bond.h>

double Bond::getYield(const double marketPrice){
	return (par*interestRate)/marketPrice;
}

