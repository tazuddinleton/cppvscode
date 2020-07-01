#include "./../header_files/person.h"
#include <iostream>

Person::Person(){
    std::cout << "Constructing: " << getName() << std::endl;
}

Person::Person(std::string fname, std::string lname, int booksPurchased, double spent)
:firstname(fname), lastname(lname), numOfBooksPurchased(booksPurchased), totalSpent(spent){}

Person::Person(std::string fname, std::string lname):firstname(fname), lastname(lname){
    std::cout << "Constructing: " << getName() << std::endl;
}

Person::~Person(){
    std::cout << "Destructing: " << getName() << std::endl;
}

std::string Person::getName()
{
    return firstname + " " + lastname;
}