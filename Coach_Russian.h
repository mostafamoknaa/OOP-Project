#pragma once
#include "Coach.h"
using namespace std;


class Coach_Russian:public Coach
{
	int getNumOfCoaches(int num);  //function to get the number of coaches in the train
	bool isRestaurant();  //function to check if the coach is a restaurant
};

