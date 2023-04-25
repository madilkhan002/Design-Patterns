#include<bits/stdc++.h>
using namespace std;

class ArithmeticExpression
{
public:
	virtual int evaluate() = NULL;
};

// Operations
enum Operations
{
	ADD,
	SUBTRACT,
	MULTIPLY,
	DIVIDE
};

// number
class Number : public ArithmeticExpression
{
public:
	int number;
	Number(int number):number(number){}
	int evaluate() override
	{
		return number;
	}
};

// expressino
class Expression : public ArithmeticExpression
{
public:
	ArithmeticExpression* number1, *number2;
	Operations operation;
	Expression(ArithmeticExpression* num1, Operations op, ArithmeticExpression* num2)
	{
		number1 = num1;
		number2 = num2;
		operation = op;
	}
	int evaluate() override
	{
		switch (operation)
		{
		case ADD:
			return number1->evaluate() + number2->evaluate();
			break;
		case SUBTRACT:
			return number1->evaluate() - number2->evaluate();
			break;
		case MULTIPLY:
			return number1->evaluate() * number2->evaluate();
			break;
		case DIVIDE:
			return number1->evaluate() / number2->evaluate();
			break;
		default:
			return 0;
			break;
		}
	}
};

int main()
{
	// 1 + (2 * 34) ==> 69
	Number* num1 = new Number(2);
	Number* num2 = new Number(34);
	Expression *exp1 = new Expression(num1, MULTIPLY, num2);
	Number* num3 = new Number(exp1->evaluate());
	Number* num4 = new Number(1);

	Expression* exp2 = new Expression(num3, ADD, num4);

	int result = exp2->evaluate();

	cout << "RESULT: " << result << '\n';
 

	return NULL;
}