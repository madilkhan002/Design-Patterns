#pragma once
#include"AdapterInterface.h"
#include"AdapteeInterface.h"
class PoundToKg : public Adpater
{
	Adaptee* adaptee;
public:
	PoundToKg(Adaptee* obj)
	{
		adaptee = obj;
	}
	double convertToKg() override
	{
		return adaptee->getWeight() * .45;
	}
};