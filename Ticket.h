#pragma once
#include <string>
#include <vector>
#include "Coach.h"
#include "Station.h"
#include "Train.h"
static int T_ID;
using namespace std;
class Ticket{
public:
    
    Coach* coach;
    Train* train;
    string T_Source, T_Destination, T_Date , T_Time;
    double T_Price;
    bool isBooked = false;

    Ticket(Train*, Coach*, string, string, string,double);
    bool Book_Ticket();
    void Show_Ticket_Details();
    //void Cancel_Ticket();

};

