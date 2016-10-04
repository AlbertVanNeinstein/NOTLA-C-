#pragma once
#include "stdafx.h"
#include "Objects.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Items
void itemSword();
void itemBow();
void itemSwordS();
void itemBowS();

//Player
void playerCombat();
extern int player[]; //Player Stat Array
string name; //Player Name String
void combatTest();
//vector <string> kek;

//Enemies, Nonspecial
extern int zombie[];
extern int archer[];
extern int knight[];
extern int dog[];
extern int testStandard[];

//Enemies, Special
extern int testBoss[];