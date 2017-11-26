/*
Vec3D.cpp
Implementation file
*/

#include "stdafx.h"
#include "Vec3D.h"

template<typename T>
Vec3D<T>::Vec3D()
{}

template<typename T>
Vec3D<T>::Vec3D(T newX, T newY, T newZ)
{
	x = newX;
	y = newY;
	z = newZ;
}

template<typename T>
Vec3D<T>::~Vec3D()
{}

template<typename T>
void Vec3D<T>::setX(T newX)
{
	x = newX;
}

template<typename T>
void Vec3D<T>::setY(T newY)
{
	y = newY;
}

template<typename T>
void Vec3D<T>::setZ(T newZ)
{
	z = newZ;
}

template<typename T>
void Vec3D<T>::setXYZ(T newX, T newY, T newZ)
{
	x = newX;
	y = newY;
	z = newZ;
}

template<typename T>
T Vec3D<T>::getX()
{
	return x;
}

template<typename T>
T Vec3D<T>::getY()
{
	return y;
}

template<typename T>
T Vec3D<T>::getZ()
{
	return z;
}

// explicit instantiation of template class
template class Vec3D<int>;
template class Vec3D<double>;
