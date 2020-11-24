#include <iostream>
using namespace std;

class Vehicle {
protected:
	string manufacturer;
	int yearBuilt;
public:
	Vehicle();
	Vehicle(string manufacturer, int yearBuilt);
	void setManufacturer(string manufacturer);
	string getManufacturer();
	void setYearBuilt(int yearBuilt);
	int getYearBuilt();
	void displayInfo();

};