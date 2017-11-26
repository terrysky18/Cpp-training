// sstream_demo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "StringConversion.h"

using std::cout;
using std::cin;
using std::endl;


int main()
{
	int myInt = 180;
	StringConversion<int> convertor;
	string result = convertor.getString(myInt);
	cout << "String value is " << result << endl;

	cin.ignore();
    return 0;
}

