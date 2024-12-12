#include "special_Coach.h"
#include "Coach.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

special_Coach::special_Coach(int Seets, int Aviable, string Type) {
	this->Seets = Seets;
	this->Avaiable_Steets = Aviable;
	this->Type = Type;
	this->C_Price = 0.0;
}

void special_Coach::Show_Coach_Details(Coach c) {
	c.Show_Coach_Details();
	cout << "\n This Coach For People with Special Needs and With No Price\n";
}