#include "Station.h"
#include <iostream>
#include <vector>
#include <string>
#include "Train.h"

Station::Station(int Station_Code,string Station_Name,string Arrival_time,string Leaving_Time,double DistanceFromStart) {
	Station_Code = Station_Code;
	Station_Name = Station_Name;
	Arrival_time = Arrival_time;
	Leaving_Time = Leaving_Time;
    DistanceFromStart = DistanceFromStart;
}

void Station::Add_Train(int Train_number) {
	Trains.push_back(Train_number);
}

void Station::Show_Stations_Details(){
    cout << "Station Name: " << Station_Name << " , Station Code: " << Station_Code << endl;
    cout << "Trains Stoped on this Station: ";
    for (int train : Trains) {
        cout << train << " ";
    }
    cout << endl;
}