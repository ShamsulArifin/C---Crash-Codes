#include <iostream>

int main()
{
    using std::cout, std::cin, std::string, std::endl;

    // sizeof() = determines the size in bytes of a:
    // variable, data type, class, objects, etc.

    string name = "Sam wolf";
    double gpa = 2.5;
    char grade = 'A';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    string students[] = {"sam", "max", "liam", "will", "kevin", "ben", "peter", "roy"};

    cout << sizeof(string) << " bytes" << endl;
    cout << sizeof(name) << " bytes" << endl;
    cout << sizeof(double) << " bytes" << endl;
    cout << sizeof(gpa) << " bytes" << endl;
    cout << sizeof(char) << " bytes" << endl;
    cout << sizeof(grade) << " bytes" << endl;
    cout << sizeof(bool) << " bytes" << endl;
    cout << sizeof(student) << " bytes" << endl;

    cout << sizeof(grades) << " bytes" << endl;
    cout << sizeof(grades) / sizeof(char) << " elements" << endl;

    cout << sizeof(students) << " bytes" << endl;
    cout << sizeof(students) / sizeof(string) << " elements" << endl;

    return 0;
}