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
    void draw(FILE *out_stream);
    void drawShapes(FILE *out_stream);
    void drawTables(FILE *out_stream);

    void addShape(Shape *shape);
    void addTable(Table &table);
};