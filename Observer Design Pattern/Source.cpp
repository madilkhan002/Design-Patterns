#include<iostream>
#include"obserable.h"
#include"observer.h"
using namespace std;


int main()
{
	observable1 subject;

	observer sub1;
	observer sub2;
	observer sub3;
	
	subject.add(&sub1);
	subject.add(&sub2);
	subject.add(&sub3);

	subject.notify("Hello Everyone...");



	return 0;
}