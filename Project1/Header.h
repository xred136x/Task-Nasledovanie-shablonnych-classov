#pragma once
#include<iostream>
#include<string>

class ElectroFuel {
public:
	ElectroFuel() {}
	std::string Info() {
		return "electrofuel";
	}
	
};
template<typename T>
class Vehicle {
public:
	
	 void printFuelInfo() {
		std::cout << _fuel.Info() << '\n';
	}
private:
	T _fuel;
};


class ElectricBicycle : public Vehicle<ElectroFuel> {
public:
	ElectricBicycle(std::string name) : _name(name){}
	void  printBicycleInfo(){
		std::cout << _name << '\n';
	}

private:
	std::string _name;
	
};
