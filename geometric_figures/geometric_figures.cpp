#include <iostream>
#include <string>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"


int main()
{
    setlocale(LC_ALL, "rus");

    // Создаём массив из 3 указателей на Shape
    Shape* shapes[3];

    // Инициализируем каждый элемент
    shapes[0] = new Circle("Круг 1", 5.0);
    shapes[1] = new Rectangle("Прямоугольник", 1.0, 2.1);
    shapes[2] = new Circle("Круг 2", 3.0);

    // Используем (например, вызываем виртуальные методы)
    for (int i = 0; i < 3; ++i) {
        shapes[i]->printInfo();
        std::cout << std::endl;
        std::cout << "Площадь: " << shapes[i]->getArea() << std::endl;
    }

    // Освобождаем память
    for (int i = 0; i < 3; ++i) {
        delete shapes[i];
    }

    return 0;
}

