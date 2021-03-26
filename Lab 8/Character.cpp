#include "Character.h"

Character::Character()
{
	name = "Sam";
	health = 100;
	attack = 1;
} 

void Character::setName(string nam)
{
	
	name = nam;
}

void Character::setAttack(int atk)
{
	attack = atk;
}

void Character::setHp(int hp)
{
	health = hp;
}
