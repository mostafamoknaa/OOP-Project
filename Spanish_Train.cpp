#include "Spanish_Train.h"
#include "Train.h"
#include "Coach.h"
#include <iostream>
#include <string>

using namespace std;

Spanish_Train::Spanish_Train() {

}
Spanish_Train::Spanish_Train(int Num, string Type, int Max) {
	this->T_Num = Num;
	this->Type = Type;
	this->Max_Ticket = Max;
}

void Spanish_Train::Show_Train_Details() {
	Train::Show_Train_Details();
	cout << "Maximum Ticket: " << Max_Ticket << endl;
}

double Spanish_Train::CalculateTotalRevenue() {
	double Total = 0.0;
	for (Coach coach : Coaches) {
		Total += coach.C_Price*(coach.Seets - coach.Avaiable_Steets);
	}
	return Total;
}

void Spanish_Train::SearchByCoachType(string Type) {
	bool Check = 0;
	for (Coach coach : Coaches) {
		if (coach.Type == Type) {
			coach.Show_Coach_Details();
			Check = 1;
		}
	}
	if (!Check) {
		cout << "No Coaches of type '"<< Type <<"' in that Train found!" << endl;
	}
}

