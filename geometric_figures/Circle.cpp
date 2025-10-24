#include "Circle.h"

Circle::Circle(const std::string& name, double radius)
	: Shape(name),
	radius(radius) {
}

double Circle::getArea() const
{
	return (radius * radius) * 3.14159;
}

void Circle::printInfo() const
{
	std::cout << "Название:" << name << std::endl <<
		"Радиус: " << radius << std::endl;
}
