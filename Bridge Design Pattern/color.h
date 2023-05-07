#pragma once
/*
	This is an Implementation class (according to GOF)
*/

#include<iostream>
using namespace std;

class Color
{
public:
	virtual string getColor() = 0;
};

class RedColor : public Color
{
public:
	string getColor() override
	{
		return "Red Color";
	}
};

class PurpleColor : public Color
{
public:
	string getColor() override
	{
		return "Purple Color";
	}
};