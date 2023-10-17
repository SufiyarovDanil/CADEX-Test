#define _USE_MATH_DEFINES
#include <cmath>
#include <algorithm>
#include <iostream>
#include <vector>
#include "Circle.h"
#include "Helix.h"
#include "Ellipse.h"


#define RAND_INT()


int main()
{
	std::srand(std::time(nullptr));

	/*
	* 2. Populate a container (e.g. vector or list) of objects of these types created
	* in random manner with random parameters
	*/
	std::vector<std::shared_ptr<Curve::Curve3D>> curves(15);

	for (auto& curve : curves)
	{
		const int curve_type = std::abs(std::rand()) % 3;

		switch (curve_type)
		{
		case 0: {
			const float radius = static_cast<float>(std::rand());

			curve = std::make_shared<Curve::Circle>(radius);

			break;
		}
		case 1: {
			const float rad_x = static_cast<float>(std::rand());
			const float rad_y = static_cast<float>(std::rand());

			curve = std::make_shared<Curve::Ellipse>(rad_x, rad_y);

			break;
		}
		case 2: {
			const float radius = static_cast<float>(std::rand());
			const float step = static_cast<float>(std::rand());

			curve = std::make_shared<Curve::Helix>(radius, step);

			break;
		}
		default:
			break;
		}
	}

	/*
	* 3. Print coordinates of points and derivatives of all curves in the container at t=PI/4.
	*/
	for (const auto& curve : curves)
	{
		if (!curve)
		{
			continue;
		}

		const Vec3 point      = curve->GetPoint3D(M_PI_4);
		const Vec3 derivative = curve->GetFirstDerivative(M_PI_4);

		std::cout << "point: " << point.x << " " << point.y << " " << point.z << std::endl;
		std::cout << "derivative: " << derivative.x << " " << derivative.y << " " << derivative.z << std::endl;
	}

	/*
	* 4. Populate a second container that would contain only circles from the first container.
	* Make sure the second container shares (i.e. not clones) circles of the first one, e.g. via pointers.
	*/
	std::vector<std::shared_ptr<Curve::Circle>> circle_container;

	for (const auto& var : curves)
	{
		if (auto circle = std::dynamic_pointer_cast<Curve::Circle>(var))
		{
			circle_container.push_back(circle);
		}
	}

	/*
	* Sort the second container in the ascending order of circles’ radii.	* That is, the first element has the smallest radius, the last - the greatest.
	*/
	std::sort(circle_container.begin(), circle_container.end(),
		[](const Curve::Circle& a, const Curve::Circle& b)
		{
			return a.GetRadius() < b.GetRadius();
		});


	return 0;
}
