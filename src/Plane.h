#pragma once
#ifndef __PLANE__
#define __PLANE__

#include "Sprite.h"

class Plane final : public Sprite
{
public:
	Plane();
	~Plane();

	// Life Cycle Functions
	virtual void draw() override;
	virtual void update() override;
	void setAngle(float angle);
	virtual void clean() override;

private:
	void m_buildAnimations();
	float m_angle;
};

#endif /* defined (__PLANE__) */
