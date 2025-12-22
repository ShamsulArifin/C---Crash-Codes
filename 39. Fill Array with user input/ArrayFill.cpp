#include <iostream>
#include <string>
int main()
{
	using std::cout, std::cin, std::string, std::endl;

	string foods[5];
	int size = sizeof(foods) / sizeof(string);
	string temp;

	for (int i = 0; i < size; i++)
	{
		cout << "Enter a food you like  or 'q' to quit #" << i + 1 << " : ";
		getline(cin, temp);
		if (temp == "q")
		{
			break;
		}
		else
		{
			foods[i] = temp;
		}
	}

	if (!foods->empty())
	{
		cout << "You like the following foods:" << endl;

		for (int i = 0; !foods[i].empty(); i++)
		{
			cout << foods[i] << endl;
		}
	}
	else
	{
		cout << "There is no foods you like." << endl;
	}

	return 0;
}