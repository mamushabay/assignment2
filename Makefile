output: main.o poweredvehicle.o vehicle.o bicycle.o car.o jet.o skateboard.o toyota.o 
	g++ main.o poweredvehicle.o vehicle.o bicycle.o car.o jet.o skateboard.o toyota.o -o output
main.o:	main.cpp
	g++ -c main.cpp -o main.o
poweredvehicle.o:	PoweredVehicle.cpp PoweredVehicle.h
	g++ -c PoweredVehicle.cpp -o poweredvehicle.o
vehicle.o:	Vehicle.cpp Vehicle.h
	g++ -c Vehicle.cpp -o vehicle.o
bicycle.o: Bicycle.cpp Bicycle.h
	g++ -c Bicycle.cpp -o bicycle.o
car.o:	Car.cpp Car.h
	g++ -c Car.cpp -o car.o
jet.o:	Jet.cpp Jet.h
	g++ -c Jet.cpp -o jet.o
skateboard.o:	Skateboard.cpp Skateboard.h
	g++ -c Skateboard.cpp -o skateboard.o
toyota.o:	Toyota.cpp Toyota.h
	g++ -c Toyota.cpp -o toyota.o
clean:
	rm -rf *.o output
