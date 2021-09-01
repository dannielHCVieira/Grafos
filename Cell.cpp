#include <iostream>
#include <string>
#include "Cell.h"

using namespace cell;
using namespace std;

Cell::Cell(){
    label = "?";
    nextCell = NULL;
}

Cell::Cell(string label){
    this->label = label;
    this->nextCell = NULL;
}

Cell::Cell(string label, Cell* nextCell){
    this->label = label;
    this->nextCell = nextCell;
}

string Cell::getLabel(){
    return this->label;
}

void Cell::setLabel(string label){
    this->label = label;
}

Cell* Cell::getNextCell(){
    return this->nextCell;
}

void Cell::setNextCell(Cell* nextCell){
    this->nextCell = nextCell;
}