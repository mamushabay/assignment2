//
// Created by Harege Abay on 10/3/19.
//

#include "Toyota.h"

Toyota::Toyota() {
    myCarAge = 0;
    setBrand("Toyota");
    setModel("Tercel");
}

Toyota::Toyota(string brand, string model, string fuelType, int carAge) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setCarAge(carAge);
}

Toyota::~Toyota() = default;

int Toyota::getCarAge() {
    return myCarAge;
}
void Toyota::setCarAge(int carAge) {
    if (carAge > 0 || carAge < 60) {
        myCarAge = carAge;
    } else {
        myCarAge = 0;
    }

}
double Toyota::mileageEstimate(double time) {
    double myCarMileage = time * (2 - (myCarAge / 10.0));
    if (fuelType == "electricity") {
        myCarMileage += myCarMileage * 0.05;
    }
    return myCarMileage;
}

string Toyota::toString() {
    return "-> Toyota\n" + PoweredVehicle::toString() + "\n\tCar age: " +
           std::to_string(getCarAge());
}
