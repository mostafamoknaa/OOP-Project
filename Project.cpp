#include <iostream>
#include <string>
#include "Coach.h"
#include "Station.h"
#include "Train.h"
#include "Ticket.h"

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
	cout << "3. special\n";
	cout << "4. spanish\n";
	cout << "5. exit\n";
	cout << "Choose an option: ";
}
int main(){
	Train t1(1, "sleep");
	Train t2(2, "russian");
	Train t3(3, "VIP");
	Train t4(4, "spanish");
	Coach c1(1, 50, "sleep", 1000);
	Coach c2(2, 50, "russian", 2000);
	Coach c3(3, 50, "VIP", 3000);
	Coach c4(4, 50, "spanish", 4000);
	Station s1(1, "Lahore", "12:00", "12:30", 0);
	Station s2(2, "Karachi", "12:00", "12:30", 100);
	Station s3(3, "Islamabad", "12:00", "12:30", 200);
	Station s4(4, "Peshawar", "12:00", "12:30", 300);
	t1.Add_Coach(c1);
	t1.Add_Coach(c2);
	t1.Add_Coach(c3);
	t1.Add_Coach(c4);
	t1.Add_Station(s1);
	t2.Add_Coach(c1);
	t2.Add_Coach(c2);
	t2.Add_Coach(c3);
	t2.Add_Coach(c4);
	t2.Add_Station(s1);
	t2.Add_Station(s2);
	t3.Add_Coach(c1);
	t3.Add_Coach(c2);
	t3.Add_Coach(c3);
	t3.Add_Coach(c4);
	t3.Add_Station(s1);
	t3.Add_Station(s2);
	t3.Add_Station(s3);
	t4.Add_Coach(c1);
	t4.Add_Coach(c2);
	t4.Add_Coach(c3);
	t4.Add_Coach(c4);
	t4.Add_Station(s1);
	t4.Add_Station(s2);
	t4.Add_Station(s3);
	t4.Add_Station(s4);
	Ticket ticket1(&t1, &c1, "Lahore", "Karachi", "12:00", 1000);
	Ticket ticket2(&t2, &c2, "Lahore", "Karachi", "12:00", 2000);
	Ticket ticket3(&t3, &c3, "Lahore", "Karachi", "12:00", 3000);
	Ticket ticket4(&t4, &c4, "Lahore", "Karachi", "12:00", 4000);
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
			ticket1.Book_Ticket();
			break;
		}
	} while (choice != 3);
	return 0;

}