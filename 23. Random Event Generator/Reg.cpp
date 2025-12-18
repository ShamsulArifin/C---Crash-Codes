#include <iostream>
#include <ctime>

int main()
{
    using std::cout, std::cin, std::string, std::endl;

    srand(time(0));

    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1:
        cout << "You win a bumper sticker!" << endl;
        break;
    case 2:
        cout << "You win a t-shirt!" << endl;
        break;
    case 3:
        cout << "You win a free lunch!" << endl;
        break;
    case 4:
        cout << "You win a gift card!" << endl;
        break;
    case 5:
        cout << "You win a umrah tickets!" << endl;
        break;
    default:
        break;
    }

    return 0;
}