#pragma once
#include<bits/stdc++.h>
using namespace std;

class StudentBuilder
{
public:

	string name;
	string rollno;
	vector<string>subjects;
	string cgpa;
	bool feeStatus;

	// setters
	StudentBuilder *setName(string name)
	{
		this->name = name;
		return this;
	}

	StudentBuilder *setRollno(string rollno)
	{
		this->rollno = rollno;
		return this;
	}

	StudentBuilder *setFeeStatus(bool feeStatus)
	{
		this->feeStatus = feeStatus;
		return this;
	}

	StudentBuilder *setCgpa(string cgpa)
	{
		this->cgpa = cgpa;
		return this;
	}

	virtual StudentBuilder* setSubjects() { return nullptr;}
};

