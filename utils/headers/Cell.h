
#ifndef CELL_H
#define CELL_H

#include <iostream>
#include <string>

using namespace std;

namespace cell{
    class Cell {
        private:
            std::string label;
            Cell* nextCell;
        public:
            Cell();

            Cell(string label);

            Cell(string label, Cell* nextCell);

            string getLabel();

            void setLabel(string label);

            Cell* getNextCell();

            void setNextCell(Cell* nextCell);
    };
}

#endif