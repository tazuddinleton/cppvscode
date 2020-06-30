#include "person.h"
#include <iostream>

int main(){

    Person p1("Bob", "Martin");
    
    Person p2;

    string name = p1.getName();

    cout << "Hello, " << name << endl;
    return 0;
}