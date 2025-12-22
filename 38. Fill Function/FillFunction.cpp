#include <iostream>

int main()
{
	using std::cout, std::cin, std::string, std::endl;

	const int SIZE = 99;
	string foods[SIZE];

	fill(foods, foods + (SIZE / 3), "pizza");
	fill(foods + (SIZE / 3), foods + (SIZE / 3) * 2, "burger");
	fill(foods + (SIZE / 3) * 2, foods + SIZE, "chicken fry");

	for (string food : foods)
	{
		cout << food << endl;
	}

	return 0;
}