#include "dependencies.h"
#include "Shape.h"

class Rectangle : public Shape {
public:
    Rectangle();
    Rectangle(int coordX, int coordY, int size, std::string title);

    void draw();
};