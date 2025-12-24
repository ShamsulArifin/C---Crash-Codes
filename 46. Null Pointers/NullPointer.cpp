#include <iostream>

int main()
{
  using std::cout, std::cin, std::string, std::endl;

  // Null value = a special value that means something that has no value.
  //              When a pointer holding null value,
  //              that pointer is not pointing at anything (null pointer)

  // nullptr = keyword represents a null pointer literal

  // nullptrs are helpful when determining if an address
  //  was successfully assigned to a pointer

  int *pointer = nullptr;
  // int *pointer2 = nullptr;

  int x = 123;

  // pointer = &x;

  if (pointer == nullptr)
  {
    cout << "Pointer is empty" << endl;
    cout << *pointer << endl;
  }
  else
  {
    cout << "Pointer is not empty" << endl;
    cout << *pointer << endl;
  }

  // cout << pointer1 << endl;
  // cout << pointer2 << endl;
  // cout << &pointer1 << endl;
  // cout << &pointer2 << endl;

  return 0;
}