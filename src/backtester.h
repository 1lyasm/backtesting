#ifndef BACKTESTER_H
#define BACKTESTER_H

#include <vector>

class Backtester {
private:
	std::vector<double> prices;

public:
	Backtester();

	void read_prices();
};

#endif
