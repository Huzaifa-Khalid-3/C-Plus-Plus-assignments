#include <iostream>
#include "ElectricVehicle.h"

ElectricVehicle::ElectricVehicle() {

}

ElectricVehicle::ElectricVehicle(float maxCharge, float efficiency) {
	currentCharge = maxCharge;
	engineEfficiency = efficiency;

	maximumCharge = currentCharge;

}

ElectricVehicle::~ElectricVehicle() {
	std::cout << "In Electric Vehicle destructor" << std::endl;
}

float ElectricVehicle::calculateRange() {
	float currentRange = 0;
	currentRange = (currentCharge * 100) / engineEfficiency;
	return currentCharge;
}

float ElectricVehicle::percentEnergyRemaining() {
	return (currentCharge / maximumCharge) * 100.0f;
}

void ElectricVehicle::drive(float km) {
	currentCharge -= (km / 100) * engineEfficiency;
}