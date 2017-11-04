// classDemo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <string>
#include "Cat.h"
#include "TemplateStream.h"
using namespace std;

int main()
{
	Cat Frisky(2);
	Frisky.Meow();
	cout << "Frisky is a cat at age " << Frisky.GetAge() << endl;
	Frisky.Meow();
	Frisky.SetAge(8);
	cout << "Friskly is now at age " << Frisky.GetAge() << endl;

	TemplateStream<double> myStream();
	double num = 3.1415926;
	string my_num = myStream.getString(num);

	getchar();
	//system("pause");
    return 0;
}

