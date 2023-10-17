#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include "Helix.h"
#include "Ellipse.h"


int main()
{
	Curve::Helix helix(10.f, 2.5f);
	Curve::Ellipse ellipse(10.f, 5.5f);

	const Vec3 point = helix.GetPoint3D(M_PI * 2.f);
	//const Vec3 point = ellipse.GetPoint3D(M_PI * 2);


	std::cout << "Vec3: " << point.x << " " << point.y << " " << point.z << std::endl;

	return 0;
}
