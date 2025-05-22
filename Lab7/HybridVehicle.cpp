/*
#include "HybridVehicle.h"
#include <iostream>


HybridVehicle::HybridVehicle(float maxGasoline, float gasolineEff, float maxCharge, float electricEff) {
	maximumGasoline = maxGasoline;
	gasolineEfficiency = gasolineEff;
	currentGasoline = maxGasoline;
	maximumCharge = maxCharge;
	electEfficiency = electricEff;
	currentCharge = maxCharge;
}

HybridVehicle::~HybridVehicle() {
	std::cout << "In Hybrid vehilce destructor" << std::endl;
}

float HybridVehicle::calculateRange() {
	float gasRange, electricRange;
	gasRange = currentGasoline * 100 / gasolineEfficiency;
	electricRange = currentCharge * 100 / electEfficiency;

	return gasRange + electricRange;
}

float HybridVehicle::percentEnergyRemaining() {
	float gasRemaining, electrecityRemaining;
	gasRemaining = currentGasoline / maximumGasoline * 100;
	electrecityRemaining = currentCharge / maximumCharge * 100;

	return (gasRemaining + electrecityRemaining) / 2;
}

void HybridVehicle::drive(float km) {
	currentCharge -= (km / 100) * electEfficiency;

	if (currentCharge < 0) {
		currentCharge = 0;
	}
	currentGasoline -= (km / 100) * gasolineEfficiency;

	if (currentGasoline < 0) {
		currentGasoline = 0;
		std::cout << "Your car is out of energy" << std::endl;
	}
}
*/