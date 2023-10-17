#pragma once

#include "Circle.h"


namespace Curve
{
	class Helix : public Circle
	{

	public:

		virtual Vec3 GetPoint3D(const float t) const override;

		virtual Vec3 GetFirstDerivative(const float t) const override;

	};
}
