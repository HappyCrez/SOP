#pragma once
#include "dependencies.h"

class Table {
private:
    int cell_count;
    int cell_size;
    int row_count, col_count;
    std::string title;
    std::vector<std::string> table;
public:
    Table (int row_count, int col_count);
    Table (int row_count, int col_count, int cell_size, std::string title);
    void draw();
    void add(std::string item);
    void add(int cell_index, std::string item);
    void add(int row, int col, std::string item);
};