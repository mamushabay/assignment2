//
// Created by Harege Abay on 10/3/19.
//
#include "Skateboard.h"
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <iostream>

Skateboard::Skateboard() {
    setBrand("SkateCo");
    setModel("Polar");
}

Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double times) {
    srand(time(NULL));
    int mile = std::floor((rand() % 5) + 1);
    double mileage = mile * 0.1;
    if ((times > 25) && (times < 250)) {
        int mile2 = (rand() % (int(times / 3))) + 1;
        mileage += mile2 * 1.0;
    }
    return std::floor(mileage);
}
string Skateboard::toString() {
    return "-> Skateboard\n" + Vehicle::toString() + "\n";
}
