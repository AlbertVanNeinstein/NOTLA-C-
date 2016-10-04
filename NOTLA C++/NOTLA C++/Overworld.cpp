#include "stdafx.h"
#include "Index.h"
#include <iostream>
#include <string>

string in = "";
string direction = "";	

int rmID;

//Functions
void survey() {

}

//Rooms
void debug() {
	cout << "lel" << endl;	
}

void outsideCave() {
	rmID = 01
		std::cout << "You can look around, view your inventory or do nothing." << "\n>>";
	cin >> in;
	if (in == "Look" || in == "l") {
		cout << "To the North, you spot a small town through a thick forest, \nyou'll be able to reach it but it will take a couple of days. \n"
			<< "To the West is an unscaleable mountain, good luck climbing it \n"
			<< "To the East is a path that looks like it goes on forever.\nYou may be able to walk off the Earth if you take it to the end." << endl;
		debug();
	}
}