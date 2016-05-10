// NOTLA C++.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "Objects.h"
#include <iostream>
using namespace std;

//Player Stats. Array Order: Health, Attack, Defense, Speed, Equiped Item.
int playerStats[5]{ 100, 10, 10, 10, 5 };

int main()
{
	itemSword();
    int hp;
	hp = playerStats[0];
	if (hp == 100) {
		cout << "test" << endl;
	}
	return 0;

	
}

