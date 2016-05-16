#pragma once
#include "stdafx.h"
#include "Objects.h"
#include <iostream>
#include <string>
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
string combatest;
extern bool combat;

//Enemies, Nonspecial
extern int zombie[];
extern int archer[];
extern int knight[];
extern int dog[];
extern int testStandard[];

//Enemies, Special
extern int testBoss[];