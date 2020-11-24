#include "Vehicle.h"
#include "Truck.h"
#include "Car.h"

int main() {
	string manufacturer;
	int yearBuilt;
	int numOfDoors;
	int towingCapacity;
	cout << "Vehicle Program" << endl << endl;
	cout << "Vehicle:" << endl;
	cout << "Enter the manufacturer: ";
	cin >> manufacturer;
	cout << "Enter the year Built: ";
	cin >> yearBuilt;
	Vehicle vehicle(manufacturer, yearBuilt);
	vehicle.displayInfo();

	cout << "Car:" << endl;
	cout << "Enter the manufacturer: ";
	cin >> manufacturer;
	cout << "Enter the year Built: ";
	cin >> yearBuilt;
	cout << "Enter the number of doors: ";
	cin >> numOfDoors;
	Car car(numOfDoors);
	car.setManufacturer(manufacturer);
	car.setYearBuilt(yearBuilt);
	car.displayInfo();

	cout << "Truck:" << endl;
	cout << "Enter the manufacturer: ";
	cin >> manufacturer;
	cout << "Enter the year Built: ";
	cin >> yearBuilt;
	cout << "Enter the towing capacity: ";
	cin >> towingCapacity;
	Truck truck(towingCapacity);
	truck.setManufacturer(manufacturer);
	truck.setYearBuilt(yearBuilt);
	truck.displayInfo();



}