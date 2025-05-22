
#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle() {}

Vehicle::~Vehicle() {
	cout << "Destroying Vehicle" << endl;
}

Vehicle::Vehicle(Vehicle &copy) {
	numWheels = copy.numWheels;
	numDoors = copy.numDoors;
}

Vehicle::Vehicle(Vehicle* copy) : Vehicle(*copy) {
}


int Vehicle::getNumDoors() {
	return numDoors;
}

int Vehicle::getNumWheels() {
	return numWheels;
}

void Vehicle::setNumDoors(int d) {
	numDoors = d;
}

void Vehicle::setNumWheels(int w) {
	numWheels = w;
}

void Vehicle::printVehicle() {
	cout << "Vehicle has " << getNumWheels() << " wheels and " << getNumDoors() << " doors" << endl;
}