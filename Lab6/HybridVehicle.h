#ifndef HYBRIDVEHICLE_H
#define HYBRIDVEHICLE_H

#include "Vehicle.h"
#include "ElectricVehicle.h"
#include "GasolineVehicle.h"


class HybridVehicle : public virtual ElectricVehicle, public virtual GasolineVehicle {
	float gasolineEfficiency = 0;
	float electEfficiency = 0;

public:
	HybridVehicle(float maxGasoline, float gasolineEfficiency, float maxCharge, float electricEfficiency);
	virtual ~HybridVehicle();

	virtual float calculateRange() override; 
	virtual float percentEnergyRemaining() override;
	virtual void drive(float km);

};
#endif // HYBRIDVEHICLE_H
