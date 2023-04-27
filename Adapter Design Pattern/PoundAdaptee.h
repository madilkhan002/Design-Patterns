#pragma once
#include"AdapteeInterface.h"

class Pound : public Adaptee
{
public:
	double weight;
	Pound(double weight):weight(weight){}
	double getWeight() override
	{
		return weight;
	}
};