#include <iostream>
#include <string>

using namespace std;
int main()
{
// https://docs.microsoft.com/en-us/cpp/cpp/data-type-ranges?view=vs-2019
    int i1 = 1;
    cout << "i1 = " << i1 << endl;

    int i2;
    //cout << "i2 (uninitialized) = " << i2 << endl;

    i2 = 2;
    cout << "i2 (initialized) = " << i2 << endl;
    // paren assignment
    int i3(3);
    cout << "i3= " << i3 << endl;
    // curly assignment 
    int i4{4};
    cout << "i4 = " << i4 << endl;

    

    double d1 = 2.2;
    double d2 = i1;

    int i5 = d1;
    cout << "d1 = " << d1 << endl; // 2.2
    cout << "d2 = " << d2 << endl; // 1
    cout << "i5 = " << i5 << endl; // 2 because truncated, NO COMPILE TIME ERROR, NO RUN TIME ERROR

    char c1 = 'a';
    // char c2 = "b"; // COMPILE ERROR
    cout << "c1 = " << c1 << endl;


    bool flag = false;
    cout << "flag = " << flag << endl;

    flag = i1; // bool = int 
    cout << "flag = " << flag << endl;
    flag = d1; // bool = double
    cout << "flag = " << flag << endl;


    // the types of the following variables will be infered at compile time    

    auto a1 = 1;
    auto a2 = 2.2;
    auto a3 = 'c';
    auto a4 = "s";
    auto a5 = true;
    auto a6 = 3L;
    auto a7 = 1'000'000'000'000;
    auto a8 = 0xFF; // 255
    auto a9 = 0b111; // 7


    cout << "a8 = " << a8 << endl;
    cout << "a9 = " << a9 << endl;

    a1 = a2;


    unsigned char n1 = 128;
    char n2 = 128;

    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;

    n1 = 254;
    n2 = 254;

    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;

    n1 = 300;
    n2 = 300;

    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;


    return 0;
}