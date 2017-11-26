// template-demo-VS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Vec3D.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{
	Vec3D<double> space;
	space.setXYZ(4802.802, -586.068, 0.718923);
	double coord_x = space.getX();
	double coord_y = space.getY();
	double coord_z = space.getZ();

	cout << coord_x << endl;
	cout << coord_y << endl;
	cout << coord_z << endl;

	cin.ignore();
    return 0;
}

