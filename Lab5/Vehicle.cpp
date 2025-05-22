
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

Vehicle& Vehicle::operator=(const Vehicle& other) {
	numWheels = other.numWheels;
	numDoors = other.numDoors;
	return *this;
}
bool Vehicle::operator==(const Vehicle& other) const {
	return numWheels == other.numWheels && numDoors == other.numDoors;
}
bool Vehicle::operator!=(const Vehicle& other) const {
	return !(*this == other);
}

Vehicle& Vehicle::operator++() {
	++numWheels;
	++numDoors;
	return *this;
}
Vehicle Vehicle::operator++(int) {
	Vehicle temp = *this;
	++(*this);
	return temp;
}
Vehicle Vehicle::operator--() {
	--numWheels;
	--numDoors;
	return *this;
}
Vehicle Vehicle::operator--(int) {
	Vehicle temp = *this;
	--(*this);
	return temp;
}
ostream& operator<<(ostream& os, const Vehicle& v) {
	os << "Vehicle has " << v.numWheels << " wheels and " << v.numDoors << " doors";
	return os;
}
