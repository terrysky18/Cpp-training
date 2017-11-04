/*
Inequalities.cpp
Source code file containing bodies of functions
*/

#include "stdafx.h"
#include "Inequalities.h"

// Max of two numbers
double Max(double x, double y)
{
	if (x > y) { return x; }
	else { return y; }
}

// Min of two numbers
double Min(double x, double y)
{
	if (x < y) { return x; }
	else { return y; }
}

// Max of three numbers
double Max(double a, double b, double c)
{
	return Max(Max(a, b), c);
}

// Min of three numbers
double Min(double a, double b, double c)
{
	return Min(Min(a, b), c);
}
