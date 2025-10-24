#pragma once
#include "Shape.h"
#include<iostream>
#include <string>
class Circle : public Shape
{
private:
	double radius;
public:
	Circle(const std::string& name, double radius);
	double getArea()const override;
	void printInfo()const  override;
};

