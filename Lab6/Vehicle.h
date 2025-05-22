#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

class Vehicle {
	int numWheels=4, numDoors=2;
	public: float engineEfficiency;



public:
	Vehicle();
	Vehicle(float efficieny);
	virtual ~Vehicle();
	virtual float calculateRange() = 0;
	virtual float percentEnergyRemaining() = 0;
	virtual void drive(float km) = 0;

		/*Vehicle(Vehicle&);
		Vehicle(Vehicle*);*/
		
		/*int Vehicle::getNumDoors();
		int Vehicle::getNumWheels();
		void Vehicle::setNumDoors(int d);
		void Vehicle::setNumWheels(int w);
		void Vehicle::printVehicle(void);*/
		/*
		Vehicle& Vehicle::operator=(const Vehicle&);
		bool Vehicle::operator==(const Vehicle&) const;
		bool Vehicle::operator!=(const Vehicle&) const;
		Vehicle& Vehicle::operator++();
		Vehicle Vehicle::operator++(int);
		Vehicle Vehicle::operator--();
		Vehicle Vehicle::operator--(int);

		friend std::ostream& operator<<(std::ostream&, const Vehicle& v);*/
};
#endif