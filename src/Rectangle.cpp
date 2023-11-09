#include "Rectangle.h"

Rectangle::Rectangle() : Rectangle(0, 0, 30, "Rectangle") { }

Rectangle::Rectangle(int coordX, int coordY, int size, std::string title) : Shape(coordX, coordY, size, title) { }

void Rectangle::draw() {
    fprintf(stdout, "|--%*s--|\n", size, "");
    fprintf(stdout, "%*s\n", int(size/2 + title.length()/2 + 3), title.c_str());
    fprintf(stdout, "|--%*s--|\n", size, "");
}