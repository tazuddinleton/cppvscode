#include "person.h"
#include <iostream>

int main(){
    
    Person p1("Bob", "Martin");
    Person p2;

    int i(10);

    {
        Person p2;
    }

    string name = p1.getName();

    std::cout << "Hello, " << name << endl;
    return 0;
}