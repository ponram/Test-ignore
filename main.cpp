#include <iostream>
#include "Bond.h"
using namespace std;
using namespace boost::gregorian;
using namespace BondPricer;

int main()
{
	
	Bond d;
	
	date issue_date(2017, 8, 10);
	date maturity(2018, 8, 10);
   	double notional = 1000;
	double redemption_price = 100;
	double rate = 0.05;
	int freq = 6;

	Bond bond(notional, redemption_price, rate, freq, issue_date, maturity);
	
	return 0;
}