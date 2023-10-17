#include "Helix.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>


constexpr float PI2 = M_PI * 2.f;


namespace Curve
{
	Helix::Helix(const float radius, const float h)
		:
		radius(radius),
		h(h)
	{
		if (h < 0.f || radius < 0.f)
		{
			throw std::runtime_error("step must be positive");
		}
	}


	Vec3 Helix::GetPoint3D(const float t) const
	{
		const float xt = radius * std::cosf(t);
		const float yt = radius * std::sinf(t);
		const float zt = t * h / PI2;

		return Vec3(xt, yt, zt);
	}


	Vec3 Helix::GetFirstDerivative(const float t) const
	{
		const float dx_dt = radius * -std::sinf(t); // cos(x)' = -sin(x)
		const float dy_dt = radius * std::cosf(t);  // sin(x)' = cos(x)
		const float dz_dt = h / PI2;                // (t * h / PI2)' = h / PI2

		return Vec3(dx_dt, dy_dt, dz_dt);
	}
}
