/*
GenericInequalities.cpp
Source code file containing bodies of functions
*/

#ifndef GenericInequalities_CPP
#define GenericInequalities_CPP

#include "GenericInequalities.hpp"

// Max and Min of two numbers

template <class Numeric>
Numeric Max(const Numeric& x, const Numeric& y)
{
	if (x>y) { return x; }
	else { return y; }
}

template <class Numeric>
Numeric Min(const Numeric& x, const Numeric& y)
{
	if (x<y) {return x; }
	else { return y; }
}

// Max and Min of three numbers

template <class Numeric>
Numeric Max(const Numeric& a, const Numeric& b, const Numeric& c)
{
	return Max<Numeric>(Max<Numeric>(a, b), c);
}

template <class Numeric>
Numeric Min(const Numeric& a, const Numeric& b, const Numeric& c)
{
	return Min<Numeric>(Min<Numeric>(a, b), c);
}
#endif

