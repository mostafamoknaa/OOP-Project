#include "vip_Train.h"
#include "Train.h"
#include "Coach.h"
#include <iostream>
#include <string>
using namespace std;

vip_Train::vip_Train(int Num, string Type, int Max) {
	this->T_Num = Num;
	this->Type = Type;
	this->Max_Ticket = Max;
}

void vip_Train::Show_Train_Details() {
	Train::Show_Train_Details();
	cout << "Maximum Ticket: " << Max_Ticket << endl;
}
