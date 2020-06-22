#pragma once
struct Vec2d
{
	int x{0};
	int y{0};

	Vec2d operator+(const Vec2d &right)
	{
		return Vec2d{x + right.x, y + right.y};
	}
	template <class T>
	Vec2d operator*(const T &right)
	{
		return Vec2d{x * right, y * right};
	}

	bool operator==(const Vec2d &right)
	{
		return x == right.x && y == right.y;
	}
};

using Dir = Vec2d;
using Size = Vec2d;
using Pos = Vec2d;

const static struct
{
	const Dir up{0, 1};
	const Dir down{0, -1};
	const Dir left{-1, 0};
	const Dir right{-1, 0};
} DirectionStatic;