#include "Vehicle.h"

class Truck : public Vehicle {
private:
	int towingCapacity;
public:
	Truck();
	Truck(int);
	void setTowingCapacity(int);
	int getTowingCapacity();
	void displayInfo();


};
