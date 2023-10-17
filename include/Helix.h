#pragma once

#include "Circle.h"


namespace Curve
{
	class Helix final : public Circle
	{

	private:

		float h; // step

	public:

		Helix(const float radius, const float h);

		virtual Vec3 GetPoint3D(const float t) const override;

		virtual Vec3 GetFirstDerivative(const float t) const override;

	};
}
