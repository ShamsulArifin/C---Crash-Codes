#include <iostream>

int main()
{
	using std::cout, std::cin, std::string, std::endl;

	// pointers = variable that stores a memory address of another variable
	//						sometimes it's easier to work with an address

	// '&' address-of operator
	// '*' dereference operator

	string name = "Sam";
	int age = 21;
	string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

	string *pName = &name;
	int *pAge = &age;
	string *pFreePizzas = freePizzas;

	cout << "'name' variable value: " << name << endl;
	cout << "'pName' pointer variable value: " << pName << endl;
	cout << "Address of 'pName' pointer variable: " << &pName << endl;
	cout << "Address of 'name' variable: " << &name << endl;
	cout << "Dereferencing 'pName' pointer variable: " << *pName << endl;

	cout << "***************************************" << endl;

	cout << "'age' variable value: " << age << endl;
	cout << "'pAge' pointer variable value: " << pAge << endl;
	cout << "Address of 'pAge' pointer variable: " << &pAge << endl;
	cout << "Address of 'age' variable: " << &age << endl;
	cout << "Dereferencing 'pAge' pointer variable: " << *pAge << endl;

	cout << "***************************************" << endl;

	cout << "'freePizzas' variable value: " << freePizzas << endl;
	cout << "'pFreePizzas' pointer variable value: " << pFreePizzas << endl;

	return 0;
}