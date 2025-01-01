#pragma once
#include <string>
#include <vector>
#include "Coach.h"
#include "Station.h"
#include "Train.h"
using namespace std;
class Ticket{
private:

    Coach* coach;
    Train* train;
    int T_ID;
    string T_Source, T_Destination, T_Date , T_Time;
    double T_Price;
    bool isBooked;
public:
    Ticket(Train*, Coach*, string, string, string,double);
    bool Book_Ticket();
    void Show_Ticket_Details();
    void Cancel_Ticket();

};

