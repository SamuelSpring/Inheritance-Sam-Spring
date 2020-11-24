#include <iostream>
using namespace std;

class Vehicle {
private:
	string manufacturer;
	int yearBuilt;
public:
	Vehicle();
	Vehicle(string manufacturer, int yearBuilt);
	void displayInfo();

};