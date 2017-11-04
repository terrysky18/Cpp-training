#include <iostream>
#include <string>
using namespace std;

#include "GenericInequalities.cpp"  // Needed because it is templated

int main()
{
	// Prompt the user to enter numbers
	int d1, d2;
	cout<< "Give the first number: ";
	cin>> d1;
	cout<< "Give the second number: ";
	cin>> d2;

	string c = "";
	cout<< "Which function a) Max or b) Min? ";
	cin>> c;

	if (c=="a")
	{
		cout<< "Max value is " << Max<int>(d1, d2) << endl;
	}
	else if (c=="b")
	{
		cout<< "Min value is " << Min<int>(d1, d2) << endl;
	}
	else
	{
		cout<< "Invalid selection" << endl;
	}

	long dA = 96398637604;
	long dB = -8373;
	long dC = 102356;
	cout<< endl << "Max and Min of three numbers" << endl;
	cout<< "Max value is " << Max<long>(dA, dB, dC) << endl;
	cout<< "Min value is " << Min<long>(dA, dB, dC) << endl;

	return 0;
}

