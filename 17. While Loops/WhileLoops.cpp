#include <iostream>
#include <string>

int main()
{
    using std::cout, std::cin, std::string, std::endl;

    string name;

    while(name.empty())
    {
        cout << "Enter your name: ";
        std::getline(cin, name);
    }

    // while(1==1)
    // {
    //     cout << "Help I'm stuck in an infinite loop";
    // }

    cout << "Hello " << name;

    return 0;
}