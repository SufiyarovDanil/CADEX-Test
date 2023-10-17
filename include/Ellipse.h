#pragma once

#include "Curve3D.h"


namespace Curve
{
	class Ellipse : public Curve3D
	{

	private:

		float x_radius_axis;

		float y_radius_axis;

	public:

		virtual Vec3 GetPoint3D(const float t) const override;

		virtual Vec3 GetFirstDerivative(const float t) const override;

	};
}
