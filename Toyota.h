//
// Created by Harege Abay on 10/3/19.
//

#ifndef DRIVINGSIMULATOR_TOYOTA_H
#define DRIVINGSIMULATOR_TOYOTA_H

#include "PoweredVehicle.h"

class Toyota : public PoweredVehicle {

private:
    int myCarMileage;

public:
    Toyota();

    explicit Toyota(string brand, string model, string fuelType, int mileage );

    virtual ~Toyota();
    string getCarAge();
    void setCarAge(int carAge);
    virtual double mileageEstimate(int carAge);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_TOYOTA_H
