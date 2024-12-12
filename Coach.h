#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Coach
{
public:
	int Seets, Avaiable , C_Num;
	string Type;
	double C_Price;
	vector <bool> seats = { 0 };
	Coach(int, int, string, double);
	void Show_Coach_Details();

};


