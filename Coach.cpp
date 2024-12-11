#include "Coach.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

Coach::Coach(int Seets, int Aviable_Seets, string Type, double Price) {
    Seets=Seets;
    Aviable_Seets=Aviable_Seets;
    Type=Type;
    Price=Price;
}

void Coach::Show_Coach_Details() {
    cout << Seets << " " << Type << " " << Aviable_Seets << " " << Price << "\n";
}


