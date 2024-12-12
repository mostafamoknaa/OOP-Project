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

bool Coach::Book_Steets(double& Distance, double& Price) {
        if (Avaiable_Steets < Seets) {
            Avaiable_Steets--;
            Price = C_Price * Distance;
            return true;
        }
        return false;
}

void Coach::Show_Coach_Details() {
    cout << Seets << " " << Type << " " << Avaiable_Steets << " " << C_Price << "\n";
}


