#include "Canvas.h"

Canvas::Canvas() { }

Canvas& Canvas::getInstance() {
    static Canvas instance;
    return instance;
}

void Canvas::draw() {
    drawShapes();
    drawTables();
}

void Canvas::drawShapes() {
    for (auto i : shape_mass)
        (*i).draw();
}

void Canvas::drawTables() {
    for (auto i : table_mass)
        i.draw();
}

void Canvas::addShape(Shape *shape) {
    shape_mass.push_back(shape);
}

void Canvas::addTable(Table &table) {
    table_mass.push_back(table);
}