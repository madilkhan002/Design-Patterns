#pragma once
#include<iostream>
using namespace std;
class observerInterface
{
public:
	virtual void update(std::string _msg) = 0;
};

class observer : public observerInterface
{
	static int _unique_id;
	int _id = -1;

public:
	observer()
	{
		_unique_id++;
		_id = _unique_id;
	}
	void update(std::string _msg) override
	{
		cout << "Subscriber Id: " << _id << " | Notification: " << _msg << endl;
	}
};

int observer::_unique_id = 0;