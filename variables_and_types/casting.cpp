
#include <iostream>

using namespace std;

int main(){

    double d1 = 2.2;
    

    // this is unsafe, we lose the decimal part
    // this generates warning
    int i1 = d1; 

    // this is safe cast, this tells the compiler 
    // that you know what you are doing
    // this will remove the warning
    int i2 = static_cast<int>(d1);

    
return 0;
}