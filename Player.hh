#pragma once
#include <algorithm>
#include "./types.hh"
#include "./util.hh"
#include "./vec2d.hh"
#include "./ZaWarudo.hh"

struct ZaWarudo;

struct Player
{

	list<Pos> snakeParts{};

	Vec2d facing{0, 0};

	bool alive;

	Player();

	Pos getHead();

	void step(ZaWarudo &zaWarudo);
};