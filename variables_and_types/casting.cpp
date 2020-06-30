
#include <iostream>

using namespace std;

int main(){

    double d1 = 2.2;
    

    int i1 = d1; // this is unsafe, we lose the decimal part


    // this is safe cast 
    int i2 = static_cast<int>(d1);

    
return 0;
}