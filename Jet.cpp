//
// Created by Harege Abay on 10/3/19.
//

#include "Jet.h"
#include <ctime>
#include <cstdlib>

Jet::Jet() {
    myEngineCount = 1;
    setBrand("Custom");
    setModel("Mig");
}

Jet::Jet(string brand, string model, string fuelType, int engineCount) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setEngineCount(engineCount);
}

Jet::~Jet() = default;

int Jet::getEngineCount() {
    return myEngineCount;
}

void Jet::setEngineCount(int engineCount) {
    if (engineCount == 1 || engineCount == 2 ||
        engineCount == 3 || engineCount == 4) {
        myEngineCount = engineCount;
    } else {
        myEngineCount = 1;
    }

}

double Jet::mileageEstimate(double times) {
    srand(time(0));
    int mile = (rand() % 100) + 40;
    double mileage = mile * 1.0;
    if ((myEngineCount > 2) && (fuelType == "Rocket")) {
        mileage += mileage * 0.055;
    }
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine count: " +
           std::to_string(getEngineCount());
}
