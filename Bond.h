#ifndef BOND_H
#define BOND_H
#include <string>
#include <map>
#include "boost/date_time/gregorian/gregorian.hpp"

namespace BondPricer
{
	using namespace boost::gregorian;
	class Bond
	{
	public:
		Bond();
		Bond(double notional, 
			double redemption, double rate
			,int freq, date issue, date maturity);
		~Bond();
	private:
		double notional;
		double redemption_price;
		double rate;
		int cpn_freq_months;
		std::string bond_type;
		date issue_date;
		date maturity_date;
		std::map <date, double> cashflows;
	};

	inline Bond::Bond()
	{
		notional = 0;
		redemption_price = 0;
		rate = 0;
		cpn_freq_months = 0;
		bond_type = "Vanilla Bond";
	}

	inline Bond::~Bond() {}


}//namespace BondPricer


#endif // !BOND_H
