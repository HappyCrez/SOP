#include "Circle.h"

Circle::Circle() : Circle(0, 0, 30, "Circle") { }

Circle::Circle(int coordX, int coordY, int size, std::string title) : Shape(coordX, coordY, size, title) { }

void Circle::draw(FILE *out_stream) {
    for (int i = size - 1 - (size / 5); i > 0; i--) {
        fprintf(out_stream, "%*c%*c\n", i*i, '*', size*size - i*i*2, '*');
    }
    
    for (int i = 0; i < size - (size / 5); i++) {
        if (i == 0) {
            int center;
            if (size*size > title.length()) {
                center = int(size*size/2 - title.length()/2);
                fprintf(out_stream, "%-*c%s%*c\n", center, '*', title.c_str(), center, '*');
            }
            else {
                center = int(size*size/2 - 1.5);
                fprintf(out_stream, "%-*c%s%*c\n", center, '*', "...", center, '*');
            }
        }
        else {
            fprintf(out_stream, "%*c%*c\n", i*i, '*', size*size - i*i*2, '*');
        }
    }
}