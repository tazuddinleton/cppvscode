#include "./../header_files/tweeter.h"
#include <iostream>


Tweeter::Tweeter(std::string fname, std::string lname, std::string handle)
        :Person(fname, lname), handle(handle)
        {
            std::cout << "Construcing tweeter for " << 
            getName() << " with handle " << handle << std::endl;
        }
Tweeter::~Tweeter(){
    std::cout << "Destrucing tweeter with handle " << handle << std::endl;
}