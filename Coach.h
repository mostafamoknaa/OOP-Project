#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Coach
{
public:
	Coach();
	int Seets, Avaiable_Steets , C_Num;
	string Type;
	double C_Price;
	vector <bool> seats = { 0 };
	Coach(int, int, string, double);
	void Show_Coach_Details();

	bool Book_Steets(double&, double&);

};


