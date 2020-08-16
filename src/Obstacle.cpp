#include "Obstacle.h"

#include "TextureManager.h"

Obstacle::Obstacle()
{
	TextureManager::Instance()->load("../Assets/textures/obstacle.png", "obstacle");

	const auto size = TextureManager::Instance()->getTextureSize("obstacle");
	setWidth(size.x);
	setHeight(size.y);
	getTransform()->position = glm::vec2(400.0f, 300.0f);
	getRigidBody()->velocity = glm::vec2(0, 0);
	getRigidBody()->isColliding = true;

	setType(OBSTACLE);
}



Obstacle::~Obstacle()
= default;

void Obstacle::draw()
{
	// alias for x and y
	const auto x = getTransform()->position.x;
	const auto y = getTransform()->position.y;

	// draw the target
	TextureManager::Instance()->draw("obstacle", x, y, 0, 255, true);
}

void Obstacle::update()
{
}

void Obstacle::clean()
{
}

HealthBar::HealthBar()
{
	TextureManager::Instance()->load("../Assets/textures/bg5.png", "bg5");

	const auto size = TextureManager::Instance()->getTextureSize("bg5");
	setWidth(size.x);
	setHeight(size.y);
	getTransform()->position = glm::vec2(110.0f,100.0f);
	getRigidBody()->velocity = glm::vec2(0, 0);
	getRigidBody()->isColliding = false;

	setType(OBSTACLE);
}



HealthBar::~HealthBar()
= default;

void HealthBar::draw()
{
	// alias for x and y
	const auto x = getTransform()->position.x;
	const auto y = getTransform()->position.y;

	// draw the target
	TextureManager::Instance()->draw("bg5", x, y, 0, 255, true);
}

void HealthBar::update()
{
}

void HealthBar::clean()
{
}
