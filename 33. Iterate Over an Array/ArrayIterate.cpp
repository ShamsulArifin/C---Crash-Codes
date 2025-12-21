#include <iostream>

int main()
{
    using std::cout, std::cin, std::string, std::endl;

    string students[] = {"sam", "max", "liam", "will", "kevin", "ben", "peter", "roy"};

    cout << "List of student names: " << endl;
    for (int i = 0; i < (sizeof(students) / sizeof(string)); i++)
    {
        cout << students[i] << endl;
    }

    cout << "List of grade names: " << endl;
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};

    for (int i = 0; i < (sizeof(grades) / sizeof(char)); i++)
    {
        cout << grades[i] << endl;
    }

    return 0;
}