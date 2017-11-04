/*
Cat.h
Header file of Cat class
*/

#ifndef Cat_H
#define Cat_H

class Cat
{
public:
	Cat(int initialAge);	// constructor
	~Cat();					// destructor
	int GetAge();			// accessor function
	void SetAge(int age);	// accessor function
	void Meow();
private:
	int itsAge;				// private member variable
};

#endif // !Cat_H
