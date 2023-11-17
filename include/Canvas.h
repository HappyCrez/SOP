#pragma once
#include "dependencies.h"
#include "Shape.h"
#include "Table.h"

class Canvas {
private:
    Canvas();
    Canvas(Canvas const&);

    std::vector<Shape*> shape_mass;
    std::vector<Table> table_mass;
public:
    static Canvas& getInstance();
    void draw();
    void drawShapes();
    void drawTables();

    void addShape(Shape *shape);
    void addTable(Table &table);
};