#include "Car.h"

Car::Car(int numberOfdoors) {
	this->numberOfdoors = numberOfdoors;
}

int Car::getNumberOfDoors() {
	return numberOfdoors;
}

void Car::setNumberOfDoors(int numberofDoors) {
	this->numberOfdoors = numberOfdoors;
}

void Car::displayInfo() {
	Vehicle::displayInfo();
	cout << "The number of doors is: " << numberOfdoors << endl;
}