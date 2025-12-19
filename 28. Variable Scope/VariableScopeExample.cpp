#include <iostream>

int myNum = 3; //      <-- Global Variable

void printNum();

int main()
{
    using std::cout, std::cin, std::string, std::endl;

    // Local variables = declared inside a function or a block {}
    // Global variables = declared outside of all functions

    int myNum = 1; //      <-- Local variable
    cout << myNum << endl;
    cout << ::myNum << endl; //      <- use scope resolution operator (::)to use the global var

    printNum();

    return 0;
}

void printNum()
{
    int myNum = 2; //      <-- Local variable
    std::cout << myNum << std::endl;
}