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
	T_Source= Source_Station;
	T_Destination = Destination_Station;
	T_Date= Date;
	T_Price = Price;
	T_ID++;
}

bool Ticket::Book_Ticket() {

	cout << "Ticket ID: " << T_ID << ", Source: " << T_Source << ", Destination: " << T_Destination << ", Date: " << T_Date << ", Price: $" << T_Price << endl;
	if (isBooked) {
		cout << "Ticket is not booked\n";
	}
	else {
		cout << "Ticket is booked\n";
	}
	return false;
}

void Ticket::Show_Ticket_Details() {
	cout << "Ticket ID: " << T_ID << ", Source: " << T_Source << ", Destination: " << T_Destination << ", Date: " << T_Date << ", Price: $" << T_Price << endl;
}

void Ticket::Cancel_Ticket() {
	if (isBooked) {
            isBooked = false;
            coach->Avaiable_Steets++;
            T_Price = 0;
            cout << "Ticket canceled successfully.\n";
        } else {
            cout << "No ticket to cancel.\n";
        }
}


