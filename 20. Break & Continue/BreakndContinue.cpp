#include <iostream>

int main()
{
    using std::cout, std::cin, std::string, std::endl;

    // break = break out of a loop
    // continue = skip current iteration

    for (int i = 1; i <= 20; i++)
    {
        if (i == 13)
        {
            continue;
        }
        cout << i << endl;
    }

    for (int i = 1; i <= 20; i++)
    {
        if (i == 13)
        {
            break;
        }
        cout << i << endl;
    }

    return 0;
}