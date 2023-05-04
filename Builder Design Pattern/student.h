#pragma once
#include<bits/stdc++.h>
#include"studentBuilder.h"
using namespace std;

class Student
{
public:
	string name;
	string rollno;
	vector<string>subjects;
	string cgpa;
	bool feeStatus;
	Student() :name(""), rollno(""), subjects(vector<string>(3)), cgpa(""), feeStatus(false) {}
	Student(StudentBuilder* studentBuiler)
	{
		this->name = studentBuiler->name;
		this->rollno = studentBuiler->rollno;
		this->subjects = studentBuiler->subjects;
		this->cgpa = studentBuiler->cgpa;
		this->feeStatus = studentBuiler->feeStatus;
	}

	void PrintStudent()
	{
		cout << "NAME : " << name << '\n';
		cout << "ROLLNO : " << rollno << '\n';
		cout << "SUBJECTS : " << subjects[0] << ", " << subjects[1] << ", " << subjects[2] << '\n';
		cout << "CGPA : " << cgpa << '\n';
		cout << "FEESTUATUS : " << (feeStatus == 1 ? "PAID" : "NOT PAID") << '\n';
	}
};