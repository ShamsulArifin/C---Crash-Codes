#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;

// can also use 'using' keyword
using name_t = std::string;
using age_t = int;


int main()
{
    using std::cout;
    using std::endl;

    /*
    typedef reserved keyword used to create an additional name
    (alias) for another data type.
    New identifier for an existing type
    Helps with readability and reduces typos
    Use when there is a clear benefit
    Replaced with 'Using' (work better w/ templates)
    */

    // std::vector<std::pair<std::string, int>> pairlist;
    // instead can use the alias defined at top
    pairlist_t pairlist;

    text_t firstName = "Sam";
    number_t age = 10;

    cout << firstName << endl;
    cout << age << endl;

    name_t name = "Wally";
    age_t year = 2010;

    cout << name << endl;
    cout << year << endl;

    return 0;
}