#include <string>
using namespace std;

class Person 
{
    private:
        string firstname;
        string lastname;
        int numOfBooksPurchased;
        double totalSpent;

    public:
        string getName();    

    Person()=default;
    Person(string fname, string lname);
    Person(string fname, string lname, int bookPurchased, double spent);
    
};

