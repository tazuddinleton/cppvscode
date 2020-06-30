#include "person.h"

Person::Person(string fname, string lname, int booksPurchased, double spent)
:firstname(fname), lastname(lname), numOfBooksPurchased(booksPurchased), totalSpent(spent){}

Person::Person(string fname, string lname):firstname(fname), lastname(lname){}

string Person::getName()
{
    return firstname + " " + lastname;
}