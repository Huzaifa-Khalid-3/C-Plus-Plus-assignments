#include "GasolineVehicle.h"
#include <iostream>

GasolineVehicle::GasolineVehicle() {

}

GasolineVehicle::GasolineVehicle(float maxGas, float maxEfficiency) {
	currentGasoline = maxGas;
	engineEfficiency = maxEfficiency;
	maximumGasoline = currentGasoline;
};

GasolineVehicle::~GasolineVehicle() {
	std::cout << "In Gasoline destructor" << std::endl;
}

float GasolineVehicle::calculateRange() {
	float currentRange = 0;

	currentRange = (currentGasoline *100)/ engineEfficiency;
	return currentRange;
}

float GasolineVehicle::percentEnergyRemaining() {
	return (currentGasoline / maximumGasoline) * 100.0f;
 }

void GasolineVehicle::drive(float km) {
	currentGasoline -= (km / 100) * engineEfficiency;
}