#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <string>
#include "Cell.h"

using namespace cell;

namespace list{
    class List {
        public:
            Cell* start;
            Cell* end;
            int qtd;

            List();

            List(Cell* start, Cell* end);

            void insertAtStart(string value);
            void insertAtEnd(string value);
            void insertAtPosition(string value, int pos);

            string deleteAtStart();
            string deleteAtEnd();
            string deleteAtPosition();

            string updateAtStart(string value);
            string updateAtEnd(string value);
            string updateAtPosition(string value, int pos);

            int searchValue(string value);
            int searchPosition(int pos);

            void showList();
    };
}

#endif