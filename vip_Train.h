#pragma once
#include "Train.h"
class vip_train : public Train {
private:
		int Max_Ticket;
public:
	Spanish_Train(int, string, int);
	void Show_Train_Details();

};