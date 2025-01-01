#include "Sleep_Train.h"
#include "Train.h"
using namespace std;
void Sleep_Train::SleepTrain(int Num) {
	Bnums = Num;
}
void Sleep_Train::Display_Bnums() {
	cout << "available Beds " << Bnums << endl;
}
