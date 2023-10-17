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
		const float xt = x_radius_axis * std::cosf(t);
		const float yt = y_radius_axis * std::sinf(t);

		return Vec3(xt, yt, 0.f);
	}


	Vec3 Ellipse::GetFirstDerivative(const float t) const
	{
		const float dx_dt = x_radius_axis * -std::sinf(t); // cos(x)' = -sin(x)
		const float dy_dt = y_radius_axis * std::cosf(t);  // sin(x)' = cos(x)

		return Vec3(dx_dt, dy_dt, 0.f);
	}
}
