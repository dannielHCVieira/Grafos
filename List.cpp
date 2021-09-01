#include <iostream>
#include <string>
#include "List.h"

using namespace list;
using namespace std;

List::List(){
    this->start = new Cell();
    this->end = this->start;
    this->qtd = 0;
}

List::List(Cell* start, Cell* end){
    this->start = start;
    this->end = end;
    this->qtd = 0;
}

void List::insertAtStart(string value){
    Cell* temp = new Cell(value);
    temp->setNextCell(this->start->getNextCell());
    this->start->setNextCell(temp);

    if(this->start == this->end){
        this->end = temp;
    }

    temp = NULL;
}

void List::insertAtEnd(string value){
    this->end->setNextCell((new Cell(value)));
    this->end = this->end->getNextCell();
}

void List::showList(){
    Cell* walk = this->start;
    cout << "[";
    while(walk != this->end){
        cout << walk->getLabel() << " ";
    }
    cout << "]\n";
    walk = NULL;
}