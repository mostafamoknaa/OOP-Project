#pragma once
#include "Train.h"
#include <string>
using namespace std;

class Vip_Train: public Train{
public:
	Vip_Train();
	Vip_Train(int, string);
	void Show_Train_Details();
};

