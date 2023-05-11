/*
	Prototype is a creational design pattern that lets you copy existing objects without making your code dependent on their classes.
*/
#include<bits/stdc++.h>
using namespace std;


class Prototype
{
public:
	virtual Prototype* clone() = 0;
	virtual void printInfo() = 0;
};

class Student : public Prototype
{
	string id, name, goal;
public:
	Student(string id, string name, string goal) :id(id), name(name), goal(goal)
	{

	}

	void printInfo() override
	{
		cout << "ID: " << id << '\n';
		cout << "NAME: " << name << '\n';
		cout << "GOAL: " << goal << '\n';
		cout << '\n';
	}

	Prototype* clone() override
	{
		return new Student(id, name, goal);
	}
};

int main()
{
	Student * s1 = new Student("002", "Adil", "I Wish I had a goal....");
	s1->printInfo();

	Prototype * p1 = s1->clone();
	p1->printInfo();

	delete s1;
	delete p1;


	return 0;
}