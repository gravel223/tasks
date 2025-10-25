#pragma once
#include <iostream>
#include <string>
class Vehicle
{
protected:
	std::string model;
	int year;
	double price;
public:
	Vehicle();
	Vehicle(std::string& model, int year, double price);
	virtual ~Vehicle() = default;
	virtual void displayInfo() const = 0;

};

