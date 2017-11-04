/*
templateStream.h
Header file
A demo using the inclusion model
*/

#ifndef TEMPLATESTREAM
#define TEMPLATESTREAM
#include "stdafx.h"
#include <sstream>
#include <string>

template <typename T>
class templateStream
{
public:
	templateStream() {}
	~templateStream() {}
	string getString(const T& value)
	{
		stringstream s;
		s << value;
		return s.str();
	}
private:

};

#endif // !TEMPLATESTREAM

