#include<bits/stdc++.h>
#include "player.h";
#include "strategy.h";
using namespace std;

int main()
{
	strategy1 s1;
	strategy2 s2;
	strategy3 s3;

	player player1;
	

	cout << "strategy 1 : \n";
	player1.changeStrategy(&s1);
	cout << player1.swordAttack(1, 2) << endl;
	cout <<  player1.gunAttack(1, 2) << endl;

	cout << "strategy 2 : \n";
	player1.changeStrategy(&s2);
	cout << player1.swordAttack(1, 2) << endl;
	cout << player1.gunAttack(1, 2) << endl;


	cout << "strategy 3 : \n";
	player1.changeStrategy(&s3);
	cout << player1.swordAttack(1, 2) << endl;
	cout << player1.gunAttack(1, 2) << endl;



	return 0;
}