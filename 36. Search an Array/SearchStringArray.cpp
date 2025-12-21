#include <iostream>
#include <string>

int searchArray(std::string array[], int size, std::string element);

int main()
{
	using std::cout, std::cin, std::string, std::endl;

	string foods[] = {"pizza", "burger", "fried chicken", "ice-tea"};

	int size = sizeof(foods) / sizeof(int);
	int index;
	string myFood;

	cout << "Enter food to search for: " << endl;
	std::getline(cin, myFood);

	index = searchArray(foods, size, myFood);

	if (index != -1)
	{
		cout << myFood << " is at index: " << index << endl;
	}
	else
	{
		cout << myFood << " is not in the array" << endl;
	}

	return 0;
}

int searchArray(std::string array[], int size, std::string element)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i] == element)
		{
			return i;
		}
	}

	return -1;
}