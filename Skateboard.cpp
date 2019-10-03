//
// Created by Harege Abay on 10/3/19.
//

#include "Skateboard.h"
#include <ctime>
#include <cstdlib>

Skateboard::Skateboard() {
    myEngineCount = 1;
    setBrand("Custom");
    setModel("whiteFang");
}

Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
    srand(time(0));
    int mile = (rand() % 5) + 1;
    double mileage = mile * 0.1;
    if ((time > 25) && (time < 250)) {
        int mile2 = (rand() % (1 / 3 * time)) + 1;
        mileage += mile2 * 1.0;
    }
    return mileage;
}

string Skateboard::toString() {
    return "-> Skateboard\n" + PoweredVehicle::toString() + "\n";
}
