#include "Train.h"
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
//#include "Driver.h"
using namespace std;

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
        cout<< " Station Name: " << st.Station_Name
            << ",  Arrival: " << st.Arrival_time
            << ", Leaving: " << st.Leaving_Time <<"\n";
    }
    cout << "\nCoaches:\n";
    for (Coach c : Coaches) {
        cout << "Seat Num.  " << " Type  " << " Available Seats  " << " Price  \n";
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
double Train::CalculateDistance(string Source_Station, string Destination_Station) {
    double Distance = 0;
    for (Station st : Stations) {
        if (st.Station_Name == Source_Station) {
            for (Station st2 : Stations) {
                if (st2.Station_Name == Destination_Station) {
                    Distance = abs(st2.DistanceFromStart - st.DistanceFromStart);
                    break;
                }
            }
        }
    }
    return Distance;
}
//void Train::show_driverinfo(Driver*  driver)
//{
//    cout <<"the driver name is" << driver->name;
//    cout <<"the driver id is " << driver->id;
//}
//string Train::GetName() {
//    return Type;
//}
