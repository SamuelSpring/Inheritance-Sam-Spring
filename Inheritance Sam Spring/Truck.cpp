
#include "Truck.h"

Truck::Truck() {
	towingCapacity = 0;
}

Truck::Truck(int towingCapacity) {
	this->towingCapacity = towingCapacity;
}

int Truck::getTowingCapacity() {
	return towingCapacity;
}

void Truck::setTowingCapacity(int towingCapacity) {
	this->towingCapacity = towingCapacity;
}

void Truck::displayInfo(){
	Vehicle::displayInfo();
	cout << "Towing capacity: " << towingCapacity << endl;
}