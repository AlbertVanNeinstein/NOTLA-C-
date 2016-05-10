#include <iostream>
#include "stdafx.h"
#include "Items.h"

using namespace std; 
// Item Creation; Order of values: Name, Flavor text, Type, Attack, Defense, Speed, Health, Special
void itemSword() {
	int itemSword[8]{ 1, 1, 0, 10, 5, 1, 0, 0, };
	if (itemSword[1] == 1)
	{
		cout << "A standard sword" << endl;
	}

}