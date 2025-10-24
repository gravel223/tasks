#pragma once
#pragma once
#include "Shape.h"
#include<iostream>
#include <string>

class Rectangle : public Shape
{
private:
	double width;
	double height;
public:
	Rectangle( const std::string& name, double width, double height);
	double getArea() const override;
	void printInfo() const override;

};

