#include <iostream>
#include <string>
#include "Coach.h"
#include "Station.h"
#include "Train.h"
#include "Ticket.h"
#include <vector>

using  namespace std;

int main()
{
    Train t1(1, "VIP");
    t1.Add_Station(Station(1, "Lahore", "12:00", "12:30", 0));
    t1.Add_Station(Station(2, "Karachi", "18:00", "18:30", 1200));
    t1.Add_Coach(Coach(1, 50, "Economy", 100));
    t1.Add_Coach(Coach(2, 30, "Business", 200));
    t1.Add_Coach(Coach(3, 20, "Public", 300));
    t1.Show_Train_Details();
    t1.SearchByTrainType("VIP");

    return 0;
}

