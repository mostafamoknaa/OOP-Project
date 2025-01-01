#pragma once
#include "Train.h"
using namespace std;

class Russian_Train :public Train {

public:
	Russian_Train();
	bool isAirCondition();  //function to check if the train has air condition or not
	//bool isRestaurant();    //function to check if the train has restaurant or not
	bool isWIFI();          //function to check if the train has WIFI or not
	bool isFirstClass();    //function to check if the train has first class or not
	bool isSecondClass();   //function to check if the train has second class or not
	bool isThirdClass();    //function to check if the train has third class or not
	//int getNumOfClasses();  //function to get the number of classes in the train

	//void Show_Train_Details();  //function to show the details of the train

};