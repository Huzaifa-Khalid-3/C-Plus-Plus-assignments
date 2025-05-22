#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

	class Vehicle {
		int numWheels=4, numDoors=2;
	
	public:
		Vehicle();
		Vehicle(Vehicle&);
		Vehicle(Vehicle*);
		~Vehicle();


		int getNumDoors();
		int getNumWheels();
		void setNumDoors(int d);
		void setNumWheels(int w);
		void printVehicle(void);
	};

#endif