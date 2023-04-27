#include<iostream>

#include"AdapteeInterface.h"
#include"PoundAdaptee.h"
#include"AdapterInterface.h"
#include"PoundToKgAdpter.h"

int main()
{
	Adaptee* adaptee = new Pound(69);
	Adpater* adapter = new PoundToKg(adaptee);
	double totalWeight = adapter->convertToKg();
	std::cout << "Weight: " << totalWeight << " Kg\n";

	return NULL;
}