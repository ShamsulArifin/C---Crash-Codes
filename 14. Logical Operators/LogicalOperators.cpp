#include <iostream>

int main()
{
    using std::cout, std::cin, std::string, std::endl;

    // && = check if two conditions are true
    // || = check if at least one of two conditions is true
    // ! = reverses the logical state of its operand

    int temp;
    bool sunny = false;

    cout << "Enter the temperature: ";
    cin >> temp;

    // if (temp > 0 && temp < 30)
    // {
    //     cout << "The temperature is good!";
    // }
    // else
    // {
    //     cout << "The temperature is bad!";
    // }

    if (temp <= 0 || temp >= 30)
    {
        cout << "The temperature is bad!";
    }
    else
    {
        cout << "The temperature is good!";
    }

    if (!sunny)
    {
        cout << "It is not not sunny outside";
    }
    else
    {
        cout << "It is sunny outside";
    }

    return 0;
}