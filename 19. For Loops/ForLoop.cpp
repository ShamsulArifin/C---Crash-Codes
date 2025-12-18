#include <iostream>

int main()
{
    using std::cout, std::cin, std::string, std::endl;

    for (int i = 10; i >= 0; i--)
    {
        cout << "Loop(" << i << ")" << endl;
    }

    cout << "Loop Ended!" << endl;

    return 0;
}