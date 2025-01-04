#pragma once
#include "Train.h"
#include <string>
using namespace std;

class Spanish_Train : public Train{
public:
	Spanish_Train();
	Spanish_Train(int, string);
	void Show_Train_Details();
	double CalculateTotalRevenue();
	void SearchByCoachType(string type);

};

