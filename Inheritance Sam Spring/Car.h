#include "Vehicle.h"

class Car : public Vehicle {
protected:
	int numberOfdoors;
public:
	Car() : Vehicle() {
		numberOfdoors = 0;
	}
	Car(int);
	
	int getNumberOfDoors();
	void setNumberOfDoors(int);
	void displayInfo();
};

