#pragma once
#include <iostream>
#include <string>
class Shape
{
protected:
	std::string name;
public:
	Shape();
	Shape(const std::string& name);
	virtual ~Shape();
	virtual double getArea() const = 0;
	virtual void printInfo() const = 0;
};



