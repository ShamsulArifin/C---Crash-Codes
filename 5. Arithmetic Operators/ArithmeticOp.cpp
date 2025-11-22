#include <iostream>

int main()
{
    using std::cout;
    using std::endl;
    using std::string;

    /*
    arithmetic operators returns the result of a specific
    arithmetic operation
    */

    int students = 20;
    students = students + 1;
    // or
    students += 1;
    // or
    students++;

    students = students - 1;
    // or
    students -= 1;
    // or
    students--;

    students = students * 2;
    // or
    students *= 2;

    students = students / 2;
    // or
    students /= 2;

    int remainder = students % 3;

    //order of precedence
    /*
    parenthesis
    multiplication & division
    addition & subtraction
    */

    cout << students << endl;
    cout << remainder << endl;

    return 0;
}