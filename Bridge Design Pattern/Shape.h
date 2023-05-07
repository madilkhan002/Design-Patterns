#pragma once
/*
	This is an abstraction class (according to GOF)
*/

#include"color.h"


class Shape
{
public:
	Color* color;
	Shape(Color*color):color(color)
	{
	
	}
	virtual string shapeType()
	{
		return "Base Shape & Color : " +color->getColor();
	}
};

class Rectangle : public Shape
{
public:
	Rectangle(Color* color) :Shape(color)
	{

	}
	string shapeType()
	{
		return "Rectangle Shape & Color : " + this->color->getColor();
	}
};

class Circle : public Shape
{
public:
	Circle(Color* color) :Shape(color)
	{

	}
	string shapeType()
	{
		return "Circle Shape & Color : " + this->color->getColor();
	}
};