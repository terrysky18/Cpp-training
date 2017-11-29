/*
TestEuroOption.cpp

Test programme for the European option pricing problem
*/

#include <iostream>
#include "../header/EuropeanOption.hpp"

using std::cout;
using std::cin;
using std::endl;

int main()
{	// All options are European

	// Call option on a stock
	EuropeanOption callOption;
	cout << "Call option on a stock: ";
	cout << callOption.Price() << endl;

	// Put option on a stock index
	EuropeanOption indexOption;
	indexOption.setOptType("P");
	indexOption.setCurrentPrice(100.0);
	indexOption.setStrikePrice(95.0);
	indexOption.setExpiryDate(0.5);
	indexOption.setInterestRate(0.10);
	indexOption.setVolatility(0.20);
	double q = 0.05;	// Dividend yield
	indexOption.setCostCarry(indexOption.getInterestRate() - q);

	cout << "Put option on index: ";
	cout << indexOption.Price() << endl;

	// Call and put options on a future
	EuropeanOption futureOption;
	futureOption.setOptType("P");
	futureOption.setCurrentPrice(19.0);
	futureOption.setStrikePrice(19.0);
	futureOption.setExpiryDate(0.75);
	futureOption.setInterestRate(0.10);
	futureOption.setVolatility(0.28);
	futureOption.setCostCarry(0.0);

	cout << "Put option on future: ";
	cout << futureOption.Price() << endl;

	// change over to a call option
	futureOption.toggle();
	cout << "Call option on future: ";
	cout << futureOption.Price() << endl;

	return 0;
}

