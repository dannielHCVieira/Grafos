#include <iostream>
#include <string>
#include "List.h"

using namespace list;
using namespace std;

int main(){
    List lista1;

    lista1.insertAtEnd("A");
    lista1.insertAtEnd("B");
    lista1.insertAtEnd("C");

    lista1.showList();
}