#include <string>

class Person 
{
    private:
        std::string firstname;
        std::string lastname;
        int numOfBooksPurchased;
        double totalSpent;

    public:
        std::string getName();    
        Person();
        Person(std::string fname, std::string lname);
        Person(std::string fname, std::string lname, int bookPurchased, double spent);
        ~Person();
};

