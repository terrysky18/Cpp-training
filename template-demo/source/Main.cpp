/**
Main.cpp

Demonstrate of implementation and use of template class functions
Both inline and explicit implementation
*/

#include <iostream>
#include "Vec2D.hpp"
#include "Vec3D.hpp"

using std::cout;
using std::endl;

int main() {
	Vec2D<double> plane;
	plane.setXY(392.947, 3141.5926);
	double x_coord = plane.getX();
	double y_coord = plane.getY();

	cout << x_coord << endl;
	cout << y_coord << endl;

	Vec3D<int> space;
	space.setX(674);
	space.setY(170);
	space.setZ(9629);

	int coord_x = space.getX();
	int coord_y = space.getY();
	int coord_z = space.getZ();

	cout << endl << coord_x << endl;
	cout << coord_y << endl;
	cout << coord_z << endl;
	return 0;
}

