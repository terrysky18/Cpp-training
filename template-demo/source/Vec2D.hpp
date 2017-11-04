/**
Vec2D.hpp
Header file for Vec2D template class

Demonstrate the use of inline function implementation
*/

#ifndef Vec2D_HPP
#define Vec2D_HPP

template<typename T>
class Vec2D 
{
private:
	T x, y;
public:
	Vec2D() {};
	Vec2D(T new_x, T new_y)
	{
		x = new_x;
		y = new_y;
	}

	void setXY(T new_x, T new_y)
	{
		x = new_x;
		y = new_y;
	}

	T getX()
	{ return x; }

	T getY()
	{ return y; }
};

#endif

