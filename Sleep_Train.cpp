#include "Sleep_Train.h"
#include "Train.h"
using namespace std;

Sleep_Train::Sleep_Train() {

}

Sleep_Train::Sleep_Train(int Num, string Type) {
	this->T_Num = Num;
	this->Type = Type;
}
void Sleep_Train::SleepTrain(int Num) {
	Bnums = Num;
}
void Sleep_Train::Display_Bnums() {
	cout << "available Beds " << Bnums << endl;
}
