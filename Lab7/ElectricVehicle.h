#pragma once

#include "Vehicle.h"

template<class T>
class ElectricVehicle : public Vehicle<T> {
protected:
	T currentCharge, maximumCharge, engineEfficiency;
public:
	inline ElectricVehicle() {

	}

	inline ElectricVehicle::ElectricVehicle(T maxCharge, T efficiency) {
		currentCharge = maxCharge;
		engineEfficiency = efficiency;
		maximumCharge = currentCharge;
	}

	inline ~ElectricVehicle() {
		std::cout << "In Electric Vehicle destructor" << std::endl;
	}

	inline T ElectricVehicle::calculateRange() {
		float currentRange = 0;
		currentRange = (currentCharge * 100) / engineEfficiency;
		return currentCharge;
	}

	inline T ElectricVehicle::percentEnergyRemaining() {
		return (currentCharge / maximumCharge) * 100.0f;
	}

	inline void ElectricVehicle::drive(T km) {
		currentCharge -= (km / 100) * engineEfficiency;
	}

};