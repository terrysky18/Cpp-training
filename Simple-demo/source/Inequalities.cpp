/*
Inequalities.cpp
Source code file containing bodies of functions
*/

#include "Inequalities.hpp"

// Max and Min of two numbers

double Max(double x, double y)
{
	if (x>y) { return x; }
	else { return y; }
}

double Min(double x, double y)
{
	if (x<y) {return x; }
	else { return y; }
}

// Max and Min of three numbers

double Max(double a, double b, double c)
{
	return Max(Max(a, b), c);
}

double Min(double a, double b, double c)
{
	return Min(Min(a, b), c);
}

