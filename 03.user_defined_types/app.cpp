#include "person.h"
#include <iostream>
using namespace std;
int main(){
    
    Person p1("Bob", "Martin");
    // demonstrates scoping    
    {
        Person p2;
    }

    string name = p1.getName();

    cout << "Hello, " << name << endl;
    return 0;
}