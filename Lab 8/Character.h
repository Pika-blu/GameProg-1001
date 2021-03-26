#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <time.h>

using namespace std;


class Character
{
private:
	int health=0;
	int attack=0;
	string name;
public:

	Character(); //default constructor
	void setName(string);
	void setAttack(int);
	void setHp(int);
	
	string getName() { return name; }
	int getAttack() { return attack; }
	int getHp() { return health; }
};


