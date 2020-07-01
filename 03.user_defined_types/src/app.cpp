#include "./../header_files/tweeter.h"

#include <iostream>
using namespace std;
int main(){
    
    Person p1("Bob", "Martin");
    string name;
    string name2;
    // demonstrates scoping    
    {
        Tweeter t1("Martin", "Fowler", "@martinfowler");
        name2 = t1.getName();
        cout << "Hello, " << name2 << endl;
    }

    name = p1.getName();    
    cout << "Hello, " << name << endl;
    return 0;
}