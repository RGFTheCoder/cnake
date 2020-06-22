#pragma once
#include <iostream>
#include <fstream>
#include "./vec2d.hh"
#include "./Player.hh"
#include "./types.hh"
#include "./util.hh"

struct Player;

struct ZaWarudo //forward dec
{
	Size size;
	list<list<char>> map{
			{'#', '#', '#', '#', '#'},
			{'#', ' ', ' ', ' ', '#'},
			{'#', ' ', ' ', ' ', '#'},
			{'#', ' ', ' ', ' ', '#'},
			{'#', '#', '#', '#', '#'}};
	list<Pos> apples;
	list<Player> players;

	void newApple(uint16_t count = 1);
	ZaWarudo(string worldFileName);
	Pos getSpawnPos();
	void spawnPlayer();
};