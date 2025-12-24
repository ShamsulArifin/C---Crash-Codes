#include <iostream>
void printInfo(const std::string &name, const int &age);

int main()
{
	using std::cout, std::cin, std::string, std::endl;

	// const parameter = parameter that is effectively read-only
	//									 code is more secure & conveys intent
	//									 useful for references & pointers

	string name = "Bro";
	int age = 21;

	printInfo(name, age);

	return 0;
}

void printInfo(const std::string &name, const int &age)
{
	std::cout << name << std::endl;
	std::cout << age << std::endl;
}