#pragma once
#include<list>
#include<string>
#include"observer.h"

using namespace std;

class observableInterface
{
protected:
	virtual void add(observerInterface* obj) = 0;
	virtual void remove(observerInterface* obj) = 0;
	virtual void notify(string) = 0;
};

class observable1 : public observableInterface
{
public:

	void add(observerInterface* obj) override
	{
		subscribers.push_back(obj);
	}

	void remove(observerInterface* obj) override
	{
		subscribers.remove(obj);
	}

	void notify(string _new_msg) override
	{
		_msg = _new_msg;
		for (auto subscriber : subscribers)
		{
			subscriber->update(_msg);
		}
	}


private:
	list<observerInterface*>subscribers;
	string _msg;
};
