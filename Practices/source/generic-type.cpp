#include <iostream>
using namespace std;

template <class Numeric>
Numeric Max(const Numeric& x, const Numeric& y);

int main()
{
	long dA = 123456;
	long dB = 45678;

	cout<<"The bigger number is: ";
	cout<<Max<long>(dA, dB)<<endl;

	return 0;
}

template <class Numeric>
Numeric Max(const Numeric& x, const Numeric& y)
{
	if(x>y) { return x; }
	else { return y; }
}

