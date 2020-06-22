#include "./Player.hh"

Player::Player(){
		//constructor
};

Pos Player::getHead()
{
	return snakeParts.back(); //last part of list. yea
}
void Player::step(ZaWarudo &zaWarudo)
{
	Vec2d head = getHead();
	if (remove<Pos>(zaWarudo.apples, head))
	{
		zaWarudo.newApple();
	}
	else
	{
		// not in apples, just remove the last tail part
		snakeParts.erase(snakeParts.begin());
	}
	snakeParts.push_back(getHead() + facing); //now add head
}