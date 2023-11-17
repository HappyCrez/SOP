#include "dependencies.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Table.h"
#include "Canvas.h"

int main(int n, char** args) {
    Circle *circle = new Circle(0, 0, 5, "My the best circle");
    Rectangle *rectangle = new Rectangle();

    fprintf(stdout, "\nShapes count = %d\n", Shape::getShapeObjectsCount());

    Table table(2, 3, 10, "My the best title ever");
    table.add("Hello");
    table.add("World");
    table.add("it's me !");
    
    table.add("ID");
    table.add("Name");
    table.add("Surname");

    Canvas &canvas = Canvas::getInstance();
    canvas.addShape(circle);
    canvas.addShape(rectangle);
    canvas.addTable(table);
    
    canvas.draw();
}