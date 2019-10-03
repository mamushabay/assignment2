//
// Created by Harege Abay on 10/3/19.
//

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "Vehicle.h"

class Skateboard : public Vehicle {

public:
    Skateboard();

    explicit Skateboard(string brand, string model);

    virtual ~Skateboard();
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_SKATEBOARD_H
