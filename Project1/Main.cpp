#include"Header.h"



int main() {
	setlocale(LC_ALL, "ru");

	ElectricBicycle a("stels");
	
	a.printBicycleInfo();
	a.printFuelInfo();
	
	return 0;
}