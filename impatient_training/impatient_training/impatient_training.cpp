// impatient_training.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "FinEng.h"

using std::cout;
using std::cin;
using std::endl;

int SumInt();
double SumDouble();

int main()
{
	int sum1 = SumInt();
	double sum2 = SumDouble();
	cout << "Integer sum = " << sum1 << endl;
	cout << "Double sum = " << sum2 << endl;

	cin.ignore();
	cin.ignore();
    return 0;
}

int SumInt() {
	int sum = 0;
	int n = -1;
	cout << "Enter a list of numbers, terminate with 0" << endl;
	while (n != 0) {
		cin >> n;
		if (!cin) { n = 0; }
		sum = sum + n;
	}
	return sum;
}

double SumDouble() {
	double sum = 0.0;
	double n = -1.0;
	cout << "Enter a list of numbers, terminate with 0" << endl;
	while (n != 0.0) {
		cin >> n;
		if (!cin) { n = 0.0; }
		sum = sum + n;
	}
	return sum;
}

