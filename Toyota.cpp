//
// Created by Harege Abay on 10/3/19.
//

#include "Toyota.h"

Toyota::Toyota() {
    myCarMileage = 60;
    setBrand("Custom");
    setModel("Tercel");
}

Toyota::Toyota(string brand, string model, string fuelType, int mileage) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setCarMileage(mileage);
}

Toyota::~Toyota() = default;

int Toyota::getCarMileage() {
    return myCarMileage;
}
void Toyota::setCarAge(int mileage) {
    if (mileage > 0 || carAge < 60) {
        myCarMileage = mileage;
    } else {
        myCarMileage = 60;
    }

}

double Toyota::mileageEstimate(int carAge) {
    myCarMileage-= (carAge / myCarMileage);
    if (fuelType == "electricity") {
        mileage += mileage * 0.05;
    }
    return mileage;
}

string Toyota::toString() {
    return "-> Toyota\n" + PoweredVehicle::toString() + "\n\tCar age: " +
           getCarAge();
}
