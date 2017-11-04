// VS-demo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Inequalities.h"

int main()
{
	using std::cout;
	using std::endl;
	using std::cin;
	using std::string;
	// Prompt user for input, cin
	double d1 = 0; double d2 = 0;
	cout << "Give the first number: ";
	cin >> d1;
	cout << "Give the second number: ";
	cin >> d2;

	string choice = "";
	cout << "Which function a) Max or b) Min? ";
	cin >> choice;

	if (choice == "a")
	{
		cout << "Max value is " << Max(d1, d2) << endl;
	}
	else if (choice == "b")
	{
		cout << "Min value is " << Min(d1, d2) << endl;
	}
	else { cout << "Invalid selection" << endl; }

	double dA = -4874.2820;
	double dB = 0.0928;
	double dC = 7583.85085860000;

	cout << endl << "Max and Min of three numbers" << endl;
	cout << "Max = " << Max(dA, dB, dC) << endl;
	cout << "Min = " << Min(dA, dB, dC) << endl;

	system("Press any key to exit...");
    return 0;
}
