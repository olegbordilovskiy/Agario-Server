#pragma once
#include "SFML/Graphics.hpp"
#include "View.h"
#include "Globals.h"

class Player {
public:
	float x;
	float y;
	float size;
	float speed;
	bool life;
	CircleShape pl_form;

	void move();

	float getPlayerCoordX();

	float getPlayerCoordY();

	float getPlayerSize();

	void eatingFood(Player p);

};
