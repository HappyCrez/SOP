#pragma once
#include "dependencies.h"

class Shape {
protected:
    int coordX, coordY;
    int size;
    std::string title;

public:
    Shape();
    Shape(int coordX, int coordY, int size, std::string title);
    
    std::string toString();
    void draw();
};