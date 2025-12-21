#include <iostream>

int main()
{
    using std::cout, std::cin, std::string, std::endl;

    // foreach loop = loop that eases the traversal over an iterable data set

    string students[] = {"sam", "max", "liam", "will", "kevin", "ben", "peter", "roy"};

    for (string student : students)
    {
        cout << student << endl;
    }

    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    for (char grade : grades)
    {
        cout << grade << endl;
    }

    return 0;
}