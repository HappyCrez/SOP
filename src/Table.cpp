#include "Table.h"
#include "Rectangle.h"

Table::Table (int row_count, int col_count) : Table(row_count, col_count, 20, "My table") { }

Table::Table(int row_count, int col_count, int cell_size, std::string title) {
    this->row_count = row_count;
    this->col_count = col_count;
    this->cell_size = cell_size;
    this->title = title;
    table.resize(row_count * col_count, "");
    cell_count = 0;
}

void Table::draw() {
    Rectangle title_label(0, 0, int(title.length() * 1.5), title);
    title_label.draw();

    for (int i = 0; i < row_count; i ++) {
        fprintf(stdout, "|");
        for (int j = 0; j < col_count; j++)
            fprintf(stdout, "%-*s \t| ", cell_size, table[i * col_count + j].c_str());
        fprintf(stdout, "\n");
    }
}

void Table::add(std::string item) {
    if (cell_count < row_count * col_count)
        table[cell_count++] = item;
    else
        cell_count = 0;
}

void Table::add(int cell_index, std::string item) {
    if (cell_index < 0 || cell_index > row_count * col_count) {
        std::cerr << "\nIndex is over bounds\n";
        return;
    }
    table[cell_count++] = item;
}

void Table::add(int row, int col, std::string item) {
    if (row >= 0 && col >= 0 && row < row_count && col < col_count) {
        std::cerr << "\nIndex is over bounds\n";
        return;
    }
    table[row * col_count + col] = item;

}