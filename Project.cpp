#include <iostream>
#include <string>
#include "Coach.h"
#include "Station.h"
#include "Train.h"
#include "Ticket.h"
#include "Russian_Train.h"
#include "Vip_Train.h"
#include "Spanish_Train.h"
#include "Sleep_Train.h"

using namespace std;

static void displayMenu() {
	cout << "\n=== Train Ticket System ===\n";
	cout << "1. View Available Trains\n";
	cout << "2. Book a Ticket\n";
	cout << "3. Exit\n";
	cout << "Choose an option: ";
}
static void displaytrains() {
	cout << "\n=== Train Ticket System ===\n";
	cout << "1. sleep\n";
	cout << "2. russian\n";
	cout << "3. VIP\n";
	cout << "4. spanish\n";
	cout << "5. exit\n";
	cout << "Choose an option: ";
}
double Price(Train t, Coach c , string source , string dest) {
	return (t.CalculateDistance(source, dest)* c.C_Price * 0.001);
}
int main() {

	try {
		Sleep_Train t1(1 , "sleep");   //Sleep Train
		Russian_Train t2(2 , "russian"); //Russian Train
		Vip_Train t3(3 , "vip");		//VIP Train
		Spanish_Train t4(4 , "spanish"); //Spanish Train


		Coach c1(200, 50, "sleep", 1000); //Capacity, Available, Type, Price
		Coach c2(200, 50, "special", 0);
		Coach c3(200, 50, "first", 500);
		Coach c4(200, 50, "second", 300);
		Coach c5(200, 50, "third", 150);

		Station s1(1, "Aswan", "12:00", "12:10", 0); //ID, Name, Arrival, Leaving, Distance
		Station s2(1, "Luxur", "3:00", "3:10", 300);
		Station s3(1, "Qena", "4:00", "4:10", 400);
		Station s4(2, "Sohag", "6:00", "6:10", 600);
		Station s5(3, "Assuit", "8:00", "8:10", 800);
		Station s6(4, "Minia", "10:00", "10:10", 1000);

		//Sleep Train
		t1.Add_Coach(c1);
		t1.Add_Coach(c1);
		t1.Add_Coach(c3);
		t1.Add_Station(s1);
		t1.Add_Station(s3);
		t1.Add_Station(s6);

		//Russian Train
		t2.Add_Coach(c4);
		t2.Add_Coach(c4);
		t2.Add_Coach(c5);
		t2.Add_Station(s1);
		t2.Add_Station(s2);
		t2.Add_Station(s3);
		t2.Add_Station(s4);
		t2.Add_Station(s5);
		t2.Add_Station(s6);

		//VIP Train
		t3.Add_Coach(c3);
		t3.Add_Coach(c3);
		t3.Add_Coach(c4);
		t3.Add_Station(s1);
		t3.Add_Station(s3);
		t3.Add_Station(s5);
		t3.Add_Station(s6);

		//Spanish Train
		t4.Add_Coach(c2);
		t4.Add_Coach(c3);
		t4.Add_Coach(c3);
		t4.Add_Station(s1);
		t4.Add_Station(s3);
		t4.Add_Station(s4);
		t4.Add_Station(s5);
		t4.Add_Station(s6);

		int choice;
		do {

			displayMenu();
			cin >> choice;
			switch (choice) {
			case 1:
				do {
					displaytrains();
					cin >> choice;
					switch (choice) {
					case 1:
						t1.Show_Train_Details();
						break;
					case 2:
						t2.Show_Train_Details();
						break;
					case 3:
						t3.Show_Train_Details();
						break;
					case 4:
						t4.Show_Train_Details();
						break;
					}
				} while (choice != 5);
				break;
			case 2:
				int trainName;
				string coachType, source, dest;
				displaytrains();
				cout << "Enter Number of your train type: ";
				cin >> trainName;
				cout << "Types Of Coaches: sleep special first second third\n";
				cout << "Enter Coach Type: ";
				cin >> coachType;
				cout << "Stations Are: Aswan Luxur Qena Sohag Assuit Minia\n";
				cout << "\nEnter Source Station: ";
				cin >> source;
				cout << "\nEnter Destination Station: ";
				cin >> dest;

				Ticket* ticket1 = nullptr;

				if (trainName == 1) {
					if (coachType == "sleep") {
						ticket1 = new Ticket(&t1, &c1, source, dest, "12/12/2021", Price(t1,c1,source,dest));
					}
					else if (coachType == "special") {
						ticket1 = new Ticket(&t1, &c2, source, dest, "12/12/2021", Price(t1, c2, source, dest));
					}
					else if (coachType == "first") {
						ticket1 = new Ticket(&t1, &c3, source, dest, "12/12/2021", Price(t1, c3, source, dest));
					}
					else if (coachType == "second") {
						ticket1 = new Ticket(&t1, &c4, source, dest, "12/12/2021", Price(t1, c4, source, dest));
					}
					else if (coachType == "third") {
						ticket1 = new Ticket(&t1, &c5, source, dest, "12/12/2021", Price(t1, c5, source, dest));
					}
				}
				else if (trainName == 2) {
					if (coachType == "sleep") {
						ticket1 = new Ticket(&t2, &c1, source, dest, "12/12/2021", Price(t2, c1, source, dest));
					}
					else if (coachType == "special") {
						ticket1 = new Ticket(&t2, &c2, source, dest, "12/12/2021", Price(t2, c2, source, dest));
					}
					else if (coachType == "first") {
						ticket1 = new Ticket(&t2, &c3, source, dest, "12/12/2021", Price(t2, c3, source, dest));
					}
					else if (coachType == "second") {
						ticket1 = new Ticket(&t2, &c4, source, dest, "12/12/2021", Price(t2, c4, source, dest));
					}
					else if (coachType == "third") {
						ticket1 = new Ticket(&t2, &c5, source, dest, "12/12/2021", Price(t2, c5, source, dest));
					}
				}
				else if (trainName == 3) {
					if (coachType == "sleep") {
						ticket1 = new Ticket(&t3, &c1, source, dest, "12/12/2021", Price(t3, c1, source, dest));
					}
					else if (coachType == "special") {
						ticket1 = new Ticket(&t3, &c2, source, dest, "12/12/2021", Price(t3, c2, source, dest));
					}
					else if (coachType == "first") {
						ticket1 = new Ticket(&t3, &c3, source, dest, "12/12/2021", Price(t3, c3, source, dest));
					}
					else if (coachType == "second") {
						ticket1 = new Ticket(&t3, &c4, source, dest, "12/12/2021", Price(t3, c4, source, dest));
					}
					else if (coachType == "third") {
						ticket1 = new Ticket(&t3, &c5, source, dest, "12/12/2021", Price(t3, c5, source, dest));
					}
				}
				else if (trainName == 4) {
					if (coachType == "sleep") {
						ticket1 = new Ticket(&t4, &c1, source, dest, "12/12/2021", Price(t4, c1, source, dest));
					}
					else if (coachType == "special") {
						ticket1 = new Ticket(&t4, &c2, source, dest, "12/12/2021", Price(t4, c2, source, dest));
					}
					else if (coachType == "first") {
						ticket1 = new Ticket(&t4, &c3, source, dest, "12/12/2021", Price(t4, c3, source, dest));
					}
					else if (coachType == "second") {
						ticket1 = new Ticket(&t4, &c4, source, dest, "12/12/2021", Price(t4, c4, source, dest));
					}
					else if (coachType == "third") {
						ticket1 = new Ticket(&t4, &c5, source, dest, "12/12/2021", Price(t4, c5, source, dest));
					}
				}

				if (ticket1) {
					ticket1->Book_Ticket();
				}

				break;
			}
		} while (choice != 3);

	}
	catch (const char* msg) {
		cerr << msg << endl;
	}
	return 0;

}