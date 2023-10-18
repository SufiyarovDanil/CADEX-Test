#pragma once

#include "Curve3D.h"


namespace Curve
{
	class Circle final : public Curve3D
	{
		
	private:

		float radius;

	public:

		Circle(const float radius);

		inline float GetRadius() const { return radius; };

		virtual Vec3 GetPoint3D(const float t) const override;

		virtual Vec3 GetFirstDerivative(const float t) const override;

	};
}
