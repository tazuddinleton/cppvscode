#include "person.h"

class Tweeter : public Person 
{

    private:
        std::string handle;
    public:
        Tweeter(std::string fname, std::string lname, std::string handle);
        ~Tweeter();
};