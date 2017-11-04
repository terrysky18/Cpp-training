/*
TemplateSteam.h
Header file
A C++ template class demo using the explicit instantiation model
*/

#ifndef TemplateSteam_H
#define TemplateSteam_H

template <typename T>
class TemplateStream
{
public:
	TemplateStream();
	~TemplateStream();
	string getString(const T& value);
};

#endif // !TemplateSteam_H
