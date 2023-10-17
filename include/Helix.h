#pragma once

#include "Curve3D.h"


namespace Curve
{
	class Helix : public Curve3D
	{

	private:

		// ...

	public:

		virtual Vec3 GetPoint3D(const float t) const override;

		virtual Vec3 GetFirstDerivative(const float t) const override;

	};
}