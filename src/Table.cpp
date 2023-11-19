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

void Table::draw(FILE *out_stream) {
    Rectangle title_label(0, 0, int(title.length() * 1.5), title);
    title_label.draw(out_stream);

    for (int i = 0; i < row_count; i ++) {
        fprintf(out_stream, "|");
        for (int j = 0; j < col_count; j++)
            fprintf(out_stream, "%-*s \t| ", cell_size, table[i * col_count + j].c_str());
        fprintf(out_stream, "\n");
    }
}

void Table::add(std::string item) {
    if (cell_count < row_count * col_count)
        table[cell_count++] = item;
    else
        cell_count = 0;
}

void Table::add(int cell_index, std::string item) {
    try {
        if (cell_index < 0 || cell_index > row_count * col_count) {
            throw std::exception("Index is over bounds");
        }
        table[cell_count++] = item;
    }
    catch(std::exception &e) {
        std::cerr << e.what() << std::endl;;
    }
}

void Table::add(int row, int col, std::string item) {
    try {
        if (row >= 0 && col >= 0 && row < row_count && col < col_count) {
            throw std::exception("Index is over bounds");
        }
        table[row * col_count + col] = item;    
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}