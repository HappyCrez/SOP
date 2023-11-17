#include "dependencies.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Table.h"
#include "Canvas.h"
#include "Complex.h"

int main(int n, char** args) {
    Complex num1(4.24,20.12);
    Complex num2(7.9,11.19);
    Complex result;
    result = num1 + num2;
    std::cout << "complex1 + complex2 = " << result << std::endl;

    result = num1 - num2;
    std::cout << "complex1 - complex2 = " <<result << std::endl;

    result = num1 * num2;
    std::cout << "complex1 * complex2 = " <<result << std::endl;

    result = num1 / num2;
    std::cout << "complex1 / complex2 = " <<result << std::endl;

    Circle *circle = new Circle(0, 0, 5, "My the best circle");
    Rectangle *rectangle = new Rectangle();
    (*rectangle)++; // increase rect size by 1
    ++(*rectangle); // increase rect size by 1

    fprintf(stdout, "\nShapes count = %d\n", Shape::getShapeObjectsCount());

    Table table(2, 3, 10, "My the best title ever");
    table.add("ID");
    table.add("Name");
    table.add("Surname");
    
    table.add("PI-21");
    table.add("Vladimir");
    table.add("Gorbunov");

    Canvas &canvas = Canvas::getInstance();
    canvas.addShape(circle);
    canvas.addShape(rectangle);
    canvas.addTable(table);
    
    canvas.draw();
}