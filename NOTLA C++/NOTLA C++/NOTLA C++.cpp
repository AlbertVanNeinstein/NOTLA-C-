// NOTLA C++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
// Item Creation; Order of values: Name, Flavor text, Type, Attack, Defense, Speed, Health, Special
int it1[8] {1, 2, 1, 5, 2, 0, 0, 0};
int main()
{
	if (it1[1] == 2)
		cout << "Hello" << endl;
	cout << it1[1] << endl;
    return 0;
}

