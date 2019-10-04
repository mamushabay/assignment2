//
// Created by Harege Abay on 10/3/19.
//

#ifndef DRIVINGSIMULATOR_TOYOTA_H
#define DRIVINGSIMULATOR_TOYOTA_H

#include "PoweredVehicle.h"

class Toyota : public PoweredVehicle {

	private:
		int myCarAge;

	public:
		Toyota();

		explicit Toyota(string brand, string model, string
fuelType, int carAge = 0);

		virtual ~Toyota();
		int getCarAge();
		void setCarAge(int carAge);

		virtual double mileageEstimate(double times);
		virtual string toString();
};


#endif //DRIVINGSIMULATOR_TOYOTA_H
