#include <iostream>
#include <string>

//cout << (insertion operator)
//cin >> (extraction operator)

int main()
{
    using std::cout;
    using std::cin;
    using std::string;
    using std::endl;

    string name;
    string age;

    cout << "What's your name? : ";
    // cin >> name;
    std::getline(cin >> std::ws, name);        // to take a string including whitespace. std::ws will eliminate any newline character or any whitespaces

    cout << "What's your age? : ";
    cin >> age;

    cout << "Hello " << name << endl;
    cout << "You are " << age << " years old" << endl;

    return 0;
}