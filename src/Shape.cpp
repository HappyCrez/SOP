#include "Shape.h"

Shape::Shape() : Shape(0, 0, 30, "Shape") { }

Shape::Shape(int coordX, int coordY, int size, std::string title) {
    Shape::coordX = coordX;
    Shape::coordY = coordY;
    Shape::size = size;
    Shape::title = title;
    shape_count++;
}

std::string Shape::toString() {
    return "Shape class\n";
}

void Shape::draw(FILE *out_stream) {
    fprintf(out_stream, "<%*s>\n", size / 2, "Shape method called");
}

int Shape::getShapeObjectsCount() {
    return shape_count;
}

Shape Shape::operator++() {
    this->size++;
    return *this;
}

Shape Shape::operator++(int d) {
    this->size++;
    return *this;
}

Shape& Shape::operator=(const Shape& shape) {
    if (&shape != this) {
        size = shape.size;
        title = shape.title;
        coordX = shape.coordX;
        coordY = shape.coordY;
    }
    return *this;
}

int Shape::getSize() {
    return size;
}