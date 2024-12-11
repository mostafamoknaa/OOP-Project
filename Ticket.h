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
    string Source_Station, Destination_Station, Date;
    double Price;
    Ticket(Train*, Coach*, string, string, string, double);

};

