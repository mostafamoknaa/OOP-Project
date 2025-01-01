#pragma once
#include <string>
#include <vector>
#include "Coach.h"
#include "Station.h"
using namespace std;

class Train{
protected:
	int T_Num;
	string Type;
	vector<Coach> Coaches;
	vector<Station> Stations;
	vector<Train>Trains;
public:
	Train();
	Train(int,string);
	void Add_Coach(Coach);
	void Add_Station(Station);
	void Show_Train_Details();
	void SearchByTrainType(string);
	double CalculateDistance(string, string);

};

