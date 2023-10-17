#include "Helix.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>


constexpr float PI2 = M_PI * 2.f;


namespace Curve
{
	Helix::Helix(const float radius, const float h)
		:
		Circle(radius),
		h(h)
	{
		if (h < 0.f)
		{
			throw std::runtime_error("step must be positive");
		}
	}


	Vec3 Helix::GetPoint3D(const float t) const
	{
		Vec3 result = Circle::GetPoint3D(t);

		result.z = h * t / PI2;

		return result;
	}


	Vec3 Helix::GetFirstDerivative(const float t) const
	{
		Vec3 result = Circle::GetFirstDerivative(t);

		result.z = t / PI2; // (t * h / PI2)' = t / PI2

		return result;
	}
}
