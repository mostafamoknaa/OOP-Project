#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <vector>
using namespace std;
class Station
{
public:
	int Station_Code;
	string Station_Name,Arrival_time, Leaving_Time;
	vector<int>Trains;
	Station(int, string,string,string);

	void Add_Train(int);
	void Show_Stations_Details();

};

