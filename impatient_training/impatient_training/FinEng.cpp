#include "stdafx.h"
#include "FinEng.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

template<typename T>
FinEng<T>::FinEng()
{
}

template<typename T>
FinEng<T>::~FinEng()
{
}

template<typename T>
T FinEng<T>::Sum(T num1, T num2)
{ return num1 + num2; }

template<typename T>
T FinEng<T>::Sum(T num1, T num2, T num3)
{ return Sum(num1, num2) + num3; }


// explicit instantiation
template class FinEng<int>;
template class FinEng<long>;
template class FinEng<float>;
template class FinEng<double>;
