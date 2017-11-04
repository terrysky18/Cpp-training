/**
Vec3D.cpp

Definition file of Vec3D
Demonstrate the use of template class functions
*/

#include "Vec3D.hpp"

template<typename T>
Vec3D<T>::Vec3D()
{}

template<typename T>
Vec3D<T>::Vec3D(T new_x, T new_y, T new_z)
{
	x = new_x;
	y = new_y;
	z = new_z;
}

template<typename T>
void Vec3D<T>::setX(T new_x)
{
	x = new_x;
}

template<typename T>
void Vec3D<T>::setY(T new_y)
{
	y = new_y;
}

template<typename T>
void Vec3D<T>::setZ(T new_z)
{
	z = new_z;
}

template<typename T>
void Vec3D<T>::setXYZ(T new_x, T new_y, T new_z)
{
	x = new_x;
	y = new_y;
	z = new_z;
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

// explicit instantiations
template class Vec3D<int>;
template class Vec3D<double>;

