#include "Russian_Train.h"
#include "Train.h"
using namespace std;

Russian_Train::Russian_Train() {
};
Russian_Train::Russian_Train(int Num, string Type) {
	this->T_Num = Num;
	this->Type = Type;
}

bool Russian_Train::isAirCondition() {
	return true;
};
bool Russian_Train::isWIFI() {
	return true;
};
bool Russian_Train::isFirstClass() {
	return true;
};
bool Russian_Train::isSecondClass() {
	return true;
};
bool Russian_Train::isThirdClass() {
	return true;
};

