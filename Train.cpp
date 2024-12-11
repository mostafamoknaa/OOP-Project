#include "Train.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

Train::Train(int Train_Number, string Source,string Destination,string Type,string Start_Time,string Arrival_Time,double Total_Hours) {
    Train_Number = Train_Number;
    Source = Source;
    Destination = Destination;
    Type = Type;
    Start_Time = Start_Time;
    Arrival_Time = Arrival_Time;
    Total_Hours = Total_Hours;
}

void Train::Add_Coach(Coach coaches) {
    Coaches.push_back(coaches);
}
void Train::Add_Station(Station stations) {
    Stations.push_back(stations);
}

void Train::Show_Train_Details() {
    cout << "Train Number: " << Train_Number<< ", Train Type: " << Type << endl;
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
