#include <iostream>

int searchArray(int array[], int size, int element);

int main()
{
	using std::cout, std::cin, std::string, std::endl;

	int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	int size = sizeof(numbers) / sizeof(int);
	int index;
	int myNum;

	cout << "Enter element to search for: " << endl;
	cin >> myNum;

	index = searchArray(numbers, size, myNum);

	if (index != -1)
	{
		cout << myNum << " is at index: " << index << endl;
	}
	else
	{
		cout << myNum << " is not in the array" << endl;
	}

	return 0;
}

int searchArray(int array[], int size, int element)
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