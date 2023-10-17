#include "Circle.h"
#include <iostream>


namespace Curve
{
	Circle::Circle(const float radius)
		:
		radius(radius)
	{
		if (radius < 0.f)
		{
			throw std::runtime_error("radius must be positive");
		}
	}


	Vec3 Circle::GetPoint3D(const float t) const
	{
		const float xt = radius * std::cosf(t);
		const float yt = radius * std::sinf(t);

		return Vec3(xt, yt, 0.f);
	}


	Vec3 Circle::GetFirstDerivative(const float t) const
	{
		return Vec3(0.f, 0.f, 0.f);
	}
}
