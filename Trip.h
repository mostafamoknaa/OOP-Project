#pragma once
#include<string>
#include <vector>
#include "Station.h"
using namespace std;


class Trip
{
	int Trip_ID;
	string Source, Destination, Start_Time , Start_Date , Arrival_Date, Arrival_Time;
	double Total_Hours;
	vector<Station> Stations;
	double Distance(string, string);
};

