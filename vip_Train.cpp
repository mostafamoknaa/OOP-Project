#include "vip_Train.h"
#include "Train.h"
#include "Coach.h"
#include <iostream>
#include <string>
using namespace std;

vip_Train::vip_Train(int Num, string Type) {
	this->T_Num = Num;
	this->Type = Type;
}

vip_Train::vip_train() {

}

void vip_Train::Show_Train_Details() {
	Train::Show_Train_Details();
}
