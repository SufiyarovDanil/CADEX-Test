#include "Helix.h"


namespace Curve
{
	Vec3 Helix::GetPoint3D(const float t) const
	{
		Vec3 result = Circle::GetPoint3D(t);
		result.z = h * t;

		return result;
	}


	Vec3 Helix::GetFirstDerivative(const float t) const
	{
		return Vec3(0.f, 0.f, 0.f);
	}
}
