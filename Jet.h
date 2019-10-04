//
// Created by Harege Abay on 10/3/19.
//

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

	private:
		int myEngineCount;

	public:
		Jet();

		explicit Jet(string brand, string model, string
fuelType, int engineCount = 2);
		virtual ~Jet();
		int getEngineCount();
		void setEngineCount(int engineCount);
		virtual double mileageEstimate(double time);
		virtual string toString();
};


#endif //DRIVINGSIMULATOR_JET_H
