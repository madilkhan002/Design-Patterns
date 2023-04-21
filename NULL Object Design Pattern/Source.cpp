#include<bits/stdc++.h>
using namespace std;

class VehicleInterface
{
public:
	virtual string getName() = 0;
	virtual string getSpeed() = 0;
};

class Honda : public VehicleInterface
{
public:
	string getName() override
	{
		return "Honda Civic\n";
	}
	string getSpeed() override
	{
		return "200 km/hour\n";
	}
};

// NULL OBJECT
class NullObject: public VehicleInterface
{
public:
	string getName() override
	{
		return "empty \n";
	}
	string getSpeed() override
	{
		return "0 km/hour\n";
	}
};


class VehicleFactory
{
public:
	virtual VehicleInterface* getVehicle() = 0;
	void operation()
	{
		VehicleInterface* vehicle = this->getVehicle();
		cout << "Car Name : " << vehicle->getName() << endl;
		cout << "Car Speed : " << vehicle->getSpeed() << endl;
	}
};

class HondaVehicle : public VehicleFactory
{
public:
	VehicleInterface* getVehicle()
	{
		return new Honda();
	}
};

class NullVehicle : public VehicleFactory
{
public:
	VehicleInterface* getVehicle()
	{
		return new NullObject();
	}
};

// Client
void PrintDetail(VehicleFactory * vehicle)
{
	vehicle->operation();
}

int main()
{
	HondaVehicle* honda = new HondaVehicle();
	NullVehicle* nullobject = new NullVehicle();

	PrintDetail(honda);
	PrintDetail(nullobject);

	return 0;
}