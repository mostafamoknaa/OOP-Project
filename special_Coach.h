#pragma once
#include "Coach.h"
#include <iostream>
#include <string>

using namespace std;

class special_Coach : public Coach{
public:
	special_Coach(int, int, string);
	void Show_Coach_Details(Coach);
};

