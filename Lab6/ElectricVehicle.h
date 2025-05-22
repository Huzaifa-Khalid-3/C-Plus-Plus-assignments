#ifndef ELECTRICVEHICLE_H
#define ELECTRICVEHICLE_H

#include "Vehicle.h"

class ElectricVehicle : public virtual Vehicle {
protected:
    float currentCharge = 0;
    float maximumCharge = 0;

public:
    ElectricVehicle();
    ElectricVehicle(float maxEnergy, float efficiencyRating);
    virtual ~ElectricVehicle();

    float calculateRange();
    float percentEnergyRemaining();
    void drive(float km);
};

#endif

