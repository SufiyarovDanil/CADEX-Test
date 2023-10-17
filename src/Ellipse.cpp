#include "Ellipse.h"
#include <iostream>


namespace Curve
{
	Ellipse::Ellipse(const float x_radius_axis, const float y_radius_axis)
		:
		x_radius_axis(x_radius_axis),
		y_radius_axis(y_radius_axis)
	{
		if (x_radius_axis < 0.f || y_radius_axis < 0.f)
		{
			throw std::runtime_error("radius radii must be positive");
		}
	}

	Vec3 Ellipse::GetPoint3D(const float t) const
	{
		return Vec3(0.f, 0.f, 0.f);
	}


	Vec3 Ellipse::GetFirstDerivative(const float t) const
	{
		return Vec3(0.f, 0.f, 0.f);
	}
}
