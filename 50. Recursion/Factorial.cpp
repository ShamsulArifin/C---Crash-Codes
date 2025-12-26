#include <iostream>

int factorial(int num);

int main()
{
  using std::cout, std::cin, std::string, std::endl;

  cout << factorial(5);

  return 0;
}

// ↓ Iterative Approach

// int factorial(int num)
// {
//   int result = 1;
//   for (int i = 1; i <= num; i++)
//   {
//     result = result * i;
//   }
//   return result;
// }

// ↓ Recursive Approach

int factorial(int num)
{
  if (num > 1)
  {
    return num * factorial(num - 1);
  }
  else
  {
    return 1;
  }
}