// Week3.cpp : Defines the entry point for the application.
//

#include<iostream>
#include <fstream>

using namespace std;

namespace CST8219 {
	class Vehicle {
	private:
		int numWheels;
		int numDoors;

	public:
		Vehicle(int w, int d) {
			numWheels = w;
			numDoors = d;
			cout << "In constructor with 2 parameters" << endl;
		}
		Vehicle(int w) {
			numWheels = w;
			cout << "In constructor with 1 parameters, wheels =" << w << endl;
		}
		Vehicle() {
			cout << "In constructor with 0 parameters" << endl;
		}
		~Vehicle() {
			cout << "Deleting vehicle" << endl;
		}
	};


}

int main(int argc, char** argv)
{
	int w = 0;
	int d=0;
	char choice =' ';

	CST8219::Vehicle veh1;
	CST8219::Vehicle veh2(4);
	CST8219::Vehicle veh3(4,2);

	CST8219::Vehicle* pVehicle;
	

	do {
		cout << "Create a vehicle(y) or quit(q)? (y/q): " << endl;
		cin >> choice;
		if (choice == 'y') {
			cout << "enter number of wheels: " << endl;
			while (!(cin >> w) || w < 0) {
				cout << "Enter a non-negative integer: " << endl;
				cin >> w;
				cin.clear();
				cin.ignore(265, '\n');
			}
			cout << "enter number of doors: " << endl;
			while (!(cin >> d) || d < 0) {
				cout << "Enter a non-negative integer: " << endl;
				cin >> d;
				cin.clear();
				cin.ignore(265, '\n');
			}
			pVehicle = new CST8219::Vehicle(w, d);
			cout << "vehicle with " << d << " doors and " << w << " Wheels" << endl;
			delete pVehicle;
		}
		else if (choice == 'q') {
			cout << "...Exiting..." << endl;
		}
		else {
			cin.ignore(256,'\n');
			cout << "Invalid input, enter q or y" << endl;
		}
	} while (choice != 'q');

	cout << "called a vehicle" << endl;
	cout << "Vehicle 1 takes " << sizeof(veh1) << " bytes" << endl;
	cout << "Vehicle 2 takes " << sizeof(veh2) << " bytes" << endl;
	cout << "Vehicle 3 takes " << sizeof(veh3) << " bytes" << endl;

	cout << "w is an int representing the num of wheels and it is " << sizeof(w) << " bytes" << endl;
	cout << "d is an int representing the num of doors and it is " << sizeof(d) << " bytes" << endl;
	cout << "choice is a char sand it is " << sizeof(w) << " bytes" << endl;

	return 0;
}