#include "stdafx.h"
#include "Index.h"
#include "Objects.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
//int roomID;
//string direction = "";
//string in = "";
 
using namespace std;

//void survey() {
//	cout << "You can look around, view your inventory or do nothing." << "\n>>";
//	cin >> in;
//	if (in == "Look" || in == "l") {
//	
//	}

//}

int main()
{ 
	cout << "You wake up in a cave. You can go North, South, East or West" << "\n>>";
	cin >> direction;
	if (direction == "North" || direction == "north") {
		cout << "You feel the wind on your back as you leave the cave" << endl;
		outsideCave(); //Goes to room Outside Cave
	}
	return 0;
}