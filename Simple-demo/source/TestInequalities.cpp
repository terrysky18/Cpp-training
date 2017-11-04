/*
TestInequalities.cpp

Main programme to test Max and Min functions
*/

#include <iostream>
#include <string>
using namespace std;

#include "Inequalities.hpp"

int main()
{
	// Prompt user for input, cin
	double d1, d2;
	cout<< "Give the first number: ";
	cin>> d1;
	cout<< "Give the second number: ";
	cin>> d2;

	string c;
	cout<< "Which function a) Max or b) Min? ";
	cin>> c;

	if (c=="a")
	{
		cout<< "Max value is " << Max(d1, d2) << endl;
	}
	else if (c=="b")
	{
		cout<< "Min valus is " << Min(d1, d2) << endl;
	}
	else
	{
		cout<< "Invalid selection" << endl;
	}

	double dA = 29075.3489;
	double dB = -70298.47;
	double dC = 572698.00;

	cout<< endl << "Max and Min of three numbers" << endl;
	cout<< "Max = " << Max(dA, dB, dC) << endl;
	cout<< "Min = " << Min(dA, dB, dC) << endl;

	return 0;
}

