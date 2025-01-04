#pragma once
#include "Train.h"
class Sleep_Train : public Train {
private:
	int Bnums;
public:
	Sleep_Train();
	Sleep_Train(int , string);
	void SleepTrain(int);
	void Display_Bnums();
};

