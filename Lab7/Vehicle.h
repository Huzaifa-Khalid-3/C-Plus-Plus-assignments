#pragma once

#include <iostream>
using namespace std;
template<class T>
	class Vehicle {
	protected: T numWheels, numDoors;

	inline Vehicle::Vehicle() {
		cout << "In constructor with 0 parameters" << endl;
	}
	inline Vehicle::~Vehicle() {
		cout << "Destroying Vehicle" << endl;
	}

	inline Vehicle::Vehicle(Vehicle &copy) {
		numWheels = copy.numWheels;
		numDoors = copy.numDoors;
	}

	inline Vehicle::Vehicle(Vehicle* copy) : Vehicle(*copy) {
	}

	inline T Vehicle::getNumDoors() {
		return numDoors;
	}

	inline T Vehicle::getNumWheels() {
		return numWheels;
	}

	inline void Vehicle::setNumDoors(T d) {
		numDoors = d;
	}

	inline void Vehicle::setNumWheels(T w) {
		numWheels = w;
	}
	
	inline void Vehicle::printVehicle() {
		cout << "Vehicle has " << getNumWheels() << " wheels and " << getNumDoors() << " doors" << endl;
	}
};