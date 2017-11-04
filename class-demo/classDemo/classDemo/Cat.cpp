#include "stdafx.h"
#include "Cat.h"
#include <iostream>

Cat::Cat(int initialAge)
{
	itsAge = initialAge;
}

Cat::~Cat()
{
}

// GetAge, public accessor function
// returns value of itsAge
int Cat::GetAge()
{
	return itsAge;
}

// SetAge, public accessor function
// set member variable to value passed
void Cat::SetAge(int age)
{
	itsAge = age;
}

// Meow member function
// parameter:  none
// return:  void
void Cat::Meow()
{
	std::cout << "Meow!" << std::endl;
}
