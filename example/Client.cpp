#include "dependencies.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Table.h"
#include "Canvas.h"
#include "Complex.h"
#include "Generic.h"

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

    // Throw exception by division zero
    result = num1 / Complex(0, 0);
    std::cout << "complex1 / complex2 = " <<result << std::endl;

    Circle *circle = new Circle(0, 0, 5, "My the best circle");
    Rectangle *rectangle = new Rectangle();
    (*rectangle)++; // increase rect size by 1
    ++(*rectangle); // increase rect size by 1

    fprintf(stdout, "\nShapes count = %d\n", Shape::getShapeObjectsCount());

    Table *table = new Table(2, 3, 10, "My the best title ever");
    (*table).add("ID");
    (*table).add("Name");
    (*table).add("Surname");
   
    (*table).add("PI-21");
    (*table).add("Vladimir");
    (*table).add("Gorbunov");

    Canvas &canvas = Canvas::getInstance();
    canvas.addShape(circle);
    canvas.addShape(rectangle);
    canvas.addTable(table);
    
    // FILE *out_stream = fopen("mytxt.txt", "w");
    canvas.draw(stdout);
    // Lab6
    // We can create ever object by using basic template
    Generic int_id(1023);
    Generic string_id("1234");
    Generic ring(circle);
    // etc.
}