#include <iostream>
#include <cmath>

int main()
{
    using std::cout;
    using std::endl;
    using std::string;

    double x = 3;
    double y = 4;
    double z;

    // z = std::max(x, y);
    // z = std::min(x, y);
    // z = pow(2, 3);
    // z = sqrt(2);
    // z = abs(-43);
    // z = round(3.5);
    // z = ceil(3.5);
    z = floor(3.5);

    cout << z;

    return 0;
}