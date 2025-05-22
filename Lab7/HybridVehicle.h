#pragma once
#include "Vehicle.h"
#include "ElectricVehicle.h"
#include "GasolineVehicle.h"

template<class T>
class HybridVehicle : public GasolineVehicle<T>, public ElectricVehicle<T> {
protected: 
	T electricEfficiency;
public:

	inline HybridVehicle() {

	}
	inline HybridVehicle(T maxGas, T gasEff, T maxCharge, T elecEff) {
		maximumGasoline = maxGas;
		gasolineEfficiency = gasEff;
		currentGasoline = maxGas;
		maximumCharge = maxCharge;
		electricEfficiency = elecEff;
		currentCharge = maxCharge;
	}
	inline ~HybridVehicle() {
		cout << "Hybrid vehcicle destructor" << endl;
	}

	inline T calculateRange() {
		float gasRange, electricRange;
		gasRange = currentGasoline * 100 / gasolineEfficiency;
		electricRange = currentCharge * 100 / electricEfficiency;
		return gasRange + electricRange;
	}
	inline T percentEnergyRemaining() {
		float gasRem, elecRem;
		gasRem = currentGasoline / maximumGasoline * 100;
		elecRem = currentCharge / maximumCharge * 100;
		return (gasRem + elecRem) / 2;
	}
	inline void drive(T km) {
		currentCharge -= (km / 100) * electricEfficiency;
		if (currentCharge < 0) {
			currentCharge = 0;
		}
		currentGasoline -= (km / 100) * gasolineEfficiency;
		if (currentGasoline < 0) {
			currentGasoline = 0;
			std::cout << "Your car is out of energy" << std::endl;
		}
	}
};