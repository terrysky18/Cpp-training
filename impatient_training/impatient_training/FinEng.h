/*
FinEng.h

header file for Finance Engineer class
a collection of finance engineer tools
*/

#ifndef FinEng_H
#define FinEng_H

template<typename T>
class FinEng
{
public:
	FinEng();
	~FinEng();
	// sum of 2 numbers
	T Sum(T num1, T num2);
	// sum of 3 numbers
	T Sum(T num1, T num2, T num3);

};

#endif
