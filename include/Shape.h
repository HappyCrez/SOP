#pragma once
#include "dependencies.h"

class Shape {
private:
    static inline int shape_count = 0;

protected:
    int coordX, coordY;
    int size;
    std::string title;

public:
    Shape();
    Shape(int coordX, int coordY, int size, std::string title);
    
    std::string toString();
    virtual void draw();

    static int getShapeObjectsCount();
    
    Shape operator++();
    Shape operator++(int d);
};