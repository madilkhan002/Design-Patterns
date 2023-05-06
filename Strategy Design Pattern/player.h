#pragma once
#include"strategy.h"

class player
{
public:
	strategy* Strategy;
public:
	void changeStrategy(strategy* obj)
	{
		Strategy = obj;
	}
	int swordAttack(int a, int b)
	{
		return Strategy->swordAttack(a, b);
	}
	int gunAttack(int a, int b)
	{
		return Strategy->gunAttack(a, b);
	}
};
