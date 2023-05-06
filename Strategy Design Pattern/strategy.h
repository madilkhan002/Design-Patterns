#pragma once

class strategy
{
public:
	virtual int swordAttack(int,int) = 0;
	virtual int gunAttack(int, int) = 0;
};

class strategy1 : public strategy
{
public:
	
	int swordAttack(int a, int b)
	{
		return (a * b + 2);
	}
	int gunAttack(int a, int b)
	{
		return (a*2 + 3*b + 2);
	}
};

class strategy2 : public strategy
{
public:

	int swordAttack(int a, int b)
	{
		return (a * b + 4);
	}
	int gunAttack(int a, int b)
	{
		return (a * 2 + 3 * b + 4);
	}
};

class strategy3 : public strategy
{
public:

	int swordAttack(int a, int b)
	{
		return (a * b + 6);
	}
	int gunAttack(int a, int b)
	{
		return (a * 2 + 3 * b + 6);
	}
};