#include<bits/stdc++.h>
#include"Director.h"
using namespace std;

int main()
{
	Director *d1 = new Director(new EngineeringStudent());
	Director *d2 = new Director(new MedicalStudent());

	Student* s1 = d1->createEngineeringStudent();
	Student* s2 = d2->createMedicalStudent();

	s1->PrintStudent();
	cout << '\n';
	s2->PrintStudent();



	return 0;
}