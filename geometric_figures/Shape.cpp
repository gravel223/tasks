#include "Shape.h"

Shape::Shape() :
	name("") {
}

Shape::Shape(const std::string& name) :
	name(name) {
}

Shape::~Shape() = default;

