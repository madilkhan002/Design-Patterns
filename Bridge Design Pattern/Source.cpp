/*
	Client Code
	
	Client ---->  Shape -------> <<Color>>
					|				|
					⏑				⏑
				  Shapes	   concreteColors

*/
#include"Shape.h"

int main()
{
	Color* color = new RedColor();
	Shape* shape = new Shape(color);
	cout << shape->shapeType() << endl;

	color = new PurpleColor();
	shape = new Circle(color);
	cout << shape->shapeType() << endl;




}