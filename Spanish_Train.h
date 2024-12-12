#pragma once
#include "Train.h"
#include <string>
using namespace std;

class Spanish_Train : public Train{
private:
	int Max_Ticket;
public:
	Spanish_Train(int, string, int);
	void Show_Train_Details();
	double CalculateTotalRevenue();
	void SearchByCoachType(string type);

};

