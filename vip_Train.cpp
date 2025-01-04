#include "Vip_Train.h"
#include "Train.h"
#include "Coach.h"
#include <iostream>
#include <string>

using namespace std;

Vip_Train::Vip_Train() {

}
Vip_Train::Vip_Train(int Num, string Type) {
	this->T_Num = Num;
	this->Type = Type;
}

void Vip_Train::Show_Train_Details() {
	Train::Show_Train_Details();
}

