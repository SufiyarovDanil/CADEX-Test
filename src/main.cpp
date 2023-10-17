#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include "Helix.h"


int main()
{
	Curve::Helix helix(10.f, 2.f);

	for (float t = 0; t < M_PI; t += M_PI / 100.f)
	{
		const Vec3 point = helix.GetPoint3D(t);

		std::cout << "t: " << t << std::endl;
		std::cout << "Vec3: " << point.x << " " << point.y << " " << point.z << std::endl;
	}

	return 0;
}
