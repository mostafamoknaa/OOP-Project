#pragma once
#include <string>
#include <vector>
#include "Coach.h"
#include "Station.h"
using namespace std;

class Train{
public:
	int Train_Number;
	string Source, Destination, Type, Start_Time, Arrival_Time;
	double Total_Hours;
	vector<Coach> Coaches;
	vector<Station> Stations;
	Train(int,string, string, string,string,string,double);

	void Add_Coach(Coach);
	void Add_Station(Station);
	void Show_Train_Details();
	double Distance(string, string);

};

