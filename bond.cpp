#include <bond.h>
const double Bond::getPar(){
	return par;
}
const void Bond::setPar(double newPar){
	par = newPar;
}

const double Bond::getInterestRate(){
	return interestRate;
}

const void Bond::setInterestRate(double newInterestRate){
	interestRate = newInterestRate;
}

const int Bond::getMaturity(){
	return maturity;
}

const void Bond::setMaturity(int newMaturity){
	maturity = newMaturity;
}

double Bond::getYield(const double marketPrice){
	if(marketPrice != 0){
		return (par*interestRate)/marketPrice;
	}
	return 0;
}
