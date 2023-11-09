#include "dependencies.h"
#include "Shape.h"

class Circle : public Shape {
public:
    Circle();
    Circle(int coordX, int coordY, int size, std::string title);

    void draw();
};