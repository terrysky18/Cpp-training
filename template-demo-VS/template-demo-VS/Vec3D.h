/*
Vec3.h
Header file for Vec3D template class
Demonstrate the use of template class function in explicit instantiation*/

#pragma once
template<typename T>
class Vec3D
{
public:
	Vec3D();
	Vec3D(T newX, T newY, T newZ);
	~Vec3D();
	void setX(T newX);
	void setY(T newY);
	void setZ(T newZ);
	void setXYZ(T newX, T newY, T newZ);
	T getX();
	T getY();
	T getZ();

private:
	T x, y, z;
};
