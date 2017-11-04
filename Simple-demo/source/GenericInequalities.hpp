/*
GenericInequalities.hpp
Header file containing declarations of functions

Processor directives; ensures that we do not include file twice
*/

#ifndef GenericInequalities_HPP
#define GenericInequalities_HPP

////////////////////////////////////////////////////////////////////////

// Max and Min of two numbers
template <class Numeric>
	Max(const Numeric& x, const Numeric& y);
template <class Numeric>
	Min(const Numeric& x, const Numeric& y);

// Max and Min of three numbers
template <class Numeric>
	Max(const Numeric& a, const Numeric& b, const Numeric& c);
template <class Numeric>
	Min(const Numeric& a, const Numeric& b, const Numeric& c);

////////////////////////////////////////////////////////////////////////

#endif

