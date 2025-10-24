#include "Rectangle.h"

Rectangle::Rectangle(const std::string& name, double width, double height) :
	Shape(name),
	width(width),
	height(height) {
}

double Rectangle::getArea() const
{
	return width * height;
}

void Rectangle::printInfo() const
{
	std::cout << "Название: " << name << std::endl
		<< "Ширина: " << width << std::endl
		<< "Высота: " << height << std::endl;
}
