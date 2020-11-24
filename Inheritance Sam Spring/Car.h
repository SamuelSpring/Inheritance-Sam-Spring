#include "Vehicle.h"

class Car : protected Vehicle {
private:
	int numberOfdoors;
public:
	Car();
	Car(int);
	int getNumberOfDoors();
	void setNumberOfDoors(int);
	void displayInfo();
};
