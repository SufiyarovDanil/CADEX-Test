#pragma once

#include "Vec3.h"


namespace Curve
{
	class Curve3D
	{

	public:

		virtual Vec3 GetPoint3D(const float t) const = 0;

		virtual Vec3 GetFirstDerivative(const float t) const = 0;

		virtual ~Curve3D() = 0;

	};
}
