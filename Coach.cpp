#include "Coach.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

Coach::Coach() {

}

Coach::Coach(int Seets, int Aviable_Seets, string Type, double C_Price) {
    this->Seets=Seets;
    this->Avaiable_Steets = Aviable_Seets;
    this->Type = Type;
    this->C_Price = C_Price;
}
//TODO should store price or display it && the condition is wrong
//should get number of places to book -> if(available_seets > num) available_seets -= num; price = c_price * num * distance;
bool Coach::Book_Steets(double& Distance, double& Price) {
        if (Avaiable_Steets >= 1) {
            Avaiable_Steets--;
            this->C_Price = C_Price * Distance;
            return true;
        }
        return false;
}

void Coach::Show_Coach_Details() {
    cout << Seets << "          " << Type << "          " << Avaiable_Steets << "           " << C_Price << "\n";
}


