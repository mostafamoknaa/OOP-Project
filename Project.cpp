#include <iostream>
#include <string>
#include "Coach.h"
#include "Station.h"
#include "Train.h"
#include "Ticket.h"
#include <vector>
using  namespace std;
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
int main()
{
	vector<Train> trains;
	vector<Ticket> tickets;
	Train train1(101, "Express");
	Train train2(102, "Freight");
	trains.push_back(train1);
	trains.push_back(train2);
	Driver driver1("John Doe", 45);
	Driver driver2("Jane Smith", 38);
	Coach coach1(20, 20, "AC", 20);
	Coach coach2(20, 20, "Sleeper", 50);
	Station station1(20, "Aa", "three", "four", 254);
	Station station2(20, "Aa", "three", "four", 254);
	train1.Add_Coach(coach1);
	train1.Add_Coach(coach2);
	train1.Add_Station(station1);
	train1.Add_Station(station2);
	int choice;
	do {
		displayMenu();
		cin >> choice;
		switch (choice) {
		case 1: {
			for (size_t i = 0; i < trains.size(); ++i) {
				trains[i].Show_Train_Details();
			}
			break;
		}
		case 2: {
			displaytrains();
			int traint;
			cin >> traint;
			switch (traint)
			{
			case 1: {
				cout << "you booked a sleep train successfully";
				break;
			}
			case 2: {
				cout << "you booked a special train successfully";
				break;
			}
			case 3: {
				cout << "you booked a russian train successfully";
				break;
			}
			case 4: {
				cout << "you booked a spanish train successfully";
				break;
			}
			case 5: {
				displayMenu();
				break;
			}
			default:
				cout << "choose a valid number please ";
					break;
			}
		case 3:
			cout << "Thank you for using the Train Ticket System. Goodbye!\n";
			break;

		default:
			cout << "Invalid option. Please try again.\n";
		}
		} while (choice != 5);

		return 0;
	}