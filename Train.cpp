#include "Train.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;
Train::Train() {

}

Train::Train(int Train_Number,string Type) {
    this->T_Num = Train_Number;
    this->Type = Type;
}

void Train::Add_Coach(Coach coaches) {
    Coaches.push_back(coaches);
}
void Train::Add_Station(Station stations) {
    Stations.push_back(stations);
}

void Train::Show_Train_Details() {
    cout << "Train Number: " << T_Num<< ", Train Type: " << Type << endl;
    cout << "Stations:\n";
    for (Station st : Stations) {
        cout << st.Station_Code
            << " , Station Name: " << st.Station_Name
            << " | Arrival: " << st.Arrival_time
            << ", Leaving: " << st.Leaving_Time;
    }
    cout << "\nCoaches:\n";
    for (Coach c : Coaches) {
        c.Show_Coach_Details();
    }
}
void Train::SearchByTrainType(string Type) {
    bool Check = 0;
    for (Train tr : Trains) {
        if (tr.Type == Type) {
            tr.Show_Train_Details();
            Check = 1;
        }
    }
    if (!Check) {
        cout << "No Train of Type '" << Type << "' Found." << endl;
    }
}

