#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Coach
{
public:
	int Seets, Aviable_Seets;
	string Type;
	double Price;
	Coach(int, int, string, double);
	void Show_Coach_Details();

};


