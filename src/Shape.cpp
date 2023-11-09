#include "Shape.h"

Shape::Shape() : Shape(0, 0, 30, "Shape") { }

Shape::Shape(int coordX, int coordY, int size, std::string title) {
    Shape::coordX = coordX;
    Shape::coordY = coordY;
    Shape::size = size;
    Shape::title = title;
}

std::string Shape::toString() {
    return "Shape class\n";
}

void Shape::draw() { }