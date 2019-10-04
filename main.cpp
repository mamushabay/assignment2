#include <iostream>
#include "Car.h"
#include "Bicycle.h"
#include "Vehicle.h"
#include "Jet.h"
#include "Skateboard.h"
#include "Toyota.h"
void printVehiclesRoster(Vehicle **vehicles, int size);

int main()
{
    std::cout << "Driving simulator" << std::endl;
    int size = 12;
    int capacity = 15;
    Vehicle **vehiclesArray = new Vehicle *[capacity];

    vehiclesArray[0] = new Car();
    vehiclesArray[1] = new Bicycle("eTAP", "P5X");
    vehiclesArray[2] = new Bicycle("R&A", "Dogma F8", 5);
    vehiclesArray[3] = new Car("Tesla", "T2", "electricity",
                               "large");
    vehiclesArray[4] = new Bicycle("Mizuno", "Wave", 10);
    vehiclesArray[5] = new Car("BMW", "X5", "diesel", "grande");

    //my test cases
    vehiclesArray[6] = new Jet("Mig", "latest", "ethnol", 3);
    vehiclesArray[7] = new Skateboard("Element", "whiteFang");
    vehiclesArray[8] = new Toyota("Toyota", "Tercel", "petrol", 8);
    vehiclesArray[9] = new Jet("F14", "Raptor", "Buthane");
    vehiclesArray[10] = new Skateboard();
    vehiclesArray[11] = new Toyota("Toyota", "Camry", "ethanol");

    printVehiclesRoster(vehiclesArray, size);

    if (vehiclesArray != 0)
    { // If it is not a null pointer
        // do not use nullptr. It is not supported on linprog
        for (int i = 0; i < size; i++)
        {
            delete vehiclesArray[i];
        }
        delete[] vehiclesArray;
    }
    return 0;
}

void printVehiclesRoster(Vehicle **vehicles, int size)
{
    double simulatedDistance = 130;
    for (int i = 0; i < size; i++)
    {
        cout << i << " " << vehicles[i]->toString() << endl;
        cout << "\tWould travel: "
             << vehicles[i]->mileageEstimate(simulatedDistance) << " miles in "
             << simulatedDistance << " seconds" << endl;
    }
}
