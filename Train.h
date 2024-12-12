#pragma once
#include <string>
#include <vector>
#include "Coach.h"
#include "Station.h"
using namespace std;

class Train{
public:
	int T_Num;
	string Type;
	vector<Coach> Coaches;
	vector<Station> Stations;
	Train(int,string, string, string,string,string,double);

	void Add_Coach(Coach);
	void Add_Station(Station);
	void Show_Train_Details();

};

