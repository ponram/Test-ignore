#include "Bond.h"

namespace BondPricer
{

	Bond::Bond(double notional,
		double redemption, double rate
		, int freq, date issue, date maturity)
		:notional (notional)
		,redemption_price(redemption)
		,rate(rate)
		,cpn_freq_months(freq)
		,issue_date(issue)
		,maturity_date(maturity)
	{
		months m_freq(freq); //create month object 
		date cashflow_date(issue+m_freq); //First Cpn payment

		while (cashflow_date <= maturity)
		{
			cashflows.insert(std::make_pair(cashflow_date, rate*redemption));
			cashflow_date += m_freq;
		}
	}

}//namespace BondPricer
