#include "Canvas.h"

Canvas::Canvas() { }

Canvas& Canvas::getInstance() {
    static Canvas instance;
    return instance;
}

void Canvas::draw(FILE *out_stream) {
    drawShapes(out_stream);
    drawTables(out_stream);
}

void Canvas::drawShapes(FILE *out_stream) {
    for (auto i : shape_mass)
        (*i).draw(out_stream);
}

void Canvas::drawTables(FILE *out_stream) {
    for (auto i : table_mass)
        i.draw(out_stream);
}

void Canvas::addShape(Shape *shape) {
    shape_mass.push_back(shape);
}

void Canvas::addTable(Table &table) {
    table_mass.push_back(table);
}