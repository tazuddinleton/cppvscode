#include "person.h"
#include <iostream>

Person::Person(){
    std::cout << "Constructing: " << getName() << endl;
}

Person::Person(string fname, string lname, int booksPurchased, double spent)
:firstname(fname), lastname(lname), numOfBooksPurchased(booksPurchased), totalSpent(spent){}

Person::Person(string fname, string lname):firstname(fname), lastname(lname){
    std::cout << "Constructing: " << getName() << endl;
}

Person::~Person(){
    std::cout << "Destructing: " << getName() << endl;
}

string Person::getName()
{
    return firstname + " " + lastname;
}