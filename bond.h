class Bond {
	private:
		double par;
		double interestRate;
		int maturity;
	public:
		const double getPar();
		const void setPar(double newPar);
		const double getInterestRate();
		const void setInterestRate(double newInterestRate);
		const int getMaturity();
		const void setMaturity(int newMaturity);
		double getYield(double marketPrice);
			// Return the yield value depending on the
			// marketPrice which returns the overall yield
			// for the bond by it's par and interest rate
};