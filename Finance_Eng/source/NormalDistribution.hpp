/*
NormalDistribution.hpp

Header file
A class to calculate N(x), the cumulative normal distribution

given in the link:
http://math60082.blogspot.com/2013/02/question-write-function-to-calculate-nx.html
*/

#ifndef NormalDistribution_HPP
#define NormalDistribution_HPP

class NormalDistribution
{
public:
	// constructors
	NormalDistribution();
	NormalDistribution(int step_num);
	virtual ~NormalDistribution();

	// public accessor and mutator
	void setStepNum(int step_num);
	int getStepNum();

	// public member function
	double normalDistribution(double x);

private:
	int stpNum;
};

#endif

