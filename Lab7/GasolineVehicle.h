#pragma once

#include "Vehicle.h"
template<class T>

class GasolineVehicle : public Vehicle<T> {
protected:
	T currentGasoline = 0, maximumGasoline = 0, gasolineEfficiency = 0;

public:
	inline GasolineVehicle() {
	}

	inline GasolineVehicle::GasolineVehicle(T maxEnergy, T efficiencyRating) {
		currentGasoline = maxEnergy;
		gasolineEfficiency = efficiencyRating;
		maximumGasoline = currentGasoline;
	}

	inline ~GasolineVehicle() {
		cout << "In Gasoline destructor" << endl;
	}

	inline float GasolineVehicle::calculateRange() {
		float currentRange = 0;
		currentRange = (currentGasoline * 100) / gasolineEfficiency;
		return currentRange;
	}

	inline float GasolineVehicle::percentEnergyRemaining() {
		return (currentGasoline / maximumGasoline) * 100.0f;
	}

	inline void GasolineVehicle::drive(T km) {
		currentGasoline -= (km / 100) * gasolineEfficiency;
	}
};