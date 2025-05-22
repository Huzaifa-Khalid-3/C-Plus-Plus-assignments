#ifndef GASOLINEVEHICLE_H
#define GASOLINEVEHICLE_H

#include "Vehicle.h"
#include <iostream>

class GasolineVehicle : public virtual Vehicle {
protected:
	float currentGasoline = 0;
	float maximumGasoline = 0;

public:
	GasolineVehicle();
	GasolineVehicle(float maxGasoline, float efficiency);
	~GasolineVehicle();

	float calculateRange();
	float percentEnergyRemaining();
	void drive(float km);

};
#endif