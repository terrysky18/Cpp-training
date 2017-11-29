/**
Vec3D.hpp
Header file for Vec3D template class

Demonstrate the use of separate template class function
*/

#ifndef Vec3D_HPP
#define Vec3D_HPP

template<typename T>
class Vec3D 
{
private:
	T x, y, z;
public:
	Vec3D();
	Vec3D(T new_x, T new_y, T new_z);
	~Vec3D();
	void setX(T new_x);
	void setY(T new_y);
	void setZ(T new_z);
	void setXYZ(T new_x, T new_y, T new_z);
	T getX();
	T getY();
	T getZ();
};

#endif

