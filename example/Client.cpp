#include "dependencies.h"
#include "Circle.h"
#include "Rectangle.h"

int main(int n, char** args) {
    Circle circle(0, 0, 5, "My the best circle");
    circle.draw();

    Rectangle rectangle;
    rectangle.draw();
}