#include "Ticket.h"
#include <iostream>
#include <vector>
#include <string>
#include "Train.h"
#include "Coach.h"

using namespace std;

Ticket::Ticket(Train* train, Coach* coach, string Source_Station, string Destination_Station, string Date, double Price) {
	train = train;
	coach = coach;
	Source_Station = Source_Station;
	Destination_Station = Destination_Station;
	Date = Date;
	Price = Price;
	isBooked = false;
}


