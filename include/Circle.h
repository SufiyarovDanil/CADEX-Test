#pragma once

#include "Curve3D.h"


namespace Curve
{
	class Circle : public Curve3D
	{
		
	private:

		float radius;

	public:

		Circle(const float radius);

		virtual Vec3 GetPoint3D(const float t) const override;

		virtual Vec3 GetFirstDerivative(const float t) const override;

	};
}
