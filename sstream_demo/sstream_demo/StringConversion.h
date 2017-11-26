#pragma once

#include "stdafx.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

template<typename T>
class StringConversion
{
public:

	StringConversion()
	{
	}

	string getString(const T& value)
	{
		my_value = value;
		stringstream ss;
		ss << my_value;
		return ss.str();
	}

	~StringConversion()
	{
	}

private:
	T my_value;
};

