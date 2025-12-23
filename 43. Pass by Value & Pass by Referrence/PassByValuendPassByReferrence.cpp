#include <iostream>

void swap(std::string &x, std::string &y);

int main()
{
	using std::cout, std::cin, std::string, std::endl;

	string x = "Kool-Aid";
	string y = "Water";

	swap(x, y);

	cout << "X: " << x << endl;
	cout << "Y: " << y << endl;

	cout << "X: " << &x << endl;
	cout << "Y: " << &y << endl;

	return 0;
}

void swap(std::string &x, std::string &y)
{
	std::cout << "X: " << &x << std::endl;
	std::cout << "Y: " << &y << std::endl;
}