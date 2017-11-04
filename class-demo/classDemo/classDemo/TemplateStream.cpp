/*
TemplateStream.cpp
Source file
A C++ template class demo using the explicit instantiation model
*/

#include "stdafx.h"
#include <string>
#include <sstream>
#include "TemplateStream.h"

template <typename T>
TemplateStream<T>::TemplateStream()
{}

template <typename T>
TemplateStream<T>::~TemplateStream()
{}

template <typename T>
string TemplateSteam<T>::getString(const T& value)
{
	stringstream s;
	s << value;
	return s.str();
}
